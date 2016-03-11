#! /bin/bash

if [ "$(git config --get remote.origin.url)" -ne "git@github.com:LaunchCodeEducation/cs50x-live.git" ]; then
	echo "not running on child"
	exit 0
fi

if [ "$(git rev-parse --abbrev-ref HEAD)" -ne "master" ]; then
	echo "not running on non-master branch"
	exit 0
fi

git fetch --unshallow

if [[ $? != 0 ]]; then
	echo "unable to 'deepen' repository"
	exit 2
fi

git config --global user.email "kegan+ci@launchcode.org"
git config --global user.name "launch-ci"

CHILD_SSH_KEY="${TRAVIS_BUILD_DIR}/scripts/deploy_ssh_key"

openssl aes-256-cbc -K $encrypted_30536b4245ad_key -iv $encrypted_30536b4245ad_iv -in scripts/deploy_ssh_key.enc -out "${CHILD_SSH_KEY}" -d


eval $(ssh-agent)
chmod 400 "${CHILD_SSH_KEY}"
ssh-add "${CHILD_SSH_KEY}"


PREFIX="git@github.com:LaunchCodeEducation"
CHILDREN=("cs50x-stlouis" "cs50x-kansascity")



FAILURES=()

TEMPDIR=$(mktemp -d)
pushd "${TEMPDIR}"


for CHILD in "${CHILDREN[@]}"; do
	git clone "${PREFIX}/${CHILD}"

	if [[ $? != 0 ]]; then
		exit 1
	fi

	pushd "${CHILD}"
		git remote add upstream "file://${TRAVIS_BUILD_DIR}"
		git checkout gh-pages
		git pull -q --commit --no-edit upstream master

		# if merge conflicts, deal with it
		if [[ $? != 0 ]]; then
			# add this to FAILURES array
			FAILURES+="${CHILD}"
			# skip to next iteration
			continue
		fi

		# eat couscous
		"${TRAVIS_BUILD_DIR}/update-website.sh" #generate

		# commit and push
		#git commit -a -m "automatically building html using couscous triggered by build number ${TRAVIS_BUILD_NUMBER}"
		#git push origin gh-pages

	popd
done

echo 
echo 
echo
echo "there were ${#FAILURES[@]} failures" 

if [[ ${#FAILURES[@]} != 0 ]]; then
	echo "failures were ${FAILURES[*]}"
	exit 1
fi

popd
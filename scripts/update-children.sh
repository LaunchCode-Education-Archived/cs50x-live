#! /bin/bash

openssl aes-256-cbc -K $encrypted_30536b4245ad_key -iv $encrypted_30536b4245ad_iv -in scripts/deploy_ssh_key.enc -out scripts/deploy_ssh_key -d


eval $(ssh-agent)
ssh-add "${TRAVIS_BUILD_DIR}/scripts/deploy_ssh_key"


PREFIX="git@github.com:LaunchCodeEducation"
CHILDREN=("cs50x-stlouis")


FAILURES=()

TEMPDIR=$(mktemp -d)
pushd "${TEMPDIR}"


for CHILD in "${CHILDREN[@]}"; do
	git clone "${PREFIX}/${CHILD}"

	if [[ $? != 0 ]]; then
		exit 1
	fi

	pushd "${CHILD}"
		git remote add upstream "${TRAVIS_BUILD_DIR}"
		git checkout gh-pages
		git pull -q --commit upstream master

		# if merge conflicts, deal with it
		if [[ $? != 0 ]]; then
			# add this to FAILURES array
			FAILURES+="${CHILD}"
			# skip to next iteration
			continue
		fi

		# eat couscous
		"${TRAVIS_BUILD_DIR}/couscous" generate

		# commit and push
		git commit -a -m "automatically building html using couscous triggered by build number ${TRAVIS_BUILD_NUMBER}"
		# git push origin gh-pages
		git log

	popd
done

echo 
echo 
echo
echo "there were ${#FAILURES[@]} failures" 

if [[ ${#FAILURES[@]} != 0 ]]; then
	echo "failures were ${FAILURES[*]}"
fi

popd
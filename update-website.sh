#!/bin/sh

git pull origin gh-pages
git fetch upstream
git merge upstream/master
git push origin gh-pages
./couscous deploy
git pull origin gh-pages

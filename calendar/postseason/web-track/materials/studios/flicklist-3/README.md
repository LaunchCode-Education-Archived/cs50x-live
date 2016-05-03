##### Web Track
[Back to Class 3](../../class3)

# Studio: FlickList 3

Today you will add a little bit more functionality to the project, but the main improvements will be aesthetic. You will Bootstrapify the page, using the Bootstrap library to apply a bunch of nice styles, as well as a responsive Bootstrap Grid layout.

### Demo

Here is a demo of what you are trying to accomplish: <a href="http://htmlpreview.github.io/?https://github.com/LaunchCodeEducation/flicklist/blob/b19ea10df9355f8079047e8b1f48e0a8e31a2ba9/index.html" target="_blank">FlickList 3 Demo</a>. Play around with the demo for a minute and get familiar with its features. Also, keep the demo open in a separate window, so you can refer to it while working on the assignment.

Note the following additions since last time:
* Watchlist items have an "I watched it" button, which allows the user to cross that movie off their list.
* Watchlist items have pictures!
* The page layout changes responsively with the size of the screen. When the widnow is sufficiently wide, the browse list shows up in its own column, to the right of of the Watchlist. Otherwise, the browse list is positioned below the Watchlist as before. (Try this now if you haven't already. Open the demo and play modify the window size, and observe how the page layout responds.)
* Various stylistic changes

### Starter Code

First, fetch the studio3 branch from upstream:

```nohighlight
$ git fetch upstream studio3
remote: Counting objects: 21, done.
remote: Compressing objects: 100% (15/15), done.
remote: Total 21 (delta 6), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (21/21), done.
From https://github.com/LaunchCodeEducation/flicklist
 * branch            studio2    -> FETCH_HEAD
   74b1223..fe10c4f  studio2    -> upstream/studio3
```

Then, checkout a new local branch:

```nohighlight
$ git checkout -b studio3-my-work upstream/studio3
Branch studio3-my-work set up to track remote branch studio3 from upstream.
Switched to a new branch 'studio3-my-work'
```

### A Brief Tour

Let's look briefly at what has changed in each of our files:

##### index.html

##### flicklist.js

##### styles.css

### Assignment

Work your way through the TODOs in the source code. The tasks are numbered. You should work on them in the order prescribed, as follows:

##### 0. API key

As usual, add your api key to the object near the top of `flicklist.js`.

##### 1. 

##### 2. 

### How to Submit

As usual, first, commit your work on Git and push to a new branch on your GitHub repo. Then, submit a link to your repo on Vocareum.

##### Commit and Push

If you run the `git status` command, you should see that you now have *unstaged* changes:

```nohighlight
$ git status
On branch studio3-my-work
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)
      
        modified:   css/styes.css
        modified:   index.html
        modified:   js/flicklist.js

no changes added to commit (use "git add" and/or "git commit -a")
```

We can stage these changes with the `add` command:

```nohighlight
$ git add --all
```

The `--all` adds all of the unstaged files, so you don't have to type them one by one.

If you check your status again now, you should see:

```nohighlight
$ git status
On branch studio3-my-work
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)
        modified:   css/styes.css
        modified:   index.html
        modified:   js/flicklist.js
```

All the files are now staged for committing. Go ahead and make a commit, using the -m flag to remind your future self (and others looking at your code) what changes you made during this commit:

```nohighlight
$ git commit -m "finish FlickList 3 studio"
[studio2-my-work 46db232] finish FlickList 3 studio
 3 files changed, 3 insertions(+), 3 deletions(-)
```

The convention is to write your commit messages using the present tense rather than past tense (e.g. "finish" rather than "finished").

If you check your status one more time, you should see this:

```nohighlight
$ git status
On branch studio3-my-work
nothing to commit, working directory clean
```

Finally, *push* your changes to your remote repo:

```nohighlight
$ git push origin studio3-my-work
Counting objects: 62, done.
Delta compression using up to 8 threads.
Compressing objects: 100% (20/20), done.
Writing objects: 100% (22/22), 2.36 KiB | 0 bytes/s, done.
Total 22 (delta 6), reused 0 (delta 0)
To https://github.com/jharvard/flicklist.git
 * [new branch]      studio3-my-work -> studio3-my-work
```

If you go back and revisit github.com/jharvard/flicklist, you should now see your new branch up there! Specificially, near the top-left of the screen, you should see a dropdown menu that says "Branch: master". Click that dropdown and you should see an option for "studio3-my-work". Click on that branch, and you should now see the code you just worked on. Copy the current url in your browser's address bar (you are about to paste that url into Vocareum).

##### Submit on Vocareum

On Vocareum, click the assignment titled **Studio: FlickList 3**. In your `/work` directory you should see a file called `studio3.txt`. Open up this file and fill in the link to your work on GitHub.

##### Web Track
[Back to Class 2](../../class2)

# Studio: FlickList 2

Today we will add a hodge-podge of miscellaneous new features to our movie site. We'll include some CSS to apply styles to the page, and build on our interaction with the API. 

Along the way, hopefully you will continue to get more comfortable with jQuery, CSS, AJAX, making API calls, and working with HTML forms.

### Demo

Here is a demo of what you are trying to accomplish: <a href="http://htmlpreview.github.io/?https://github.com/LaunchCodeEducation/flicklist/blob/f3dae711763c73f56267ac35e076c56383183829/index.html" target="_blank">FlickList 2 Demo</a>. Play around with the demo for a minute and get familiar with its features.

Note the following additions since last time:
* In the browse list, each movie is accompanied by a paragraph summarizing its plot.
* Once the user clicks the "Add to Watchlist" button for a movie, the button then becomes disabled, preventing the same movie from being added more than once.
* In the watchlist, each movie is represented by an orange rectangle. These rectangles line up next to each other from left to right, without skipping down to a new line until they run out of space on the right-hand side of their container.
* The page has some styles and is a little prettier than before.
* At the top of the browselist, there is a search bar which users can use to search for particular movies. Upon submitting the form, the browse list repopulates full of movies with matching titles.

### Git Yer Hands on the Starter Code

Same procedure as usual here. First, fetch the studio2 branch from upstream:

```nohighlight
$ git fetch upstream studio2
remote: Counting objects: 21, done.
remote: Compressing objects: 100% (15/15), done.
remote: Total 21 (delta 6), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (21/21), done.
From https://github.com/LaunchCodeEducation/flicklist
 * branch            studio2    -> FETCH_HEAD
   74b1223..fe10c4f  studio2    -> upstream/studio2
```

Then, checkout a new local branch:

```nohighlight
$ git checkout -b studio2-my-work upstream/studio2
Branch studio2-my-work set up to track remote branch studio2 from upstream.
Switched to a new branch 'studio2-my-work'
```

### A Brief Tour

##### index.html
##### flicklist.js
##### styles.css

### Assignment

##### 0. API key

##### 1. Add a Description Paragraph to Each Browselist Item

##### 2. Disable Buttons

##### 3. Give Watchlist Items a Class Attribute

##### 4. Style the Watchlist Items as Orange Bricks

##### 5. Change the Text Color to Gray

##### 6. Style the Buttons

##### 7. Add a Form to the Page

##### 8. Add a Submit Handler to the Form

##### 9. Implement the `searchMovies` Function

### How to Submit

##### Commit and Push

If you run the `git status` command, you should see that you now have *unstaged* changes:

```nohighlight
$ git status
On branch studio2-my-work
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
On branch studio2-my-work
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)
        modified:   css/styes.css
        modified:   index.html
        modified:   js/flicklist.js
```

All the files are now staged for committing. Go ahead and make a commit, using the -m flag to remind your future self (and others looking at your code) what changes you made during this commit:

```nohighlight
$ git commit -m "finish FlickList 2 studio"
[studio2-my-work 46db232] finish FlickList 2 studio
 2 files changed, 2 insertions(+), 2 deletions(-)
```

The convention is to write your commit messages using the present tense rather than past tense (e.g. "finish" rather than "finished").

If you check your status one more time, you should see this:

```nohighlight
$ git status
On branch studio2-my-work
nothing to commit, working directory clean
```

Finally, *push* your changes to your remote repo:

```nohighlight
$ git push origin studio2-my-work
Counting objects: 62, done.
Delta compression using up to 8 threads.
Compressing objects: 100% (20/20), done.
Writing objects: 100% (22/22), 2.36 KiB | 0 bytes/s, done.
Total 22 (delta 6), reused 0 (delta 0)
To https://github.com/jharvard/flicklist.git
 * [new branch]      studio2-my-work -> studio2-my-work
```

If you go back and revisit github.com/jharvard/flicklist, you should now see your new branch up there! Specificially, near the top-left of the screen, you should see a dropdown menu that says "Branch: master". Click that dropdown and you should see an option for "studio2-my-work". Click on that branch, and you should now see the code you just worked on. Copy the current url in your browser's address bar (you are about to paste that url into Vocareum).

##### Submit on Vocareum

On Vocareum, click the assignment titled **Studio: FlickList 2**. In your `/work` directory you should see a file called `studio2.txt`. Open up this file and fill in the link to your work on GitHub.

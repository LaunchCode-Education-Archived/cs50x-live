##### Web Track
[Back to class 1](../../class1)

# Studio: FlickList 1

In [the previous Studio](../flicklist-0), you forked the project repository and added your API key to the javascript file. When the page loaded, our script sent an AJAX request to themoviedb.org, and a few seconds later, received a response containing a bunch of javascript objects dsecribing popular movies, which were logged to the console. You poked through this array of movie objects to answer a quiz question when submitting your assignment.

Today, you're going to get started adding some real functionality to the code base. By the end of this studio, users will see a browseable list of movies on the screen. Each movie will have a "Add to Watchlist" button, which, when clicked, will cause that movie to show up on another area of the screen where the user's Watchlist is displayed.

### Demo

Here is what you are trying to accomplish: <a href="http://htmlpreview.github.io/?https://github.com/LaunchCodeEducation/flicklist/blob/ba335b0509258c7e4dc51779f9baa536f914c07b/index.html" target="_blank">FlickList 1 Demo</a>. Take a minute to play around with the demo so you understand what your goal is.

### More about Branches

### Starter Code

##### Obtaining the Starter Code

Navigate to the proper directory:

```nohighlight
$ cd ~/workspace/web-track/studios/flicklist
```

Your git status should be clean of any unstaged changes:

```nohighlight
$ git status
On branch studio0-my-work
nothing to commit, working directory clean
```

(We are assuming you will still be on the `studio0-my-work` branch from last time. But if you're on a different branch, that's fine, as long as you see "nothing to commit, working directory clean". If you do have unstaged or uncommitted changes, commit them now. If you need guidance, see [here](../flicklist-1#how-to-submit).)

Now let's checkout a new branch from the contents of `upstream/studio1`:

```nohighlight
$ git fetch upstream/studio1
$ git checkout -b studio1 upstream/studio1
```

##### A Brief Tour



### Assignment

Work your way through the following TODOs:

##### 1. Add a browsing section

##### 2. Update the model when AJAX request succeeds

##### 3. Insert a list item for each movie on the browse list

##### 4. Each browse list item should contain a button

##### 5. Add click handlers to the buttons

##### 6. Insert a list item for each movie on the Watchlist

##### 7. Clear out the old list elements before re-rendering


### How to Submit

##### Web Track
[Back to class 1](../../class1)

# Studio: FlickList 1

In [the previous Studio](../flicklist-0), you forked the project repository and added your API key to the javascript file. When the page loaded, our script sent an AJAX request to themoviedb.org, and a few seconds later, received a response containing a bunch of javascript objects dsecribing popular movies, which were logged to the console. You poked through this array of movie objects to answer a quiz question when submitting your assignment.

Today, you're going to get started adding some real functionality to the code base. By the end of this studio, users will see a browseable list of movies on the screen. Each movie will have a "Add to Watchlist" button, which, when clicked, will cause that movie to show up on another area of the screen where the user's Watchlist is displayed.

### Demo

Here is what you are trying to accomplish: <a href="http://htmlpreview.github.io/?https://github.com/LaunchCodeEducation/flicklist/blob/ba335b0509258c7e4dc51779f9baa536f914c07b/index.html" target="_blank">FlickList 1 Demo</a>. Take a minute to play around with the demo so you understand what your goal is.

### More about Branches

### Starter Code

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

(We are assuming you will still be on the `studio0-my-work` branch from last time. But if you're on a different branch, that's fine, as long as you see "nothing to commit, working directory clean". If you do have unstaged or uncommitted changes, commit them now. If you need guidance, see [here](../flicklist-0#how-to-submit).)

Now let's fetch the `studio1` branch from the upstream repo:

```nohighlight
$ git fetch upstream/studio1
From https://github.com/LaunchCodeEducation/flicklist
 * branch            studio1    -> FETCH_HEAD
```

and then switch to a new local branch with the contents of 

```nohighlight
$ git checkout -b studio1 upstream/studio1
Branch studio1 set up to track remote branch studio1 from upstream.
Switched to a new branch 'studio1'
```

(Just an aside: The `-b` flag allows you to create and switch to a branch in one line. It's just a fancier version of this:
```nohighlight
$ git branch studio1 upstream/studio1
Branch studio1 set up to track remote branch studio1 from upstream.
$ git checkout studio1
Switched to a new branch 'studio1'
```
You can use whichever you feel more comfortable with.)
  

### A Brief Tour

Welcome to the studio1 branch!

Your folder structure should look the same as last time:

```nohighlight
$ tree
.
├── index.html
└── js
    └── flicklist.js

1 directory, 2 files
```

But the contents of those files is a little different. Let's take a look. Open up `index.html` and `flicklist.js` in your IDE.

##### index.html

The beginning of this file is more or less the same as last time. The only change is that we've added is this line:

```html
<meta charset="utf-8"/>
```

which explicitly defines that our document should use the Unicode character encoding. (If curious, you can read more about character encoding <a href="http://www.w3.org/International/questions/qa-what-is-encoding" target="_blank">here</a>). Generally try to remember to add this line in your HTML, or you might get some strange results when your page attempts to display obscure characters. But for now, don't waste a ton of brainpower worrying about this topic.



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

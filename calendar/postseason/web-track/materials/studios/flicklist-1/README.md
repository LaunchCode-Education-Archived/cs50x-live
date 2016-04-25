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

The body of the document now has three main parts:
* a `<header>` to display the project title and tagline
* a `<section>` to display the movies that are on the user's watchlist
* a TODO, where you will implement another `<section>`, this one to display a browsable list of popular movies

The `<header>` and `<section>` tags might look unfamiliar to you. They are relatively new additions to the HTML language. Similar to the `<div>`, these tags serve as a container for other tags, so you can group your document into chunks. The difference is that a `<div>` does not indicate *what kind of content* it contains, whereas these new tags do: the `<header>` indicates that it is meant to serve as a title or heading above some other content; the `<section>` indicates a discrete section of your document. Using these tags instead of `<div>`s makes it more immediately obvious how your document is structured and what kind of role each of the various chunks is playing. As much as possible, it is generally best practice to make your HTML "semantically meaningful" like this. You will learn a bit more about "Semantic HTML" in later Prep Work.

##### flicklist.js

Let's now talk `flicklist.js`. 

The beginning of the file still contains that `api` object, one of whose properties, `token`, currently has a value of `"TODO"`, which you should once again replace with your personal api key.

There is another object nearby, called `model`. This is where we will store all the data we need to keep track of. You can see that this object has two properties:
* `watchlistItems`, an array (initially empty) that represents all the movies on the user's watchlist
* `browseItems`, an array (also initally empty) that holds all the movies we want to make available to the user for browsing.

Moving down the page, the `discoverMovies` function is very similar to the function called `testTheAPI` from last time: it makes an AJAX request to TheMovieDB's API, and after receiving a response, logs it to the console. But there is now a little bit more code inside that `success` function:
* First of all, there is a TODO! We want you to write a line here such that, whenever a response comes back from the API, you update the `model` variable so that its `.browseItems` property is equal to the list of movies in the response.
* After updating the model, we invoke a function called `callback`. Where did that function come from? It turns out it was passed into us as an argument to `discoverMovies`. A very powerful feature of JS is the ability to pass functions around as arguments to other functions. The idea of a <a href="https://en.wikipedia.org/wiki/Callback_(computer_programming)" target="_blank">callback</a> is that whoever is invoking `discoverMovies` can pass in a block of code to specify what should happen after the response comes back.

To see this in action, scroll down to the bottom of the file, and you'll see where `discoverMovies` is used. When the document is loaded, we execute this line:

```js
discoverMovies(render);
```

which invokes `discoverMovies` and passes in something called `render` as the callback. In other words, we are saying: Go fetch some results from the API, and when you get a response back, invoke this other function called `render`. 

Scroll up a bit, and you'll see that the `render` function is defined directly above. The purpose of this function is to re-display everything in the DOM based on the current information stored in the `model` variable. It is mostly empty so far, but contains a handful of TODOs. 

##### Debugger Walkthrough

To help wrap your head around all this, do the following exercise:

1. Preview the page in the Chrome browser
2. Open the developer tools
3. Click the "Sources Tab"
4. Locate `flicklist.js` and click on that. You should see the source code appear.
5. Expand the sub-window displaying the source code to be a little bigger, so you can actually see the code.
6. Add breakpoints to the following lines: 
  * line 21
  * line 27
  * line 45
  * line 69
7. Refresh the page.
8. You should hit your first breakpoint (line 69.) Click the continue button and you should hit another breakpoint. At each breakpoint, click the Step-Over button a few times to get a feel for what's happening, and then click Continue button and observe which section of code fires next.

### Assignment

Work your way through the TODOs in the starter code. Each task is numbered, indicating the order in which you should work on them. The tasks are as follows:

##### 0. Add your API key to the `api` variable

Just like last time.

##### 1. Add a browsing section

In `index.html`, add another `<section>` very similar to the watchlist section above. You should give your section an `id` so that you can refer to it later and manipulate its contents. You should also put an empty `<ul>` inside, where you will later insert those list items for the browsable movies.

##### 2. Update the model when AJAX request succeeds

Inside the `discoverMovies` function, when a successul response comes back, we are currently logging the response to the console, but we are not actually doing anythign useful with the data. Your job is to update the `model` variable, filling its `.browseItems` property with the newly received list of movies.

##### 3. Insert a list item for each movie on the browse list

The rest of your TODOs are inside the `render` function. For these, jQuery is your best friend. 

On this one, we are asking you to create a list item `<li>` for each movie in the browse list, and append that list item to the `<ul>` inside the browse section on the document. The list item for now should jsut contain the title of the movie.

You might be wondering: we had you assign an id to the section, but not the `<ul>` inside the section, so how can you obtain a reference to the `<ul>`? Just like CSS, jQuery allows you to traverse the DOM using <a>descendant selectors</a>, for example:

```js
$("#essay p")
```

yields all `<p>` tags who are descendents (children, or children's children...) of the element whose id is "essay". 

To complete this task, you will need to make use of jQuery's <a href="http://api.jquery.com/append/" target="_blank">append</a> and <a href="http://api.jquery.com/text/" target="_blank">text</a> functions. 

The following code demonstrates how to add a link to the bottom of every descendant paragraph inside the "essay" element:

```js
var googleLink = $("<a></a>").text("Click me!").attr("href", "google.com");
$("#essay p").append(googleLink);
```

Ultimately, you should be generating HTML that looks something like this:

```html
<ul>
  <li>
    <p>The Night Before Christmas</p>
  <li>
  <li>
    <p>The Morning After Christmas</p>
  </li>
  <li>
    <p>Eyes Wide Shut</p>
  </li>
  ...
</ul>
```

##### 4. Each browse list item should contain a button

Once you have list items displaying the titles of all the movies, the next step is to add a button to each item. The button should say "Add to watchlist".

This step should be pretty simple. Just append another item inside the list item, after the movie title.

##### 5. Add click handlers to the buttons

Once those buttons are showing up, your next task is to make them actually do something. Use jQuery's <a href="http://api.jquery.com/click/" target="_blank">click</a> function to register a "click handler" on each button. This is another one of those functions where you pass in a "callback", in order to specify exactly what should happen when the click event occurs. You'll want to pass in an "annonymous function" that appends to `model.browseItems` whichever movie was clicked, and then re-invokes `render`. For example, here's an annonymous function logs stuff to the console and calls some other function whenever a button is clicked: 

```js
// assuming you have a button called myButton
myButton.click(function() {
  console.log("You clicked my button!");
  console.log("I love you!");
  releaseTheHounds();
});
```

##### 6. Insert a list item for each movie on the Watchlist

##### 7. Clear out the old list elements before re-rendering


### How to Submit

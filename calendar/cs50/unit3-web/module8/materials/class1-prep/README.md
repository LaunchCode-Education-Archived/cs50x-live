#### [Module 8](../..)

# Class 1 Prep

Before coming to [Class 1](../class1), please complete the following tasks:

#### Lecture
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=FKLqzTdkDMc" target="_blank">Week 9</a> | This lecture introduces you to another new language: Javascript. Javascript is the primary language for a website's "front-end", i.e. code that runs locally on the user's computer ("client-side"), rather than on your server's computer ("server-side"). 

***

#### Javascript
Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#javascript" target="_blank">Week 9 / Javascript</a> | These notes introduce Javascript, and talk about the ways in which it is similar to and different from C and PHP.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#syntax" target="_blank">Week 9 / Javascript Syntax</a> | Here we dive into the details of Javascript's syntax.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#json" target="_blank">Week 9 / JSON</a> | JSON, which stands for Javascript Object Notation, is a format for passing data around. JSON structures data as a big Javscript object of key-value pairs.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=JYIKYnbdu4E&list=PLhQjrBD2T383ql2IPhxwnJqu1EjcMXulK&index=2" target="_blank">JavaScript</a> | Doug talks about Javascript, including the following topics: objects, iteration, the fact that weakly typed languages can make things trickier sometimes, anonymous functions, the `array.map()` function, and event handlers.
Study | CS50 Study | <a href="https://study.cs50.net/javascript" target="_blank">javascript</a> | Study up! Review the basics of JavaScript with CS50 study.
Do | Exercise | [Codecademy / Javascript](../exercises/codecademy-js) | Head off to Codecademy to get your fingers busy writing javascript, and get a brief introduction to Objects in JS.

***

#### The DOM
Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">Week 9 / Document Object Model</a> | Javascript allows you to query and manipulate your webpage's HTML dynamically, to do things such as: query the text of an element, insert a new element, remove an element, change a CSS property, and pretty much anything else you can imagine. To do this, it creates a big javascript object representing the entire "tree" of all the elements in the HTML document.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=pkcDcIhVM30&list=PLhQjrBD2T383ql2IPhxwnJqu1EjcMXulK&index=1" target="_blank">DOM</a> | Doug talks about the DOM, and shows an example of how to change an element's background color in response to a button click. He also talks about jQuery, a Javascript library that makes DOM manipulation less verbose (but more cryptic). You'll learn more about jQuery later.
Watch | Short | <a href="https://www.youtube.com/watch?v=GBKwdFEyJks&index=16&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">DOM</a> | Tommy talks a little more about the DOM, touching on a handful of query methods that are available for inspecting the contents of the DOM object.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6Kb5CyWU3PY&index=4&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">dom-0</a> | David demos how to make a simple page that says Hello to the user by querying the DOM to find the place where the user typed in their name.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-dom-0" target="_blank">here</a>. 
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=HOLM-ok0KOI&index=5&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">dom-1</a> | Here we improve our Hello page a bit, by factoring out some Javascript that was inside an HTML node, and moving it over to a separaje `.js` file, a better place for Javascript to live.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-dom-1" target="_blank">here</a>. 
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6EkmABDGNGs&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb&index=6" target="_blank">dom-2</a> | Here we rewrite our script with jQuery. By using jQuery's `document.ready()` function, we no longer have to worry about making sure our javascript is specified after (below) all of the HTML elements it refers to.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-dom-2" target="_blank">here</a>. 

***

#### Form Validation
Task | Resource Type | Link | Instructions
-----|------|------|------
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=U7W2U8qRI3I&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb&index=7" target="_blank">form-0</a> | In this walkthrough, David creates a demo page with a registration form for users to sign up for something.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-form-0" target="_blank">here</a>.  
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=r2iaKDH79oQ&index=8&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">form-1</a> | Here we improve our registration form by adding a script that performs client-side validation on the form: in other-words, a script which checks whether the form was properly filled out, and does this locally **before** bothering to send a request over to the server. <br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-form-1" target="_blank">here</a>. <br> You will also want to copy <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/src9w/register.php.src" target="_blank">register.php</a> into your project folder.  
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=eViManaIKkQ&index=9&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">form-2</a> | Once again we refactor to use the jQuery `document.ready()` function, as we did in the <a href="https://www.youtube.com/watch?v=6EkmABDGNGs&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb&index=6" target="_blank">dom-2</a> Walkthrough.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-8.html#class-1-task-form-2" target="_blank">here</a>. 

### Now you're ready for [Class 1](../class1)

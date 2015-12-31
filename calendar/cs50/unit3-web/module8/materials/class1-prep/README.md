[Module 8](../..)

# Class 1 Prep

Before coming to [Class 1](../class1), please complete the following tasks:

### Lecture
Task | Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=FKLqzTdkDMc" target="_blank">Week 9</a> | This lecture introduces you to another new language: Javascript. Javascript is the primary language for a website's "front-end", i.e. code that runs locally on the user's computer ("client-side"), rather than on your server's computer ("server-side"). 

***

### Javascript
Task | Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#javascript" target="_blank">Week 9 / Javascript</a> | These notes introduce Javascript, and talk about the ways in which it is similar to and different from C and PHP.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#syntax" target="_blank">Week 9 / Javascript Syntax</a> | Here we dive into the details of Javascript's syntax.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#json" target="_blank">Week 9 / JSON</a> | JSON, which stands for Javascript Object Notation, is a format for passing data around. JSON structures data as a big Javscript object of key-value pairs.

***

### The DOM
Task | Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">Week 9 / Document Object Model</a> | Javascript allows you to manipulate your webpage's HTML to dynamically do things such as insert a new element, remove an element, change some text, change a CSS style, and pretty much anything else you can imagine. To do this, it creates a big javascript object representing the entire HTML "tree" or elements.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=pkcDcIhVM30&list=PLhQjrBD2T383ql2IPhxwnJqu1EjcMXulK&index=1" target="_blank">DOM</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=GBKwdFEyJks&index=16&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">DOM</a> 
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6Kb5CyWU3PY&index=4&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">dom-0</a> | David demos how to make a simple page that says Hello to the user by querying the DOM to find the place where the user typed in their name. 
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=HOLM-ok0KOI&index=5&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">dom-1</a> | Here we improve our Hello site a bit by factoring out some Javascript that was inside an HTML node, and move it over to our script, a better place for Javascript to live.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6EkmABDGNGs&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb&index=6" target="_blank">dom-2</a> | Here we rewrite our script using a popular Javascript library called jQuery. By using jQuery's `document.ready()` function, we no longer have to worry about making sure our javascript is specified after (below) all of the HTML elements it refers to. You'll learn more about jQuery later.

#### More Javascript
Task | Type | Link | Instructions
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=JYIKYnbdu4E&list=PLhQjrBD2T383ql2IPhxwnJqu1EjcMXulK&index=2" target="_blank">JavaScript</a> | Doug talks about Javascript, including the following topics: objects, the hidden trickiness of weakly typed languages, annonymous functions, the `array.map()` function, event handlers.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=U7W2U8qRI3I&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb&index=7" target="_blank">form-0</a> | 
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=r2iaKDH79oQ&index=8&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">form-1</a> | Here we improve our registration form by adding a script that performs client-side validation on the form: in other-words, a script which checks whether the form was properly filled out, and does this locally **before** bothering to send a request over to the server.  
Do | Exercise | Validation | TODO exc: give them a form and have them write a validation script for it.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=eViManaIKkQ&index=9&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">form-2</a> | 
Do | Exerise | JS Practice | TODO exc: a few exercises to practice using js (for in, for of, annon funcs, objects)

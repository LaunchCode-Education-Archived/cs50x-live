##### [Module 7](../..)

# Prep for Class 1

Before coming to [Class 1](../class1), please complete the following tasks:

##### Lecture
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=h_zmq88Ae3k" target="_blank">Week 7, continued</a> | This lecture will be a crash course introduction to a programming language called PHP, which is often used for web programming. 
Watch | Lecture | <a href="https://www.youtube.com/watch?v=rJeP65u84ec" target="_blank">Week 8</a> | Stop at 17:25

***

##### PHP Syntax
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=abUuRqYUUaY&index=1&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">PHP Syntax</a> | Doug guides you through the basics of PHP syntax. He also introduces some new tools that PHP allows, such as: associative arrays, foreach loops, and default values for function arguments. Finally, he walks through some small example PHP programs in the IDE-- you might find it useful to treat this section as a Follow-Along exercise, copying and tinkering with the programs in your own workspace.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#php" target="_blank">Week 7, continued / PHP, Syntax | Read the "PHP" and "Syntax" section of the notes. This will give a quick overview of the PHP language, and also show some translations of code we're familiar with in C into code in PHP.<br>Stop when you get to the *Using PHP to Send Texts* header. NOTE references to pset5 
Read | Resource | <a href="../../../../../../helpful-resources/php/php-syntax.html">Helpful Resources / PHP Syntax Cheatsheet</a> | Check out this cheatsheet on PHP syntax which includes helpful examples.
Do | Exercise | [Lotto numbers](../exercises/lotto-numbers) | Learn about PHP foreach loops by finishing this program for reading lottery numbers
Do | Exercise | [Getting Takeout](../exercises/takeout) | Learn about PHP associative arrays by writing a program to get takeout orders
Do | Exercise | [Annoying Kid Brother](../exercises/annoying-kid-brother) | Learn about the PHP function `array_push` by completing a program that pesters you for a list, then repeats it to you in reverse.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_to_send_texts" target="_blank">Week 7, continued / Using PHP to Send Texts</a> | Review this section of the lecture where, using PHP, David (tries) to send a text message to everyone in class.<br>Stop when you get to the *Using PHP for Web Programming* header.

***

##### PHP on the Web
Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_for_web_programming" target="_blank">Week 7, continued / Using PHP for Web Programming</a> | Read these notes, which review how we can use PHP to write code that generates web pages. 
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=l5O-HKElXPc&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=2" target="_blank">PHP for Web Development</a> | Doug talks about the limitations of static HTML and why, in web development, we need a language like PHP on the backend to dynamically produce HTML content. He then shows us some examples of using PHP in this web context.
Watch | Short | <a href="https://www.youtube.com/watch?v=WSKc1a25R6o&index=32&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Web Development</a>
Follow-Along | Resource | [Hello PHP](../resources/hello-php) | Follow along with our tutorial as we serve up a Hello World program on the web.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-C80Qik9OWw&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=4" target="_blank">froshims-0</a> | Here we create an HTML form which submits to a backend PHP script. In the PHP script, we are able to access all the data that came from the form via a special global variable, an associative-array called `$_POST`.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-7.html#class-1-task-froshims-0" target="_blank">here</a>.
Read | Resource | [Retreiving Form Data](https://developer.mozilla.org/en-US/docs/Web/Guide/HTML/Forms/Sending_and_retrieving_form_data) | This article from Mozilla explains what happens on the back end when we receive some data from a form. (It also begins with a good review of how data is sent from a form, with you learned in Module 6.)
Do | Exercise | hello0 | TODO exc: html form to submit your name, thing says "Hello, {$name}!"
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=blwsjq0lQb4&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=5" target="_blank">froshims-1</a> | Here we add some logic on the backend which redirects users back to the form if they failed to fill out some of the fields. We also add some CSS styling to the form.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-7.html#class-1-task-froshims-1" target="_blank">here</a>.
Do | Exercise | hello1 | TODO exc: reject forms that left name field blank. (Maybe add another condition too)
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=csboq6ZtqkI&index=6&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-2</a> | Here, instead of automatically redirecting the user, our backend script returns some HTML with a helpful error message and a clickable link to take them back to the form.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-7.html#class-1-task-froshims-2" target="_blank">here</a>.
Do | Exercise | hello2 | TODO exc: provide helpful message if form was filled out incorrectly
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=mVs7EkALBuw&index=7&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-3</a> | And finally, we do something with the successfully registered students: if they filled out the entire form, our backend script sends them a confirmation email.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-7.html#class-1-task-froshims-3" target="_blank">here</a>.
Do | Exercise | hello3 | TODO exc: add <select> to the form so that user can choose another greeting besides "Hello"
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#php" target="_blank">Week 8 / PHP</a> | review of interp, shebang, variable interpolation

***

##### Sessions, Cookies
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Short | <a href="https://www.youtube.com/watch?v=YxOAJ3ekqH4&index=30&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Sessions</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=D0lQ9u5d3gA&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=1" target="_blank">counter</a> | An example site that makes use of PHP sessions.<br>You can find pseudocode to start this program <a href="../../../../../../helpful-resources/modules/module-7.html#class-1-task-counter" target="_blank">here</a>.
Do | Exercise | | TOD exc: something using PHP sessions

### Now you're ready for [Class 1](../class1)

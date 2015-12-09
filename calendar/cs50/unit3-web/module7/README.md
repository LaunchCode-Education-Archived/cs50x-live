# Module 7

### Possible Supplements
* PHP cheatsheet

### Resources by Topic

#### Class 1

##### Lecture
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=h_zmq88Ae3k" target="_blank">Week 7, continued</a> | This lecture will be a crash course introduction to a programming language called PHP, which is often used for web programming. 
Watch | Lecture | <a href="https://www.youtube.com/watch?v=rJeP65u84ec" target="_blank">Week 8</a> | Stop at 17:25


##### PHP
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=abUuRqYUUaY&index=1&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">PHP Syntax</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#php" target="_blank">Week 7, continued / PHP, Syntax | Read the "PHP" and "Syntax" section of the notes. This will give a quick overview of the PHP language, and also show some translations of code we're familiar with in C into code in PHP.<br>Stop when you get to the *Using PHP to Send Texts* header. NOTE references to pset5 
Do | Exercise | | TODO exc foreach loop; 
Do | Exercise | | TODO exc associative array; 
TODO | | | other exercises? checkout Doug PHP Syntax again
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_to_send_texts" target="_blank">Week 7, continued / Using PHP to Send Texts</a> | Review this section of the lecture where, using PHP, David (tries) to send a text message to everyone in class.<br>Stop when you get to the *Using PHP for Web Programming* header. <br> TODO exc array_push
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_for_web_programming" target="_blank">Week 7, continued / Using PHP for Web Programming</a> | Read these notes, which review how we can use PHP to write code that generates web pages. 
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=l5O-HKElXPc&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=2" target="_blank">PHP for Web Development</a> | Doug talks about the limitations of static HTML and why, in web development, we need a language like PHP on the backend to dynamically produce HTML content. He then shows us some examples of using PHP in this web context.
Watch | Short | <a href="https://www.youtube.com/watch?v=WSKc1a25R6o&index=32&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Web Development</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-C80Qik9OWw&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=4" target="_blank">froshims-0</a> | Here we create an html form which submits to a backend PHP script. Inside the script, we see that we can use a special global variable `$_POST` which contains all the data that came from the form.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=blwsjq0lQb4&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=5" target="_blank">froshims-1</a> | Here we add some logic on the backend which redirects users back to the form if they failed to fill out some of the fields. We also add some CSS styling to the form.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=csboq6ZtqkI&index=6&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-2</a> | Here, instead of automatically redirecting the user, our backend script returns some HTML with a helpful error message and a clickable link to take them back to the form.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=mVs7EkALBuw&index=7&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-3</a> | And finally, we do something with the successfully registered students: if they filled out the entire form, our backend script sends them a confirmation email.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#php" target="_blank">Week 8 / PHP</a> | review of interp, shebang, variable interpolation
Watch | Short | <a href="https://www.youtube.com/watch?v=YxOAJ3ekqH4&index=30&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Sessions</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=D0lQ9u5d3gA&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=1" target="_blank">counter</a> | An example site that makes use of PHP sessions


#### Class 2

##### Lecture
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://youtu.be/rJeP65u84ec?t=1045" target="_blank">Week 8</a> | Starts at 17:25
Watch | Lecture | <a href="https://www.youtube.com/watch?v=yoDrhOZCKWo" target="_blank">Week 8, continued</a>

##### MVC
Task | Resource Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">Week 8 / MVC</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=XdCxfJki4t4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=3" target="_blank">MVC</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=3Jy0OIaHviI&index=2&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-0</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=OwY_kl87bxY&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=3" target="_blank">mvc-1</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-6FRpI6V788&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=4" target="_blank">mvc-2</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=5juddGp7D9g&index=5&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-3</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=CsmWCvlbXMQ&index=6&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-4</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=IbfPIpPAbf4&index=7&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-5</a>
Study | CS50 Study | <a href="https://study.cs50.net/mvc?toc=mvc" target="_blank">MVC</a>


##### SQL
Task | Resource Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql" target="_blank">Week 8, continued / SQL</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#transactions" target="_blank">Week 8, continued / Transactions</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql_injection" target="_blank">Week 8, continued / SQL Injection</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=BPOH5WLf3yM&index=4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">SQL</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=G58ujNjWEJY&index=44&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">SQL</a>


##### TBD
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=UuNuJ4Q6b-s&feature=youtu.be" target="_blank">Week 8</a> | 


### Resources by Type

##### Lecture 
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=h_zmq88Ae3k" target="_blank">Week 7, continued</a> | This lecture will be a crash course introduction to a programming language called PHP, which is often used for web programming. 
Watch | Lecture | <a href="https://www.youtube.com/watch?v=rJeP65u84ec" target="_blank">Week 8</a>
Watch | Lecture | <a href="https://www.youtube.com/watch?v=yoDrhOZCKWo" target="_blank">Week 8, continued</a>

##### Lecture Notes
Task | Resource Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#php" target="_blank">Week 7, continued / PHP, Syntax | Read the "PHP" and "Syntax" section of the notes. This will give a quick overview of the PHP language, and also show some translations of code we're familiar with in C into code in PHP.<br>Stop when you get to the *Using PHP to Send Texts* header. <br> TODO exc foreach loop; TODO exc associative array; NOTE references to pset5 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_to_send_texts" target="_blank">Week 7, continued / Using PHP to Send Texts</a> | Review this section of the lecture where, using PHP, David (tries) to send a text message to everyone in class.<br>Stop when you get to the *Using PHP for Web Programming* header. <br> TODO exc array_push
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_for_web_programming" target="_blank">Week 7, continued / Using PHP for Web Programming</a> | Read these notes, which review how we can use PHP to write code that generates web pages. 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#php" target="_blank">Week 8 / PHP</a> | review of interp, shebang, variable interpolation
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">Week 8 / MVC</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#sql" target="_blank">Week 8 / SQL</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql" target="_blank">Week 8, continued / SQL</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#transactions" target="_blank">Week 8, continued / Transactions</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql_injection" target="_blank">Week 8, continued / SQL Injection</a>


##### Walkthroughs
Task | Resource Type | Link | Notes
-----|------|------|------
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-C80Qik9OWw&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=4" target="_blank">froshims-0</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=blwsjq0lQb4&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=5" target="_blank">froshims-1</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=csboq6ZtqkI&index=6&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-2</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=mVs7EkALBuw&index=7&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd" target="_blank">froshims-3</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=D0lQ9u5d3gA&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=1" target="_blank">counter</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=3Jy0OIaHviI&index=2&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-0</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=OwY_kl87bxY&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=3" target="_blank">mvc-1</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-6FRpI6V788&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=4" target="_blank">mvc-2</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=5juddGp7D9g&index=5&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-3</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=CsmWCvlbXMQ&index=6&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-4</a>
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=IbfPIpPAbf4&index=7&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-5</a>

##### Shorts
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Short | <a href="https://www.youtube.com/watch?v=YxOAJ3ekqH4&index=30&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Sessions</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=WSKc1a25R6o&index=32&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">PHP Web Development</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=G58ujNjWEJY&index=44&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">SQL</a>

##### Doug's Playlist
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=abUuRqYUUaY&index=1&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">PHP Syntax</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=l5O-HKElXPc&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=2" target="_blank">PHP for Web Development</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=XdCxfJki4t4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=3" target="_blank">MVC</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=BPOH5WLf3yM&index=4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">SQL</a>


##### Section
Task | Resource Type | Link | Notes
-----|------|------|------
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=UuNuJ4Q6b-s&feature=youtu.be" target="_blank">Week 8</a>

##### Study
Task | Resource Type | Link | Notes
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/mvc?toc=mvc" target="_blank">MVC</a>

##### [Module 2](../../)

# Prep for Class 2

Before coming to [Class 2](../class2), please work your way through the following material:

#### Lecture
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=kEAH6u1ODNI" target="_blank">Week 2, continued</a> | Watch the week's second lecture, with Rob Bowden filling in for David. 

***

#### Strings, Under the hood
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#more_on_strings" target="_blank">Week 2, continued / More on Strings</a> | Review the notes on the first part of the lecture about strings. <br>Stop at the *Arrays* header. 
Read | Resource | [Custom strlen](../resources/custom-strlen) | A from-scratch implementation of the `strlen` function, to help illustrate how to write your own function, and give some insight into the `char`s that make up `string`s

***

#### Arrays
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Resource | [Array Basics](../resources/array-basics) | A quick runthrough of array syntax basics: how to declare, read, write
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=7EdaoE46BTI&index=4&list=PLhQjrBD2T383cKxax1sP6rKA3Q1JGrgcE" target="_blank">Arrays</a> | Doug talks about arrays, an important data structure.
Follow-Along | Walkthroughs | <a href="https://www.youtube.com/watch?v=dYVU9nFYybU&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">ages</a> | Follow David to create a program that uses an array to get the ages of everyone in a room. <br> You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-2.md#class-2-task-ages" target="_blank">here</a>. 
Do | Exercise | [Can You Vote?](../exercises/can-you-vote) | Write a program to read through an array of peoples' ages and outputs whether or not they are old enough to vote.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#arrays" target="_blank">Week 2, continued / Arrays</a> | Read through the notes on "Arrays", which will review the `ages` program you recently wrote.
Watch | Shorts | <a href="https://www.youtube.com/watch?v=7mOJN1c1JEo&index=1&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF" target="_blank">Arrays</a> | This short will talk about when to use an array, and how to implement one. Rob talks about "pointer arrays" and `malloc` - don't worry about this for now.

*** 

#### Command-Line Arguments
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#command_line_arguments" target="_blank">Command-Line Arguments</a> | Read the section titled "Command-Line Arguments". We'll be using these in Problem Set 2. <br> Stop when you get to the *Cryptography* header. 
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=1VbHJz2L6dM&index=2&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-0</a> | Follow David to create a program that takes command-line arguments.  <br> You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-2.md#class-2-task-argv-0" target="_blank">here</a>. 
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=Ja8YoR-u9TA&index=3&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-1</a> | Continue working on this program to make it print out all of the command-line arugments we get from the user. <br> You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-2.md#class-2-task-argv-1" target="_blank">here</a>. 
Do | Exercise | [Argv With Indexes](../exercises/argv-with-indexes) | Practice accessing the command line arguments by indexing into argv
Do | Exercise | [Previous](../exercises/previous) | Use a new function called `atoi()` to fix a broken code example.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=eDI5Wqjq2a0&index=5&list=PLhQjrBD2T383cKxax1sP6rKA3Q1JGrgcE" target="_blank">Command-Line Arguments</a> | Doug reviews command-line arguments in more depth. 
Do | Exercise | [Command-line Calculator](../exercises/command-line-calculator) | Extend the ideas you learned in <a href="https://www.youtube.com/watch?v=xmZR2XiwOq4" target="_blank">Adder</a> and <a href="https://www.youtube.com/watch?v=1VbHJz2L6dM&index=2&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-0</a> to add numbers that the user provides on the command line.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=mXj188eyRFE&index=4&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-2</a> | Return to the `argv` program and follow David to make it print out all of the individual characters from the command-line arugments. <br> You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-2.md#class-2-task-argv-2" target="_blank">here</a>.
Watch | Shorts | <a href="https://www.youtube.com/watch?v=X8PmYwnbLKM&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF&index=3" target="_blank">Command-Line Arguments</a> | Watch this short that talks more about command-line arguments, argc, and argv.
Study | CS50 Study |  <a href="https://study.cs50.net/argv" target="_blank">Command-Line Arguments</a> | If helpful, you can test and review your knowledge of command-line arguments using CS50 Study. 

***

#### Magic Numbers, Global Variables
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Watch | Shorts| <a href="https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF" target="_blank">Global Variables</a> | Joe introduces the concept of the global variable, which is a variable that is not limited to a local scope, like the normal "local" variables we have been using so far.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=z_Nh9yt4d_s&index=6&list=PLhQjrBD2T383cKxax1sP6rKA3Q1JGrgcE" target="_blank">Magic Numbers</a> | Doug introduces the concept of "magic numbers", explaining why we want to avoid them  and how we can do so.
Read | Resource | [Magic Numbers](../resources/magic-numbers) | Look over an example program that eliminates its magic numbers while avoiding the danger of global variables.

***

### Now you're ready for [Class 2](../class2)!

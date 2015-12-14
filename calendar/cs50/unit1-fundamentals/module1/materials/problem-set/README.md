#####[Module 1](../..)

# Problem Set 1

### Synopsis
In this problem set, you'll solve some problems in C using the concepts you'll learn throughout Module 1. There are three components to this problem set: **Water**, **Mario**, and **Greedy**.

### Guidance
####Water:
<em>Use the source, Luke! Use the source!</em><br>
Check out the source code example called “adder.c” under Week 1's Wednesday lecture. With a few tweaks, might this be the droids - er, code - you're looking for???

Remember: CS50's source code examples can take you a long way toward solving the pset problems!

####Mario:
* Draw up a few examples for this assignment. Can you find a relationship between the height, line number (starting with 0!), number of spaces on each line, and number of hashes on each line?
* This is a good problem to begin practicing the art of breaking your code work into the smallest pieces possible! Don't try to write the entire program all at once and then run it. Do just a little bit, and immediately run to make sure it works. Then do a little bit more, and make sure it works. Rinse and repeat. For example:
  - Get your input working first;
  - THEN make sure the input part continues looping until a valid number is entered;
  - NEXT, check out that you can loop through lines (printf() is your friend! use it to varify that things are workign properly);
  - THEN, get your spaces working correctly (use a substitute character while you're testing!);
  - FINALLY, get your hashes working correctly
* Code a little and test; repeat, repeat, repeat!

Note: this is also a good problem for learning to create your own functions. Maybe, for example, you could turn the space- and hash-printing parts, say, into functions? Again, check out the example source code CS50 provides for possibilities!

####Greedy:
* Break this one up into an input piece, a quarters piece, a dimes piece, a nickels piece, and... do you need pennies? Make sure each individual bit of code works before moving on to the next!
* The pset spec gives a code example for printing `0.01` to 50 decimal places:

  ```
  float f = 0.01;
  printf("%.50f\n", f);
  ```
Do try this out for yourself and make sure you understand the inherent imprecision of the computer's representation of a `float` - this is very important to this problem! You WILL find some surprising results. Make sure your final program can handle those results - otherwise, don't be surprised when check50  gives you the wrong kind of emojis!

### Components
To review all information about the Problem Set, go here: <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#getting_started" target="_blank">Getting Started</a>. You will have seen a lot of this already, but it may be helpful to review.

Here are the components due for Problem Set 1:
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#smart_water" target="_blank">Problem Set 1: Water</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#itsa_mario" target="_blank">Problem Set 1: Mario</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#time_for_change" target="_blank">Problem Set 1: Greedy</a>


### How To Submit 

FILE NAMES: water.c, mario.c, greedy.c

INSTRUCTIONS: Submit your assignments on Vocareum. After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly!

If you forget how to use Vocareum, please refer to the <a href="https://docs.google.com/document/d/19HIMxU_RtVV0PcGpuL71KmAoQh-KTgyPGpWWLcmwo58/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocareum.

You may also find it useful to review the <a href="https://github.com/Launch-Code/cs50x-live-2016/blob/master/calendar/module0/problem-set/README.md" target="_blank">Problem Set Page Overview from Problem Set 0</a>.

***
Congratulations on completing [Module 1](../..)! Return to the [Course Calendar](../../../../..) to see what's next.

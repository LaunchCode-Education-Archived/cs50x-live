##### Module 7
[Back to Prep for Class 1](../../class1-prep)
# Exercise: Annoying Kid Brother

PHP provides two functions for arrays, array_push and array_pop, that you might find useful.  Let’s practice using them!

We’ve provided the start of a program for you.  When completed, the program should:
- ask the user how many elements to store
- ask for each element in turn
- then print out the elements in reverse order

All you need to do to finish the program is write a loop to collect the user’s input.  **In this example, all you’ll have to do is use `array_push` for each element you see.**

Example usage of the completed program:
```
$ php kidbrother.php
I can remember a LOT of things! Tell me what to remember!
How many things?: 4
Thing 1? I love dogs but not cats
Thing 2? 42
Thing 3? Bacon
Okay okay okay the things are:
Bacon
42
I love dogs but not cats
I’m so great! …Or did I mess it up?
```

Together, the operations “push” and “pop” allow us to implement a Stack, a very common, useful, and simple data structure.

One of the common uses of a Stack is making a first pass over some data, pushing it into a Stack on the way, then accessing the data in reverse by popping the elements off one-by-one.

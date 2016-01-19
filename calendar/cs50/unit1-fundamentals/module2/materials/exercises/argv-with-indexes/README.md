##### Module 2
[Back to Prep for Class 2](../../class2-prep#command-line-arguments)
# Exercise: Argv indexing

We've now been introduced to the idea that the variable `argv` is an array of `string`s, and represents the command line arguments passed to a program.
This means that we can access the command line arguments to a program from within its code by accessing `argv` with indexing operations.

Let's get used to indexing into argv!

Write a program that prints each of its command line arguments on its own line, along with the index of the argument.

The program should run like this:
```nohighlight
$ ./argvindex I love the cards
Argument 0: I
Argument 1: love
Argument 2: the
Argument 3: cards
```

If you need help, this program is very similar to the one in <a href="https://www.youtube.com/watch?v=Ja8YoR-u9TA&index=3&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">this video</a>, so look there first!

We've provided a tiny bit of starter code [here](./argvindex.html).

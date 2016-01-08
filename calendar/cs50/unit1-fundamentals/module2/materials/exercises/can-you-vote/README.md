##### Module 2
[Back to Prep for Class 2](../../class2-prep#arrays)
# Exercise: Can You Vote?

Help the user figure out if their friends can vote!  For the purposes of the exercise, someone can vote as long as they are 18 or older.

We want the user to tell us:
- how many people to check

Then prompt the user for each age one-by-one.  After that, for each person, we’ll output if they can vote or not (if they’re at least 18 or not).

Basic template code is provided in [canyouvote.c](https://github.com/Launch-Code/cs50x-live-2016/blob/master/calendar/cs50/unit1-fundamentals/module2/materials/exercises/array-read/canyouvote.c)

This exercise is very similar to the <a href="https://www.youtube.com/watch?v=dYVU9nFYybU&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">ages</a> walkthrough; if you need help, look there first!

Your program should work like this:

```
$ ./canyouvote
How many people want to vote? 3
Age of person 1: 22
Age of person 2: 30
Age of person 3: 14
Person 1 can vote!
Person 2 can vote!
Person 3 cannot vote :(
```


##### Module 2
[Back to Prep for Class 2](../../class2-prep#command-line-arguments)
# Exercise: Command-line Calculator

Let's practice using command line arguments by implementing a simple command line adder.

The progam should expect the user to provide two command line arguments, which are numbers, then print out the result of adding them together.

This exercise is like a combination of these two videos:
- <a href="https://www.youtube.com/watch?v=1VbHJz2L6dM&index=2&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-0</a>
- <a href="https://www.youtube.com/watch?v=xmZR2XiwOq4" target="_blank">Adder</a>

So if you need help, look at those first!

Usage for the program should look like this:
```nohighlight
$ ./clc 5 2
Result: 7.000000000
$ ./clc 2.2 3.3
Result: 5.500000000
```

Notice how, just like in the <a href="../previous" target="_blank">previous</a> exercise (pun intended), you will need to convert the CL args from `string`s into numbers. But in this case, you need your numbers to be `float`s instead of `int`s. 

Luckily there is another function just like `atoi`, called `atof`, which, rather than returning an `int`, returns a `float`.

```c
float money = atof("4.6");
// money is 4.6

float gallons = atof("4");
// gallons is 4.0

float flingdops = atof("this is not going to work");
// flingdops is 0.0
```

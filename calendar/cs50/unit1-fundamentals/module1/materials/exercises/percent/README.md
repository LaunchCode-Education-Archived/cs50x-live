##### Module 1

[Go back to Prep for Class 1](../../class1-prep#math-numeric-types)

# Exercise: Percent

In a file called `percent.c` write a program that asks the user for two floating-point numbers, and then computes the ratio between them as a percent.

For example:

```nohighlight
$ ./percent 
float please: 0.5
float please: 2
25.000000 percent
```

```nohighlight
$ ./percent 
float please: 3
float please: 2
150.000000 percent
```

```nohighlight
$ ./percent 
float please: 1
float please: 1.5
66.666664 percent
```

Notice how because of the inherent imprecision of floating point numbers, that last value is slightly wrong-- should be `66.666667 percent`. You also might get a slightly different answer (`66.666672`, for instance) depending on how you implement your solution.

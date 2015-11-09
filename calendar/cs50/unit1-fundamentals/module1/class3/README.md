##### Module 1

# Class 3

### Before Class
Before coming to class please complete [Prep for Class 3](./module1/class3-prep).

### During Class

##### Q&A / Lecture on the following topics:
* typecasting
* nesting control flow
* validating user input
* more on functions
* debugging using print statements (TODO: GUI debugger?)

##### Studio: Repeat

Write a program that repeats a phrase multiple times. You program should prompt the user for both a phrase, and a number of repeats, like so:
```
$ ./repeats
Give me a phrase: I am NOT a talking robot!
How many times should I say it? 5
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
```

**Twist 1: Validiate**
Your program should only accept values that are at least 1, and no greater than 100 for the "how many times" argument. If the user fails supply a number within that range, the program should continue prompting until they do:
```
$ ./repeats
Give me a phrase: Oh na na, what's my name.
How many times should I say it? (between 1 and 100): -4
How many times should I say it? (between 1 and 100): 238
How many times should I say it? (between 1 and 100): 2
Oh na na, what's my name.
Oh na na, what's my name.
```

**Twist 2: Round**
Modify your program to accept a `double` type, rather than an `int`, for the "how many times" argument. This means that the user's input might not be a whole number. So in order to decide how many times to repeat the phrase, your program should take the input value and round it to the nearest integer.
```
Give me a phrase: I <3 LaunchCode
How many times should I say it? (Positive number please): 1.7
I <3 LaunchCode
I <3 LaunchCode
```
Hint: use the `round` function (reference [here](https://reference.cs50.net/math.h/round)). Note that you'll need to include the Math library at the top of your .c file

### Homework
* Continue working on [Pset1](). Try to finish Mario and get some progress on Change


##### Module 5 

# Exercise: Command Line

Remember our friend the [Clock Sage](../clock-sage)? Let's modify that program to accept command-line arguments rather than receiving its input by prompting the user via `GetInt()`.

Write a new program in a file called `clocksagecl.c`, which accepts two `int`s as command-line args: one for the current time, and one for an amount of hours in the future. Then proceed to calculate the future time, just as you did in the original version of clocksage:

```
$ ./clocksagecl 3 5
My prediction: 5 hours hence, the clock shall strike 8!
```

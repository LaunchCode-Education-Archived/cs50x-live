##### Module 1

[Go back to Class 2 Prep](../../class2-prep)

# Exercise: Dollars and Cents

Another useful function from `<math.h>` is `round`. This function takes a floating point number, and returns the nearest integer:

```
int x = round(4.7);
// the value of x is 5

int y = round(4.4);
// the value of y is 4 
```

Remember when your donut shop was charging customers crazy fractional dollar amounts, like `$7.2494328374`? Now we're able to do a better job in that sort of situation.

Write a program that prompts the user for a floating point dollar amount, and then prints a nicely formatted string explaining the *actual* dollar amount:

```
$ ./dollarsandcents
Gimme a dollar amount: 7.2494328374
Oh, I think you mean $7.250000000
```

(It still looks stupid because of the traling `0`s but thats ok. We'll learn how to fix that some other time.)

Of course, in this case we do not want to round all the way down to the nearest integer. Doing so would have given us `$7.00`. Instead we want to round to the nearest 2 decimal places. Unfortunately, `round` isn't fancy enough to do that. The trick is multiply your dollar amount by 100, and then round that, and then divide by 100 again.

As a bonus, the work you do here will be very helpful for last section of Pset 1.

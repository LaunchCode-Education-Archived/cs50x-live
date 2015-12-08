##### Module 1

[Back to Class 2 Prep](../../class2-prep)

# Exercise: How many oranges?

TODO something that requires them to use the `round` function.

Write a program that asks the user how many orange slices they want to eat this week, then prints out how many oranges the user should buy so they have enough slices.  Assume there are 8 slices in each orange!

To do this, we'll need to use the `ceil` function found [here](https://reference.cs50.net/math.h/ceil), in the `math.h` library.

Notes:
- How can we do this?  We need to buy enough oranges so that there are *at least* as many slices available as the user wants to eat this week. We can do this by dividing the number of slices they want by the number of slices in each orange (8), then rounding up with the `ceil` function.

A run of your program should look like this:
```
$ ./howmanyoranges
How many orange slices do you want to eat this week? 15
You should buy 2 oranges!
```

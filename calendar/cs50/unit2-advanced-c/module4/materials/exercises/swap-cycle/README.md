##### Module 4

[Back to Class 1 Prep](../../class1-prep)

# Exercise: Swap Cycle

Now we've finally seen how to write that pesky `swap` function. Instead of passing the *values* of `x` and `y` into the function, we pass their *addresses*. This is called "passing by reference" (as opposed to "passing by value").

Let's practice getting comfortable passing by reference, with a slight twist on the swap idea.

In [swapcycle.c](./swapcycle.c), fill in the TODOs to create a program which implements and invokes a function called `swapCycle`, which takes *three* inputs, and swaps them around in a cycle, ala rock-paper-scissors, or <a href="http://genius.com/356508" target="_blank">king-god-nonbeliever</a>.

```
$ ./swap-cycle
Before swap:
x is 1
y is 2
z is 3
Swapping ...
After swap:
x is 2
y is 3
z is 1
```

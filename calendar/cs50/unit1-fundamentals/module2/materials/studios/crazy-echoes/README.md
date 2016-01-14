##### Module 2
[Back to Class 2](../../class2)
# Studio: Craaazy Echoes

### Part 1: Backwards Echo

In a file called `backwardsecho.c` write a program that accepts some command-line arguments, and then simply "echoes" those arguments back to the
console, similar to the Module 2 Prep for Class 2 walkthrough <a href="https://www.youtube.com/watch?v=Ja8YoR-u9TA&index=3&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">argv-1</a>

The twist: each string should print out backwards. 

For example:

```
$ ./backwardsecho hello 64
ohcesdrawkcab/. olleh 46
```

Notice that the order of the arguments should remain unchanged, i.e. `"./backwards-echo"` prints first, followed by 
`"hello"`, followed by `"46"`. But when it comes time to print the string, you should print its characters 
in reverse order.


### Part 2: Mixed-up Echo

Now for another variation on the "echo" theme. In a file called `mixedupecho.c` write another program that accepts some command-line arguments and then echoes them back to the console.

The twist this time: the echoes should "intermix" with each other, like so:

```
$ ./mixedupecho HELLO!
.H/EmLiLxOe!dHuEpLeLcOh!oH
```

For this program, you can ignore any command-line arguments beyond the first two (including the program name itself):
```
$ ./mixedupecho HELLO! morestuff lalala
.H/EmLiLxOe!dHuEpLeLcOh!oH
```

Notice how `"HELLO!"` is shorter than `"./mixedupecho"`, and so the program "wraps around" and starts over again at `'H'`whenever it reaches the end of the string. 

How can you implement that? The modulo `%` operator is your friend here. 

Spcifically, note that `"HELLO!"[5]` yields `'!'`, and `"HELLO!"[6]` is beyond the bounds of the array. 

But `"HELLO!"[6 % 6]` evaluates to `"HELLO!"[0]`, which yields `'H'`.

And `"HELLO!"[7 % 6]` evaluates to `"HELLO!"[1]` ...

To keep things simple, you can assume that the second argument will always be shorter than the first.
In other words, the user will never provide a string longer than `"./mixedupecho"`, which is 13 characters long.


### Bonus (Optional)

Let's take away that last part ("To keep things simple..."). 

Now you may NOT assume the second argument will be the shorter one. For example, the user might type this:
```
$ ./mixedupecho GREENEGGSANDSPAM
```
in which case, the *first* argument will have to wrap around, and so your output should be:
```
.G/RmEiExNeEdGuGpSeAcNhDoS.P/AmM
```

*You can grab a copy of these instructions from the Helpful Resources <a href="../../../../../../../helpful-resources/modules/module-2.md#class-2-studio-crazy-echoes" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.

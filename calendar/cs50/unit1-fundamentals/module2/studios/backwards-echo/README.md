# Studio: Craaazy Echoes


### Part 1: Backwards Echo

Write a program that accepts some command-line arguments, and then simply "echoes" those arguments back to the
cosole, similar to [(TODO find the walkthrough where they did this)](TODO). 

The twist: each string should print out backwards. 

For example:

```
$ ./backwardsecho hello 64
ohce-sdrawkcab/. olleh 46
```

Notice that the order of the arguments should remain unchanged, i.e. `"./backwards-echo"` prints first, followed by 
`"hello"`, followed by `"46"`. But when it comes time to print the string, you should print its characters 
in reverse order.


### Part 2: Mixed-up Echo

Now for another variation on the "echo" theme. Write another program that accepts some command-line arguments 
and then echoes them back to the console.

The twist this time: the echoes should "intermix" with each other, like so:

```
$ ./mixedupecho HELLO!
.H/EmLiLxOe!dHuEpLeLcOh!oH
```

Notice how `"HELLO!"` is shorter than `"./mixedupecho"`, and so the program "wraps around" and starts over again at `'H'`whenever it reaches the end of the shorter string. 

How can you implement that? The modulo `%` operator is your friend here. 
Spcifically, note that `"HELLO!"[5] == '!'`, and `"HELLO!"[6]` is beyond the bounds of the array, but 
`"HELLO"[6 % 6]"` evaluates to `"HELLO"[0]"`, and `"HELLO"[7 % 6]"` evaluates to `"HELLO"[1]"` ...

For this one, you can ignore any command-line arguments beyond the first two (including the program name itself):
```
$ ./mixedupecho HELLO! morestuff lalala
.H/EmLiLxOe!dHuEpLeLcOh!oH
```

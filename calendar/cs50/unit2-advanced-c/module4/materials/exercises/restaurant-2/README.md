##### Module 4
[Back to Prep for Class 2](../../class2-prep#files-hex)
# Exercise: Restaurant Menus - Part 2

Redo the (../restaurant-menu/)[Restaurant Menus] exercise, but this time instead of using `fgets` to read in the file, use `[fread](https://reference.cs50.net/stdio.h/fread)`.

There are some important differences between `fgets` and `fread`:

* `fread` requires different arguments from `fgets`. The arguments for `fread` are a buffer to hold the read in information, the size of a chunk of information (typically the size of the buffer), the number of blocks to be read in (often 1, but not always!), and a file pointer.
* `fgets` will stop reading information when it his a new line, but `fread` will not.

Think about how these differences will shape your approach to this problem. You could read in the entire file at once, then search through the buffer looking for newlines. An alternative approach might involve reading in one character at a time, then deciding what to do with each character individually.

The starter code from the [previous exercise](../restaurant-menu/) is also a good starting point for this exercise. Also be sure to look at the example on the [reference page](https://reference.cs50.net/stdio.h/fread).






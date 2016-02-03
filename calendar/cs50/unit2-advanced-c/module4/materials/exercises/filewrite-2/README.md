##### Module 4
[Back to Prep for Class 2](../../class2-prep#files-hex)
# Exercise: Restaurant Menus - Part 2

Redo the [../filewrite/](Good Burger) exercise, but this time instead of using `fputs` to write to a file, use `[fwrite](https://reference.cs50.net/stdio.h/fwrite)`.

There are some important differences between `fputs` and `fwrite`. Namely, `fwrite` requires different arguments from `fputs`. The arguments for `fwrite` are a buffer that contains the information to be written, the size of a chunk of information (typically the size of the buffer), the number of blocks to be written (often 1, but not always!), and a file pointer.

Think about how these differences will shape your approach to this problem. You could write the entire file out at once, or you could iterate through the text and write things out one character at a time.

The starter code from the [previous exercise](../filewrite/) is also a good starting point for this exercise. Also be sure to look at the example on the [reference page](https://reference.cs50.net/stdio.h/fwrite).






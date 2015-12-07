# Exercise: Decomposition

Take a look at [census.c](./census.c), which is a program that (sort of) acts like a government census taker. It simply prompts the user for their name and US state, and then echoes that information back to the console, making sure to capitalize the first letter of each word.

```
$ ./census
First name: david
Last name: malan
State of residence: massachusetts
David Malan from Massachusetts
```
  
Notice lines TODO.  
This loop capitalizes the first letter in each word passed to it.  A similar loop is used again for last name...and then again for state. Do you see it?  This is an opportunity to make your code more eloquent! Instead of repeating this code three times, use a FUNCTION.  Notice that there is a function above 'main' called 'capitalize'.  This will do the same work as all those redundant loops.  Your job is to replace each loop in `main` with a call to `capitalize`.
  

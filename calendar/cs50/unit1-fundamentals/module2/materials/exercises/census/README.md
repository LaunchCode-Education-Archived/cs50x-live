##### Module 2
[Go back to Prep for Class 1](../../class1-prep#functions)
# Exercise: Census

Take a look at [census.c](./census.c), which is a program that acts (sort of) like a government census taker. It simply prompts the user for some citizens. For each citizen, the user must enter a name and a US state. The program then echoes that information back to the console, making sure to capitalize the first letter of each word.

```
$ ./census
How many citizens? 2
First name: henry
Last name: thoreau
State of residence: massachusetts
First name: mark
Last name: zuckerberg
State of residence: alaska
Thanks! Now we can make sure the following people paid their taxes:
Henry Thoreau from Massachusetts
Mark Zuckerberg from Alaska
```
  
Notice lines TODO.  
This loop capitalizes the first letter in each word passed to it.  A similar loop is used again for last name...and then again for state. Do you see it?  This is an opportunity to make your code more eloquent! Instead of repeating this code three times, use a FUNCTION.  Notice that there is a function above 'main' called 'capitalize'.  This will do the same work as all those redundant loops.  Your job is to replace each loop in `main` with a call to `capitalize`.
  

##### Module 2
[Back to Prep for Class 1](../../class1-prep#functions)
# Resource: Writing Your Own Functions

Up until now, we’ve been making use of functions provided in the cs50 library to do things like:
  * get input from the user with `GetString`, `GetInt`, etc,
  * get the length of a string with `strlen`. 

These functions had to come from somewhere: they were written by the people of CS50 and put together into a library for us to use.

Just as they could write functions and package them up for us, we can write functions for ourselves (and eventually package them up for others!).

Why and when would we want to do this? Here is some general guidance:
- if you notice you’re doing the same thing repeatedly, try putting that thing into a function
- if you notice that you’re writing a piece of code that seems very complicated, try putting it into a function.  The piece of code that calls your function will now be simpler

This should let you write code that’s easier to understand, and easier to fix and change later, while letting you spend less effort than you would have otherwise.

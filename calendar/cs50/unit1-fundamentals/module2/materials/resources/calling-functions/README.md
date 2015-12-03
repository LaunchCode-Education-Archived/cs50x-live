Let’s review how to use functions!  Over the course of your career as a programmer, you’ll use many, many functions, both those others have written, and those you’ve written yourself.

## Calling Functions

As we’ve seen before, we can run a library function like so:

```
#include <cs50.h>
string exampleString = “hello!”;  // set up an example variable to use

strlen(exampleString);
```

But wait!  There’s an error here; we got the length of the string, but we didn’t do anything with it!  If we, say, wanted to print the length of the string, how could we do this?

## Return Values

Many functions, like `strlen`, report a message after they’re done running.  We call this a return value.  To use the message that a function reports after running, we can store it in a variable:

```
#include <cs50.h>
string exampleString = “hello!”;  // set up an example variable to use

int exampleStringLength = strlen(exampleString);

printf(“The string has %i characters!\n”, exampleStringLength);
```

## Side Effects

Some functions, like `strlen`, take in an input argument, run, and finish without altering the input variable or interacting with the outside world.

Others cause a change in either the inputs or the outside world, like `printf`, which outputs a string to be displayed to the user.

We call these interactions, either changes to the input or the outside world, "side effects".

A function like `strlen`, which has a return value, but does not alter the input or the outside world, does not have side effects.

Why are side effects important?  Functions with side effects are common and useful, but can create one more place to look when tracking down a bug.  Since they change things around when they run, they’re one more thing to pay attention to when you’re troubleshooting a program.  Pay attention to if questions have side effects or not!  When you write large programs with your own functions, knowing whether a side effect can help you track down bugs.

##### Module 2
[Return to Prep for Class 1](../../class1-prep)

# Resource: Calling Functions

Let’s review how to use functions!  Over the course of your career as a programmer, you’ll use many, many functions, both those others have written, and those you’ve written yourself. As we’ve seen before, we can run a library function like so:

```
#include <cs50.h>
string exampleString = “hello!”;  // set up an example variable to use

strlen(exampleString);
```

`strlen` takes a string, and calculates the length of that string, i.e. how many characters it contains.

But wait!  Something is missing here; we got the length of the string, but we didn’t do anything with it!  If we, say, wanted to print the length of the string, how could we do this?

## Return Values

`strlen` is an example of a function that "gives back" a value.  We call this a return value.  To use the value that a function hands back to us, we can store it in a variable:

```
string exampleString = “hello!”;

// call strlen and store its return value in a variable
int exampleStringLength = strlen(exampleString);

printf(“The string has %i characters!\n”, exampleStringLength);
```

## Side Effects

`strlen` takes a `string` and returns an `int`. The value of `strlen("hello")` is `5`, because  But some functions actually don't return any value at all. For example, `printf`. The `printf` function does not compute a value. Instead, printf *does* something. What is the "value" of `printf("hello")`? Nothing at all, but something has "happened" after we call it: namely the user now sees "hello" on their console.

We call these interactions, either changes to the input or the outside world, "side effects".

A function like `strlen`, which has a return value, but does not alter the input or the outside world, does not have side effects.

Why are side effects important?  Functions with side effects are common and useful, but can create one more place to look when tracking down a bug.  Since they change things around when they run, they’re one more thing to pay attention to when you’re troubleshooting a program.  Pay attention to if questions have side effects or not!  When you write large programs with your own functions, knowing whether a side effect can help you track down bugs.

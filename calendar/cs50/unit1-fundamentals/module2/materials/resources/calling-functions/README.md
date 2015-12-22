##### Module 2
[Return to Prep for Class 1](../../class1-prep)

# Resource: Calling Functions

Let’s review how to use functions!  Over the course of your career as a programmer, you’ll use many, many functions, some of which you’ve written yourself, as well as some written by other people. As we’ve seen previously, we can run a library function like so:

```
#include <cs50.h>
string exampleString = “hello!”;  // set up an example variable to use

strlen(exampleString);
```

`strlen` takes a string and calculates the length of that string, i.e. how many characters it contains.

But wait!  Something is missing here. We computed the length of the string, but we didn’t do anything with it!  If we, say, wanted to print the length of the string, how could we do this?

## Return Values

`strlen` is an example of a function that "gives back" a value.  We call this a return value.  To use the value that a function hands back to us, we can store it in a variable:

```
string exampleString = “hello!”;

// call strlen and store its return value in a variable
int exampleStringLength = strlen(exampleString);

printf(“The string has %i characters!\n”, exampleStringLength);
```

## Side Effects

`strlen` takes a `string` and returns an `int`. The value of `strlen("hello")` is `5`, because its input argument has 5 letters.

Some functions don't return any values, for example, `printf`. The `printf` function does not compute anything, instead, printf *does* something. The return value of `printf("hello")` is nothing, but something has "happened" after we call it: the user now sees "hello" on their console.

We call these interactions *side effects*. Side effects come in two forms: changes to the input and changes to the outside world. A function like `strlen`, which has a return value but does not alter the input or the outside world, does not have side effects.

Why are side effects important?  Functions with side effects are common and useful, but can lead to bugs if you aren't careful. You should always be aware of what side effects are present in the functions that you use, so that you can examine these side effects if problems start to occur.

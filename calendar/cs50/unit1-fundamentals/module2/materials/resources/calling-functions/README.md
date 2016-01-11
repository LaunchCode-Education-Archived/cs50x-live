##### Module 2
[Return to Prep for Class 1](../../class1-prep#functions)

# Resource: Calling Functions

Let’s review how to use functions!  Over the course of your career as a programmer, you’ll use many, many functions, some of which you’ve written yourself, and some written by other people. 

A function that was written by other people usually comes from a library, which we need to explicitly include at the top of our file, as we’ve seen previously. 

For example, we might want to use a function called `strlen` (short for "string length"), which is defined in a library called `string.h`. 

```c
#include <string.h>
#include <stdio.h>
#include <cs50.h>

string exampleString = “hello!”;  // set up an example variable to use

strlen(exampleString); // call the strlen function
```

`strlen` takes a string and calculates the length of that string, i.e. how many characters it contains.

In the example above, notice how we must add this line: `#include <string.h>`. Then, we proceed to create a string, and call the `strlen` function to get its length. "Calling" the function is done by writing the name of the function, `strlen`, followed by parentheses, `( )`, inside of which we provide whatever argument(s) the function needs, in this case `exampleString`.

But wait!  Something is missing here. The function tells us the length of the string, but we didn’t do anything with the answer!  For example, let's say we wanted to write a print statement to inform the user about the length of the string. How could we do this?

## Return Values

`strlen` is an example of a function that "gives back" a value.  We call this a "return value". The return value is like the answer to a question. In this case, the question is "What is the length of this string?". 

One way to use the value that a function hands back to us, is to store it in a variable:

```c
string exampleString = “hello!”;

// this line is pretty useless on its own.
strlen(exampleString);

// we need to call strlen AND store its return value in a variable
int exampleStringLength = strlen(exampleString);

// now we can refer to our variable in order to print its value
printf(“The string has %i characters!\n”, exampleStringLength);

printf(“The string has fewer than %i characters.\n”, exampleStringLength + 10);
```

There are two steps to this process:

1. call a function and store its return value in a variable
2. use that variable to do stuff

There is an alternative way which doesn't require the use of a variable: you can simply skip Step 1, and embed the function invocation directly into your code for Step 2:

```c
string exampleString = “hello!”;

// here we print the length of the string by embedding the invocation of strlen directly into our print statement.
printf(“The string has %i characters!\n”, strlen(exampleString));
```

There is no "right way" between these two styles. Depending on context, one style might make more sense than the other, or either might be fine. Over time, you will develop an instinct this type of thing, balancing a variety of concerns to write code that:
* is easy for humans to read and understand
* is not repetitive
* makes efficient use of computer resources

The main takeaway here is, don't just do this:

```c
strlen(exampleString);
```

Doing the above is sortof like writing a sentence that has a subject but no predicate.

If I said this to you: 

<blockquote>
"The capital of Algeria."
</blockquote>

you would be like, "That's not a complete sentence, mate. Go on... what *about* the capital of Algeria?"

You were probably expecting something more like:

<blockquote>
"The capital of Algeria is Algiers. 

Algiers is a nice place."
</blockquote>

or, more succintly:

<blockquote>
"The capital of Algeria a nice place."
</blockquote>

Similarly, if you call a function with a return value, but you aren't *doing something* with that return value, you are probably on the wrong track.


## Side Effects

Not every function has a return value.

Some functions don't return anything. For example, `printf`. The `printf` function does not compute anything. The return value of `printf("hello")` is nothing, or technically a special term called `void`.

Instead, `printf` *does* something. After we call it, something has *happened*: the user now sees "hello" on their console.

Calling a function like `printf` is similar to an "imperative" sentence in English: it's a "command", or instructions for what you want to happen. You're saying "Hey computer, go and print this string to the console".

The result is what we call a *side effect*. When you call a function like `printf`, you don't get a value back, but you cause something to happen, you "affect" the state of the world in some way (in this case, the console on the user's computer now contains a new line of text.)

This is why, in contrast to a function like `strlen`, the `printf` function is perfectly capable of standing "on its own" in a line of code. Indeed, it would be pretty weird to embed `printf` in a larger line of code, by doing something like storing its result in a variable:

```c
int x = printf("hello");
```

This makes no sense. It would be like me saying:

<blockquote>
"The capital of Algeria is hey go eat something you look hungry!"
</blockquote>

The act of you eating a snack is not a tangible thing, let alone the glorious, thriving city of Algiers, Algeria.

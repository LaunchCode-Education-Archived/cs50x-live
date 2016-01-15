##### Module 2
[Back to Prep for Class 1](../../class1-prep#functions)
# Resource: Writing Your Own Functions

Up until now, we’ve been making use of functions provided in the cs50 library to do things like:
  * get input from the user with `GetString`, `GetInt`, etc,
  * get the length of a string with `strlen`. 

These functions had to come from somewhere: they were written by the people of CS50 and put together into a library for us to use.

Just as they could write functions and package them up for us, we can write functions for ourselves (and eventually package them up for others!).

## Why write your own functions?

Why would we do this? There are two main reasons: it can save us from writing repeitive code, and also save us time when we have to change or debug it.

Let's continue using `strlen` as an example. Suppose for a minute that `strlen` doesn't exist-- nobody has created it yet. And suppose we want to write a program that needs to calculate string lengths, like, say, a program that takes in three strings, and outputs the lengths of each.  

With `strlen`, this would have been relatively simple: 

```c
// Ask the user for each string, outputting the length of the string each time

string exampleStringOne = GetString();
int lengthOne = strlen(exampleStringOne);
printf(“String one has %i characters.\n”, lengthOne);

string exampleStringTwo = GetString();
int lengthTwo = strlen(exampleStringTwo);
printf(“String two has %i characters.\n”, lengthTwo);

string exampleStringThree = GetString();
int lengthThree = strlen(exampleStringThree);
printf(“String three has %i characters.\n”, lengthThree);
```

But without it, we would need to do a bunch of extra computation to figure out the length of the string. And the kicker is that we would have to do it three times, one for each string:

```c
string exampleStringOne = GetString();

// calculate length of exampleStringOne
int lengthOne = 0;
bool keepGoing = true;
while(keepGoing)
{
  if (exampleStringOne[lengthOne] == '\0')
  {
    keepGoing = false;
  } else {
    lengthOne = lengthOne + 1;
  }
}

printf(“String one has %i characters.\n”, lengthOne);


string exampleStringTwo = GetString();

// calculate length of exampleStringTwo
int lengthTwo = 0;
keepGoing = true;
while(keepGoing)
{
  if (exampleStringTwo[lengthTwo] == '\0')
  {
    keepGoing = false;
  } else {
    lengthTwo = lengthTwo + 1;
  }
}


printf(“String two has %i characters.\n”, lengthTwo);

// calculate length of exampleStringThree
string exampleStringThree = GetString();
int lengthThree = 0;
keepGoing = true;
while(keepGoing)
{
  if (exampleStringThree[lengthThree] == '\0')
  {
    keepGoing = false;
  } else {
    lengthThree = lengthThree + 1;
  }
}

printf(“String three has %i characters.\n”, lengthThree);
```

Yuck. 

Clearly it's much nicer to be able to just call the function. If only someone had written it for us... 

But the good news is that we can just write it ourselves!



This saves us a considerable amount of writing, and as these little routines get more and more complicated, the time you save by putting them in functions instead of rewriting them over and over just gets bigger and bigger.

As an added benefit, the resulting code is far easier to read: as long as we know that `strlen` calculates the length of a string, we can see the idea expressed in the code much easier when it uses `strlen` than when it uses loops, where we’d have to read and understand each loop to understand what they’re doing.

Here is an example of the second point: saving time when changing or debugging code.

Say we wanted to change `strlen` so it printed the length of its input string, in addition to having it in the return value.

With code like this:

```c
...
string exampleStringTwo = GetString();
int lengthTwo = strlen(exampleStringTwo);
printf(“String two has %i characters.\n”, lengthTwo);
...
```

We just have to go find the code where we wrote the strlen function, and change it there, only once.  If we instead had this code:

```c
...
string exampleStringTwo = GetString();
int lengthTwo = 0;
keepGoing = true;
while(keepGoing)
{
  if (exampleStringTwo[lengthTwo] == '\0')
  {
    keepGoing = false;
  } else {
    lengthTwo = lengthTwo + 1;
  }
}
printf(“String two has %i characters.\n”, lengthTwo);
...
```

We would have to do it three times, or as many times as we used strlen.

This same example illustrates our second scenario: what happens if we need to debug code?

Let’s say for some reason, each time we calculate the length of a string, it was returning a value 1 higher than we expected.  We need to fix this!  In the example where we calculate string lengths with function calls, we only need to look at one piece of code and fix it there.  If we instead calculated string lengths with loops, we would instead need to change three separate pieces of code.  This difference in the amount of work we’d need to do gets larger the more times we could’ve used a function call to strlen instead of a loop.

Note that this is what would happen if we copy-pasted the code to calculate string lengths.  You might just be making more work for yourself later, and if you forget to fix any of the copy-pastes, you’ll now have to go find the bug and fix it again, only this time you’ll think you’ve already fixed it!

So now that you’re about to write your own functions, here’s some basic advice on how to use them:
- if you notice you’re doing the same thing repeatedly, try putting that thing into a function
- if you notice that you’re writing a piece of code that seems very complicated, try putting it into a function.  The piece of code that calls your function will now be simpler

This should let you write code that’s easier to understand, and easier to fix and change later, while letting you spend less effort than you would have otherwise.

##### Module 2
[Go back to Prep for Class 1](../../class1-prep#chars-ascii) 
# Intro to Chars

We’ve seen the `string` datatype now, but how does it work?  We know that numbers like `int` and `float`, are represented by a finite chunk of binary bits, but strings can be of any length; how can we represent these?

Just like words in real life are a list of letters, strings are a list of “letters,” and each “letter” is a finite piece of data we call a `char`.

How are these chars organized?  In the computer’s memory, they’re just placed one after another, so a string of three letters, like “mom” or “car”, is represented by three `char`s right next to each other in memory.  This structure, where multiple pieces of the same kind of data are stored right next to each other, is called an `array`.

We’ll talk more about arrays later, but the important thing right now is that a `string`, which we’ve been working with, is made up of a sequence of a smaller data type, a `char`.

Now we have a new data type to work with and think about: `char`.  How do we use it?

To declare a variable with type `char`, we can do this:

```c
char myChar = ‘q';
```

This has a few differences from declaring a `string`, like this:

```c
string myString = “qwe”;
```

A `char` is declared with single quotes (or apostrophes), while a string is declared with double quotes (quotation marks).  Also, a char can be at most 1 character, which a string can be any number of them.

So far, when writing programs, we’ve been asking the user for input, then storing their responses in `string` variables.  Can we do this with “char”s?  Yes!  You can use the `GetChar` function from the cs50 library, just like we’ve been using the `GetString` function before.

This is how we asked the user for strings:
```c
#include <cs50.h> // at the top of the file

// ... somewhere else lower down in the file
string myString = GetString(); // wait for user input
printf(“%s is my favorite word!\n”, myString);
```

This is how we ask the user for chars:
```c
#include <cs50.h> // at the top of the file

// ... somewhere else lower down in the file
char myChar = GetChar(); // wait for user input
printf(“%c is my favorite letter!\n”, myChar);
```

Notice that in `printf`, we used `%c` instead of `%s`.  `printf` is coded so that when it sees `%s`, it expects a string, but if it sees `%c`, it expects a `char`.

Finally, some background on how `char`s work.

Just like with `int`s, each `char` is represented by a discrete sequence of bits.  We already learned about how the computer translates the bits that make up an `int` into an integer, using binary, or base-2 counting, rather than base-10. But how can a sequence of 0s and 1s represent a letter? Well, there's no "logical" pattern. Instead, the computer simply uses a standardized scheme called <a href="http://www.asciitable.com" target="_blank">ASCII</a>, which maps numbers to letters (and to other characters such as `$`, `#` and `~`, and even "numeric" characters like `3` or `8`). For example, the character `q` has an ASCII value of `113`. Again, there's no logical connection between `q` and `113`; ASCII is simply an arbitrary mapping that some people made up. The key is that every computer around the world "buys into" the same standardized scheme, so then they can use the scheme to communicate with each other.

You don’t have to know or memorize the ASCII table!  Just know that just like how a computer can translate the bits of an `int` into an integer, it can translate the bits of a `char` into a letter. Under the hood, the computer represents the `char` 'q' as 01110001, the number 113 in binary.

### An Example

Check out <a href="threeletterword.c">threeletterword.c</a> for an example of `char`s in action. Our program simply asks the user for three `char`s, one at a time, and then prints out the resulting "word":
```
$ ./theeletterword
char please: g
char please: i
char please: t
That spells git!
```

##### Module 3
[Back to Class 1](../../class1)

# Studio: Word-Grid

Recall that you can represent multi-dimensional data with nested arrays. For example, you can represent a grid of
things as an array of (arrays of things).

In fact, an array of strings is one such example; since a string is actually just an array of chars, an
array of strings is an array of (arrays of chars). 

Let's explore this by writing a program that receives 3 `string`s, each exactly 3 characters long (you might think of this like a grid or matrix of 9 `chars`), and prints the grid to the conosle, with each word in its own **column**, like so:

```nohighlight
$ ./wordgrid sun yes ear
sye
uea
nsr
```
Notice how each word is written downwards, rather than accross.

First you'll want to perform some validation:
* make sure the user provided exactly 3 additional command-line arguments (in addition to the name of the program itself).
* make sure each of those arguments is exactly 3 characters-long. (Use `strlen()`)

After validating, you can go about printing the grid. 

Note that you can access the elements of a nested array using multiple brackets, i.e. `[][]`. For example, if you have an array called `words`, which looks like: 

`[ "sun", "yes", "ear" ]` 

, then:
* `words[0][0]` evaluates to `"sun"[0]` which evaluates to `'s'`
* `words[2][1]` evaluates to `"ear"[1]` which evaluates to `'a'`

Quiz: How would you get the first character of the second word, e.g. `'y'`?

*You can grab a copy of these instructions from Helpful Resources <a href="../../../../../../..//helpful-resources/modules/module-3.html#class-1-studio-word-grid" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.

##### Module 3

# Studio: Word-Grid

Recall that you can represent multi-dimensional data with nested arrays. For example, you can represent a grid of
things as an array of (arrays of things).

In fact, an array of strings is one such example; since a string is actually just an array of chars, an
array of strings is an array of (arrays of chars). 

Let's explore this by writing a program that receives three 3-character `string`s 
(in other words a grid of 9 `chars`), 
and prints the grid to the conosle, with each word in its own **column**, like so:

```
$ ./wordgrid sun yes ear
sye
uea
nsr
```
Notice how each word is written downwards, rather than accross.

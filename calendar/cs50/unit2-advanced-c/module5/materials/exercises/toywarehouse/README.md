##### Module 5
[Back to Prep for Class 2](../../class2-prep)
# Exercise: Toy Warehouse

You work for a toy warehouse management company that sorts each toy by the first letter of its name, but keeps everything with the same first letter in a list.

Help your company out by writing a program that takes in new inventory items and stores them in the proper location.

To do this, you’ll need to employ a Hash Table with Separate Chaining, as we saw [here](http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#hash_tables).

The full process, for storing any new item, looks like this:
- ask for information on the item
- use a hash function to find it’s correct location
- add it to the list at that location
- print out the new inventory at that location

We’ve [provided a function](toywarehouse.html) for hashing based on the first letter of a toy’s name, as well as a basic struct for linked lists, and an initialization of an array for use as a hash table.  We’ve also provided the code to print out the contents of a key in the hash table.

To finish this program, you’ll need to write the code to:
- use the hash function
- add the item to the beggining of the list
- print out the contents of that list using our provided printing function

Usage of a correct implementation of this code will look like this:
```nohighlight
$ 
```

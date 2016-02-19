##### Module 5

[Back to Class 2](../../class2)

# Studio: Toys R Accounted 4

You work for a toy warehouse management company. You've got a lot of toys in your warehouse, and so it is important to keep an organized list of your inventory. Your company's organizational system is to sort each toy by the first letter of its name.

So, for example, if your current inventory contained:
* Slinky
* Barbie
* Silly Putty
* Furbie
* <a href="https://www.youtube.com/watch?v=AdHrgApNYWs" target="_blank">Bonestorm</a> Videogame
* Cup and Ball

...then it would be organized into the following sublists:

* B
  1. Barbie
  2. Bonestorm Videogame
  
* C
  1. Cup and Ball
  
* F
  1. Furbie
  
* S
  1. Slinky
  2. Silly Putty

Items do not have to be listed alphabetically within a sublist-- they can be in any order. For example, look at the S list above.

### Your Assignment

Help your company out by writing a program that takes in new inventory items and stores them in the proper location:

```nohighlight
$ ./toystorage
Welcome, valued employee. 

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit
a 
What is the name of the new toy?
Slinky
Ok, Slinky has been added to bin 18
bin 18 contains:
    - Slinky

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit
a 
What is the name of the new toy?
Barbie
Ok, Barbie has been added to bin 1
bin 1 contains:
    - Barbie

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit
a 
What is the name of the new toy?
Bonestorm Videogame
Ok, Bonestorm Videogame has been added to bin 1
bin 1 contains:
    - Bonestorm Videogame
    - Barbie

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit
q
Current contents of all bins:
bin 1 contains:
    - Bonestorm Videogame
    - Barbie
    
bin 18 contains:
    - Slinky

Goodbye, valued employee.
```

To do this, you’ll need to employ a Hash Table with Separate Chaining, as we saw [here](http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#hash_tables).

Your hash table will be implemented as a big array, where each item in the array is a sublist for a particular letter. So your array will have 26 slots, one for each letter
* the array, at index 0, will contain the sublist of all the toys that start with "a", 
* the array, at index 1, will contain the sublist of all the toys that start with "b", 
* etc

Each sublist is implemented as a linked list, where each node in the list contains the name of the toy and a pointer to the next toy. So we looked inside the big array at index 1, we might expect to find a pointer to node whose `name` field is `"Bonestorm Videogame"`, and whose `next` field is a pointer to the "Barbie" node. 

The full process for storing any new item, looks like this:
- ask for the name of the item
- create a struct to represent the new item
- use a hash function to find correct location where this toy belongs
- add it to the correct sublist, the one at the above location
- print out the new inventory at that location

We’ve provided starter code in [toystorage.c](toystorage.html), including a function for hashing based on the first letter of a toy’s name, as well as a basic struct for linked lists, and an initialization of an array to use as a hash table.  We’ve also provided the code to print out the contents of a key in the hash table.

##### Module 5

[Back to Class 2](../../class2)

# Studio: Toy Storage

You work for a toy warehouse management company. You've got a lot of toys in your warehouse, and so it is important to keep an organized list of your inventory. Your company's organizational system is to sort each toy by the first letter of its name.

So, for example, if your current inventory contained:
* Slinky
* Barbie
* Silly Putty
* Furbie
* Bonestorm Videogame
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
$ ./toystorage
Welcome, valued employee. 

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit

a 
What is the name of the new toy?
Bonestorm Videogame
Ok, Bonestorm Videogame has been added to the B's list:
    - Bonestorm Videogame

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit

a 
What is the name of the new toy?
Barbie
Ok, Barbie has been added to the B's list:
    - Barbie
    - Bonestorm Videogame

Please select an option:
    a - to add a new toy to the warehouse
    q - to quit

a
What is the name of the new toy?
Cup and Ball
Ok, Cup and Ball has been added to the C's list:
    - Cup and Ball
  
Please select an option:
    a - to add a new toy to the warehouse
    q - to quit
    
q
Goodbye, valued employee.
```

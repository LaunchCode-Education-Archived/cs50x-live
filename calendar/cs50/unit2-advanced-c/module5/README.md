[Back to Course Calendar](../../..)
# Module 5

**Pre-reqs:** You should have completed [Module 4](../module4)

### Synopsis 

In this module, you will learn how to combine `struct`s and `array`s in different combinations to create data structures: collections of data that take on a variety of shapes, each suited best for certain types of programming tasks. In Problem Set 5, you will use these data structures to implement a spell checker that searches through hundreds of thousands of words as quickly as possible.

*** 

### Steps

Class # | Date | Before Class | During Class | Topics/Skills
:------:|:----:|:------------:|:------------:|-----------------------|
Class 1 | TBD | [Prep Work](./materials/class1-prep) | [In Class](./materials/class1) | more on pointers and memory, linked lists |
Class 2 | TBD | [Prep Work](./materials/class2-prep) | [In Class](./materials/class2) | hash tables, trees and tries, stacks and queues |
Class 3 | TBD | Work on [Problem Set 5](./materials/problem-set) | [In Class](./materials/class3) | (office hours!) |



### Confusing Stuff
* linked lists and all the other data strctures are all built out of structs and pointers, so as a prerequisite they should be comfortable with those concepts
* malloc vs arrays. Both are pointers to contiguous chunks of memory, so what's the difference?
  * arrays are fixed-size, whereas memory that was `malloc`ed can be `realloc`ed
  * malloc memory comes from the heap, arrays from the stack
  * malloc is passed a size of a chunk of memory to get, arrays you ask for a number of a dataype - Brian
  * does malloc require all its data to be of the same type? (TODO idk)
   * similar to the above note: I believe malloc just gives you memory, and you do with it what you want - Brian
* Sometimes I need to free memory, but other times I dont. What gives?
  * you only need to free memory that came from the heap (was `malloc`ed)
  * but what if I didn't call malloc myself, e.g. GetString()? 
    * A better rule of thumb is: anything that's a pointer needs to be freed when youre done. 
* When do I need to malloc something? 
  * Whenever you need memory that will outlast the current function
  * when you might need to dynamically reallocate more
* hash-tables involve nested data structures, e.g.
  * an array of linked-lists
  * a trie of arrays

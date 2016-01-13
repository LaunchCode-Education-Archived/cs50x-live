[Back to Course Calendar](../../..)
# Module 5

**Pre-reqs:** [Module 4](../module4)

#### Synopsis 



By the end of this module you will have completed [Problem Set 5](./materials/problem-set).

*** 

### Steps

Class # | Before Class | During Class | Topics/Skills
:--------:|:------------:|:------------:|-----------------------|
**Class 1**| [Prep Work](./materials/class1-prep) | [In Class](./materials/class1) | more on pointers and memory, linked lists |
**Class 2**| [Prep Work](./materials/class2-prep) | [In Class](./materials/class2) | stacks and queues, hash tables, tree and tries |
**Class 3**| Work on [Problem Set 5](./materials/problem-set) | [In Class](./materials/class3) | (office hours!)|


### Resources (by topic)

##### More on Pointers, Memory
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#more_on_pointers" target="_blank">Week 5 / More On Pointers</a> | need to malloc or youll get a seg fault
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">Week 5 / CS50 Library</a> | under the hood GetString and GetInt. Make into a Follow-Along?
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#memory_and_valgrind" target="_blank">Week 5 / Memory and Valgrind</a> | example use of valgrind to find a leak and an invalid write
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#memory" target="_blank">Week 5, continued / Memory</a> | Stack and Heap, buffer overflow attack
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=l1sfaAyt6ac&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=1" target="_blank">scanf-0</a>
Follow-Along | Walkthrough| <a href="https://www.youtube.com/watch?v=4zS7RTnRuWY&index=2&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8" target="_blank">scanf-1</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=TJK6l_SBLnk&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=3" target="_blank">scanf-2</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=L02X-XNT5No" target="_blank">CS50 Library</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=fvTsFjDuag8" target="_blank">Valgrind</a>
Study | CS50 Study | <a href="https://study.cs50.net/?toc=malloc" target="_blank">Malloc</a> | malloc is good, do sooner rather than later. Maybe module 4?


##### Linked Lists
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#linked_lists" target="_blank">Week 5 / Linked Lists</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#linked_lists_continued" target="_blank">Week 5, continued / Linked Lists, continued</a> | recap on LLs pros and cons
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#searching" target="_blank">Week 5, continued / Searching</a> | impl of function that searches for a value in an LL
Watch | Short | <a href="https://www.youtube.com/watch?v=5nsKtQuT6E8" target="_blank">Singly Linked Lists</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ZoG2hOIoTnA&index=2&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh" target="_blank">Singly-Linked Lists</a> 
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=HmAEzp1taIE&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh&index=3" target="_blank">Doubly-Linked Lists</a>
Study | CS50 Study | <a href="https://study.cs50.net/?toc=linked_lists" target="_blank">Linked Lists</a> |
Do | Exercise | [The Beacons of Gondor](./materials/exercises/beaconsofgondor) | Complete this exercise by implementing linked-list traversal
Do | Exercise | [Queen's English](./materials/exercises/queensenglish) | Complete this exercise by implementing linked-list insertion

##### Stacks and Queues
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#stacks_queues" target="_blank">Week 5 / Stacks & Queues</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#stacks_queues" target="_blank">Week 5, continued / Stacks & Queues</a> | 2 impls of a stack data structure. first built on array,has fixed capacity, second built on malloc with ability to realloc. Then 2 impls of a queue. We might want to give examples of when stacks and queues are useful.
Watch | Short | <a href="https://www.youtube.com/watch?v=SLOrrO7DlYo&list=PLhQjrBD2T3825srGzBvJGMWJX4PATLYaq&index=2" target="_blank">Queues</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=9Tp8wHD66lw&list=PLhQjrBD2T383tuTZvvexny73B9-sl2aEj" target="_blank">Stacks</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=10jRKWI9s1k&list=PLhQjrBD2T383tuTZvvexny73B9-sl2aEj&index=2" target="_blank">Queues</a>
Study | CS50 Study | <a href="https://study.cs50.net/?toc=stacks,queues" target="_blank">Stacks, Queues</a> | 


##### Trees and Tries
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#tries" target="_blank">Week 5, continued / Tries</a> | relatively quick. note that this is how an actual paper dictionary sorts words
Watch | Short | <a href="https://www.youtube.com/watch?v=mFptHjTT3l8&list=PLhQjrBD2T3825srGzBvJGMWJX4PATLYaq&index=3" target="_blank">Trees</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=NKr6gWcXkIM&list=PLhQjrBD2T3825srGzBvJGMWJX4PATLYaq&index=4" target="_blank">Tries</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=TRg9DQFu0kU&list=PLhQjrBD2T383tuTZvvexny73B9-sl2aEj&index=5" target="_blank">Tries</a>
Study | CS50 Study | <a href="https://study.cs50.net/?toc=trees,tries" target="_blank">Trees, Tries</a> | 


##### Hash Tables
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#hash_tables" target="_blank">Week 5, continued / Hash Tables</a> | 2 examples, first linear probing, then an array of linked-lists
Watch | Short | <a href="https://www.youtube.com/watch?v=h2d9b_nEzoA&index=1&list=PLhQjrBD2T3825srGzBvJGMWJX4PATLYaq" target="_blank">Hash Tables</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=tjtFkT97Xmc&index=3&list=PLhQjrBD2T383tuTZvvexny73B9-sl2aEj" target="_blank">Hash Tables</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#compression" target="_blank">Week 5, continued / Compression</a> | stripping redundancy from data storage. examples: images of flags, videos, huffman coding. Not sure where this fits in but is very cool.
Study | CS50 Study | <a href="https://study.cs50.net/?toc=hashtables" target="_blank">Hash Tables</a> | 
Do | Exercise | [Toy Warehouse](./materials/exercises/toywarehouse) | Finish this program by implementing adding new entries to a hash table

##### Data Structures Summary
Task | Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=YiwRCN_SMuA&list=PLhQjrBD2T383tuTZvvexny73B9-sl2aEj&index=4" target="_blank">Data Structures Summary</a>
Watch | Doug's Playlist | []()
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/6/m/notes6m/notes6m.html#data_structures_recap" target="_blank">Week 6 / Data Structures Recap</a>
Study | CS50 Study | | maybe just conglomerate all the individual data structure ones here instead of spreading them out

##### TBD
Task | Type | Link | Notes
-----|------|------|------
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=bzitGDs5BXk" target="_blank">Week 5</a>



### Resources (by type)

**Lecture**

Task | Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=RsIP1gRneOs" target="_blank">Week 5</a>|
Watch | Lecture | <a href="https://www.youtube.com/watch?v=3p_Scm7qSfU" target="_blank">Week 5, continued</a>

**Lecture Notes**

Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#more_on_pointers" target="_blank">Week 5 / More On Pointers</a> | need to malloc or youll get a seg fault
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">Week 5 / CS50 Library</a> | under the hood GetString and GetInt. Make into a Follow-Along?
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#memory_and_valgrind" target="_blank">Week 5 / Memory and Valgrind</a> | example use of valgrind to find a leak and an invalid write
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#linked_lists" target="_blank">Week 5 / Linked Lists</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#stacks_queues" target="_blank">Week 5 / Stacks & Queues</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#linked_lists_continued" target="_blank">Week 5, continued / Linked Lists, continued</a> | recap on LLs pros and cons
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#searching" target="_blank">Week 5, continued / Searching</a> | impl of function that searches for a value in an LL
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#stacks_queues" target="_blank">Week 5, continued / Stacks & Queues</a> | 2 impls of a stack data structure. first built on array,has fixed capacity, second built on malloc with ability to realloc. Then 2 impls of a queue. We might want to give examples of when stacks and queues are useful.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#memory" target="_blank">Week 5, continued / Memory</a> Stack and Heap, buffer overflow attack
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#more_data_structures" target="_blank">Week 5, continued / More Data Structures</a> | binary search tree
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#compression" target="_blank">Week 5, continued / Compression</a> | stripping redundancy from data storage. examples: images of flags, videos, huffman coding. Not sure where this fits in but is very cool.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#hash_tables" target="_blank">Week 5, continued / Hash Tables</a> | 2 examples, first linear probing, then an array of linked-lists
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#tries" target="_blank">Week 5, continued / Tries</a> | relatively quick. note that this is how an actual paper dictionary sorts words


### Confusing Stuff
* linked lists and all the other data strctures are all built out of structs and pointers, so as a prerequisite they should be comfortable with those concepts
* malloc vs arrays. Both are pointers to contiguous chunks of memory, so what's the difference?
  * arrays are fixed-size, whereas memory that was `malloc`ed can be `realloc`ed
  * malloc memory comes from the heap, arrays from the ___ (TODO idk)
   * by default at least, arrays are created on the stack - Brian
  * malloc is passed a size of a chunk of memory to get, arrays you ask for a number of a dataype - Brian
  * does malloc require all its data to be of the same type? (TODO idk)
   * similar to the above note: I believe malloc just gives you memory, and you do with it what you want - Brian
* Sometimes I need to free memory, but other times I dont. What gives?
  * you only need to free memory that came from the heap (was `malloc`ed)
  * but what if I didn't call malloc myself, e.g. GetString()? 
    * A better rule of thumb is: anything that's a pointer needs to be freed when youre done. 
* When do I need to malloc something? 
  * Whenever you need memory that will outlast the current function
* hash-tables involve nested data structures, e.g.
  * an array of linked-lists
  * a trie of arrays

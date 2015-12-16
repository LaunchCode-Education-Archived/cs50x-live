##### Module 5

# Class 1 Prep

##### Lecture:
Task | Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=RsIP1gRneOs" target="_blank">Week 5</a> |


##### More on Pointers, Memory
Task | Type | Link | Notes
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/?toc=malloc" target="_blank">Malloc</a> | Maybe module 4?
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#more_on_pointers" target="_blank">Week 5 / More On Pointers</a> | need to malloc or youll get a seg fault
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">Week 5 / CS50 Library</a> | under the hood GetString and GetInt.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=l1sfaAyt6ac&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=1" target="_blank">scanf-0</a> | calling a "destructive" function, pass by reference
Do | Exercise | | TODO exc: require them to implement a pass-by-ref function.

##### A few pitfalls with memory
Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#memory_and_valgrind" target="_blank">Week 5 / Memory and Valgrind</a> | example use of valgrind to find a leak and an invalid write
Watch | Short | <a href="https://www.youtube.com/watch?v=fvTsFjDuag8" target="_blank">Valgrind</a>
Do | Exercise | | TODO exc make em use valgrind to find a leak, and then fix the leak
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#memory" target="_blank">Week 5, continued / Memory</a> | Stack and Heap, buffer overflow attack
Follow-Along | Walkthrough| <a href="https://www.youtube.com/watch?v=4zS7RTnRuWY&index=2&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8" target="_blank">scanf-1</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=TJK6l_SBLnk&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=3" target="_blank">scanf-2</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=L02X-XNT5No" target="_blank">CS50 Library</a> | In scanf-2, David Malan left us hanging with a decent, but limited solution for getting user input. Now Nate Hardison guides you through the actual source code of the implementation for GetInt and GetString.
Do | Exercise | | TODO exc: make them step through the library functions in debugger

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
Read | Supplement | |  TODO res: custom implementation of GetString that uses a linked list of chars, therefore doesnt need to realloc space in the same way
Do | Exc |  | TOD exc: make the above more efficient by inserting each new char at the beginning of the list. But this means that in order to create the String object you have to iterate backwards over the list, which means you need to make it Doubly-Linked. 

Other linked list ideas:
* implement bubble sort
* UK-ify strings
* sorted list of names
* implement getstring
* LOTR


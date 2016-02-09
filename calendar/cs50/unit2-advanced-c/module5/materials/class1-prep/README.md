##### [Module 5](../../)

# Class 1 Prep

Before coming to [Class 1](../class1), please complete the following tasks:

##### Lecture
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/watch?v=RsIP1gRneOs" target="_blank">Week 5</a> | This lecture continues looking at memory management, and some common "gotchas" that you have to watch out for. Additionally, we learn about linked lists, stacks and queues, which are "data structures" that provide various ways of interacting with collections of data.

***

##### More on Pointers and Memory / Some tricky "gotchas"
Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#more_on_pointers" target="_blank">Week 5 / More On Pointers</a> | These notes show an example of how you should never dereference a pointer to some memory that you (or a function you called) did not `malloc`. If you do, you will be accessing memory that doens't belong to you, and you might get a segmentation fault.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">Week 5 / CS50 Library</a> | These notes walk us through the actual source code of how the `GetString` and `GetInt` functions are implemented in the `<cs50.h>` library. `GetString` is actually very complicated because the function does not know ahead of time how long the user's input will be, so it must look through the input string and continually reallocate additional memory until reaching the end. `GetInt` simply delegates most of the work to `GetString` and then subsequently ensures that the "string" truly does contain an integer.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=l1sfaAyt6ac&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=1" target="_blank">scanf-0</a> | Follow along with David's first attempt at implementing a program that gets an integer value from the user (without using `GetInt`). <br>You've already seen this program, but see if you can recreate it using the pseudocode <a href="../../../../../../helpful-resources/source-code/m5-source-code.html#scanf-0" target="_blank">here.</a>
Do | Exercise | | [TODO exc: require them to implement a pass-by-ref function] <br> Above we used `scanf`, which is one of those functions that, rather than returning a value, instead requires you to pass a reference to some memory, and then goes and makes a "destructive" update at the address you pass in. Here we ask you to implement a function like that, just to get comfortable with the idea.
Follow-Along | Walkthrough| <a href="https://www.youtube.com/watch?v=4zS7RTnRuWY&index=2&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8" target="_blank">scanf-1</a> | In `scanf-0`, we were not able to confirm that the user gave us the integer we wanted. To solve this, we'll need to change plans and accept `string`s. Then later we'll be able to validate the actual type "inside" the string. But first, simply getting the `string` leads to the problem of figuring out how much memory we need to allocate. <br>You can find the pseudocode to start this task <a href="../../../../../../helpful-resources/source-code/m5-source-code.html#scanf-1" target="_blank">here.</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=TJK6l_SBLnk&list=PLhQjrBD2T381hO-XiBPrps4fzt4rVY3E8&index=3" target="_blank">scanf-2</a> | This is an improvement to scanf-1. Now we simply pick an arbitrary buffer size. It works... until the user gives some input is too large. <br>You can find the instructions to start this task <a href="../../../../../../helpful-resources/source-code/m5-source-code.html#scanf-2" target="_blank">here.</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=L02X-XNT5No" target="_blank">CS50 Library</a> | In scanf-2, David Malan left us hanging with a decent, but limited solution for getting user input. Now Nate Hardison guides us through the actual source code of the implementation for GetInt and GetString.
Do | Exercise | | TODO exc: make them step through the library functions in debugger
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#memory_and_valgrind" target="_blank">Week 5 / Memory and Valgrind</a> | These notes introduce Valgrind, a program you can run on the command-line that checks your own program for memory issues such as invalid writes (when you try to access memory that doesn't belong to you), and leaks (when you allocate memory but never "give it back" by calling `free()`).
Watch | Short | <a href="https://www.youtube.com/watch?v=fvTsFjDuag8" target="_blank">Valgrind</a> | This short explains in more detail how to use Valgrind.
Do | Exercise | | TODO exc make em use valgrind to find a leak, and then fix the leak
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#memory" target="_blank">Week 5, continued / Memory</a> | Stack and Heap, buffer overflow attack. TODO move to class 2 prep?

***

##### Recursion Review and Recursive Structs
Task | Resource Type | Link | Instructions
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/recursion" target="_blank">recursion</a> | Review these materials detailing how recursion works.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=beqqGIdabrE&index=7&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Call Stack</a> | Doug demonstrates an example of what "The Stack" looks like when you call a recursive function.
Read | Resource | [Recursive Structs](../resources/recursive-structs) | Here we provide a brief review of `struct`s, and then introduce the concept of a "recursively defined" `struct`. This is the crucial development that allows us to create data structures such as linked lists, which you will learn about next.
Watch | Short | <a href="https://www.youtube.com/watch?v=EzRwP7NV0LM&index=7&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Structs</a> | This short talks more about both regular and recursively defined `struct`s, and demonstrates an implementation of a linked list. You will see much more about linked lists in the next section below.

***

##### Linked Lists
Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#linked_lists" target="_blank">Week 5 / Linked Lists</a> | These notes explain the advantages that a linked list can give us over an array, and breaks down how to implement a linked list using a recursively defined `struct`. 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#linked_lists_continued" target="_blank">Week 5, continued / Linked Lists, continued</a> | These notes recap the pros and cons of linked lists as compared with arrays.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/5/w/notes5w/notes5w.html#searching" target="_blank">Week 5, continued / Searching</a> | These notes show an example of a function that searches for a particular value in a linked list.
Watch | Short | <a href="https://www.youtube.com/watch?v=5nsKtQuT6E8" target="_blank">Singly Linked Lists</a> | Jason Steinkamp talks about linked lists. A "singly-linked" list is the same, normal linked list we have seen so far. (But we could also create a "doubly-linked" list, which you will see soon in upcoming videos.)
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ZoG2hOIoTnA&index=2&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh" target="_blank">Singly-Linked Lists</a> | Doug Lloyd jumps in with a good hearty talk on linked lists.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=HmAEzp1taIE&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh&index=3" target="_blank">Doubly-Linked Lists</a> | Doug now introduces the doubly-linked list, which allows us to walk both forwards and backwards over the list.
Study | CS50 Study | <a href="https://study.cs50.net/linked_lists" target="_blank">Linked Lists</a> | CS50 Study gives a nice overview of linked lists.
Read | Supplement | |  TODO res: custom implementation of GetString that uses a linked list of chars, therefore doesnt need to realloc space in the same way
Do | Exercise |  | TOD exc: make the above more efficient by inserting each new char at the beginning of the list. But this means that in order to create the String object you have to iterate backwards over the list, which means you need to make it Doubly-Linked. 

***

Other linked list ideas:
* implement bubble sort
* UK-ify strings
* sorted list of names
* implement getstring
* LOTR

### Now you're ready for [Class 1](../class1)

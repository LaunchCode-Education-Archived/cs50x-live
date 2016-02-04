##### [Module 4](../../)

# Class 1 Prep

Before coming to [Class 1](../class1), please complete the following tasks:

#### Leading up to Pointers
Task | Resource Type | Link  | Instructions
--------------|------|------|-------------
Watch | Lecture | <a href="https://youtu.be/8Ba7SgCN2XY?t=1518" target="_blank">Week 4 (25 minutes in)</a> | Only watch the second half. We saw the beginning back in Module 3.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#swap" target="_blank">Week 4 / Swap</a> | Here we are introduced to a function that tries to swap the values of two variables, but fails to do so. We will return this `swap` function a few times as we learn about pointers.
 Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#debugging_with_cs50_ide" target="_blank">Week 4 / Debugging</a> | These notes detail the portion of the lecture in which David used the Debugger to step through the `swap` function and inspect what was happening. It turns out that the `swap` function makes its own internal copies of its arguments, and the original `x` and `y` variables back in `main` remain untouched. To solve, this we'll need to use pointers!
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#pointers" target="_blank">Week 4 / Pointers</a> | These notes reveal how, under the hood, a `string` is just a `pointer` to a `char`. This means that the "value" inside a `string` variable is not actually the contents of the text. Instead it is a number pointing to the memory address where the text is truly located-- more specifically, where the first `char` is located.  
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=ETSddwPGjNM&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=5" target="_blank">noswap</a> | Follow David to create a program that _tries_ to "swap" the values of two variables. <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-noswap" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=Q9d8F9dXxbA&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=1" target="_blank">compare-0</a> | This time follow David while he _tries_ to compare two strings.  <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-compare-0" target="_blank">here</a>.  
Read | Resource | [Value vs Address](../resources/value-vs-address) | A quick review of why `swap` and `compare` aren't working, and how it relates to addresses.

*** 

#### Pointers
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://youtu.be/uYiVtZHns-A?t=1542" target="_blank">Week 4 / Continued (25 minutes in)</a> | Just watch the second half. We will do the first half later, in Class 2 Prep.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#strings_and_pointers" target="_blank">Week 4, continued / Strings and Pointers</a> | These notes review in detail why `compare-0.c` doesn't work, and provides the solution in `compare-1.c`. Next, they introduce a new program, `copy-0.c`, which also fails to work-- to solve it, we will need to use dynamic memory allocation (next section).
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a> | Doug introduces us to pointers. Heads up: he talks a bit about "hexadecimal" counting, which we won't see until Class 2 Prep.
Study | CS50 Study | <a href="https://study.cs50.net/pointers" target="_blank">pointers</a> | CS50 Study provides a good overview of pointers. The table of statements in the last 2 slides is especially helpful.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=jE_bs-QNj3c&index=2&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">compare-1</a> | Keep following David to solve the problem of comparing strings. <br>Find instructions to start the follow-along <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-compare-1" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">pointers</a> | Follow David as he prints a `string` one `char` at a time using pointers <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-pointers" target="_blank">here</a>.
Do | Exercise | [Custom strcmp](../exercises/customstrcmp) | Practice using pointers by implementing your own version of the `strcmp` function
Read | Resource | [Annoying Syntax](../resources/annoying-syntax) | Part of what makes pointers in c hard to learn is that whoever designed the syntax made a couple of odd decisions. Here we simply point out those syntax oddities so they don't catch you offguard.
Watch | Section | <a href="https://youtu.be/SppBaGROtX0?t=370" target="_blank">Jason Hirschorn on Pointers</a> | In this video, Jason Hirschorn leads a live review section on pointers. The video is very long (over an hour) but if you're still feeling confused about pointers, it should be very helpful.
Do | Exercise | [Pointer Table](../exercises/pointer-practice) | Practice evaluating statements that use pointers.

*** 

#### Allocating Memory Dynamically

Task | Resource Type | Link | Instructions
-----|------|------|------
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6o-w4CIWP84&index=12&list=PLhQjrBD2T383fi16gN97XlrTwdxDq2QWZ" target="_blank">sizeof</a> | Learn about the `sizeof` operator. Harvard classifies this as belonging to Week 1, but we postponed it till now, since this is the context where you'll see `sizeof` being used. <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-sizeof" target="_blank">here</a>.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#memory_allocation" target="_blank">Week 4, continued / Memory Allocation</a> | You might want to scroll up a bit, since these notes pick up right where the previous section left off. These notes show how we can use `malloc` to fix that `copy-0.c` program.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ywqB3ZTf8OE&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=3" target="_blank">Dynamic Memory Allocation</a> | Doug explains more about `malloc`. One thing to watch out for: he talks about the importance of always "freeing" any memory that you allocate. This is definitely true, but isn't covered much until Module 5, so if you are confused, don't worry.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=zwKBMSLYrk4&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=3" target="_blank">copy-0</a> | Follow along with David as he tries to copy one string into another, but fails to do so because his code simply makes two string variables that point to the same chunk of memory.  <br>Find instructions to start the follow-along <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-copy-0" target="_blank">here</a>. 
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=ebQSYaneMms&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=4" target="_blank">copy-1</a> | Keep following David as he figures out how to actually copy those strings: we have to allocate more memory for the new string, and manually copy each character over into the new chunk of memory. <br>Find instructions to start the follow-along <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-copy-1" target="_blank">here</a>. 
Do | Exercise | [Double Copy](../exercises/double-copy) | This is a slight twist on the `copy-1` program you just wrote.
Do | Exercise | [Swap Cycle](../exercises/swap-cycle) | This exercise asks you to implement a slightly different version of our friend, the `swap` function.
Watch | Short | <a href="https://www.youtube.com/watch?v=z3j-gK1u6Kg&index=6&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Strings</a> | Christopher Bartholomew talks about how `string`s are stored in memory, and how, under the hood, they always end with a null-terminator `\0` character.

*** 

#### Now you're ready for [Class 1](../class1)

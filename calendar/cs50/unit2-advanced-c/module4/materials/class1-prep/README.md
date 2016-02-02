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
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=ETSddwPGjNM&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=5" target="_blank">noswap</a> | Follow David to create a program that _tries_ to "swap" the values of two variables. <br>You've already seen this program earlier, but try to challenge yourself and start the program using the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-noswap" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=Q9d8F9dXxbA&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=1" target="_blank">compare-0</a> | This time follow David while he _tries_ to compare two strings.  <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-compare-0" target="_blank">here</a>.  
Read | Resource | [Value vs Address](../resources/value-vs-address) | A quick review of why `swap` and `compare` aren't working, and how it relates to addresses.

*** 

#### Pointers
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://youtu.be/uYiVtZHns-A?t=1542" target="_blank">Week 4 / Continued (25 minutes in)</a> | Just watch the second half. We will do the first half later, in Class 2 Prep.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#strings_and_pointers" target="_blank">Week 4, continued / Strings and Pointers</a> |
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a> | prereqs: hex (a little)
Study | CS50 Study | <a href="https://study.cs50.net/pointers" target="_blank">pointers</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=jE_bs-QNj3c&index=2&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">compare-1</a> | Keep following David to solve the problem of comparing strings. <br>Find instructions to start the follow-along <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-compare-1" target="_blank">here</a>.  
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">pointers</a> | Follow David as he prints a `string` one `char` at a time using pointers <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-pointers" target="_blank">here</a>.
Do | Exercise | [Custom strcmp](../exercises/customstrcmp) | Practice using pointers by implementing your own version of the `strcmp` function
Read | Resource | [Annoying Syntax](../resources/annoying-syntax) | Part of what makes pointers in c hard to learn is that whoever designed the syntax made a couple of odd decisions. Here we simply point out those syntax oddities so they don't catch you offguard.
Watch | Short | <a href="https://www.youtube.com/watch?v=gv6i2CJm57Q&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP&index=4" target="_blank">Pointers</a> | prereqs: dereferencing, malloc
Watch | Section | <a href="https://youtu.be/SppBaGROtX0?t=370" target="_blank">Jason Hirschorn on Pointers</a> | really good

*** 

#### malloc

Task | Resource Type | Link | Instructions
-----|------|------|------
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=6o-w4CIWP84&index=12&list=PLhQjrBD2T383fi16gN97XlrTwdxDq2QWZ" target="_blank">sizeof</a> | Learn about the `sizeof` operator. Harvard classifies this as belonging to Week 1, but we postponed it till now, since this is the context where you'll see `sizeof` being used. <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-sizeof" target="_blank">here</a>.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#memory_allocation" target="_blank">Week 4, continued / Memory Allocation</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ywqB3ZTf8OE&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=3" target="_blank">Dynamic Memory Allocation</a> | talks about need to call `free()`, which is not covered till week 5
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=zwKBMSLYrk4&index=3&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">copy-0</a> | Follow David as he _tries_ to copy a `string`.  <br>You've already seen this program earlier, but try to challenge yourself and start the program using the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-copy-0" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=ebQSYaneMms&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=4" target="_blank">copy-1</a> | Keep following David to solve the problem from the previous video. <br>Find instructions to start the follow-along <a href="../../../../../../helpful-resources/modules/module-4.html#class-1-task-copy-1" target="_blank">here</a>. 
Do | Exercise | [Double Copy](../exercises/double-copy) | This is a slight twist on the `copy-1` program you just wrote.
Watch | Short | <a href="https://www.youtube.com/watch?v=z3j-gK1u6Kg&index=6&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Strings</a>
Do | Exercise | [Swap Cycle](../exercises/swap-cycle) | This exercise asks you to implement a slightly different version of our friend, the `swap` function.

***

#### More practice with Recursion
Task | Resource Type | Link  | Instructions
--------------|------|------|-------------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=beqqGIdabrE&index=7&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Call Stack</a> | Watch these videos on the Call Stack, a fundamental concept in computer science that's especially helpful in understanding recursion.
Study | CS50 Study | <a href="https://study.cs50.net/recursion" target="_blank">recursion</a> | Review these materials detailing how recursion works
Rewatch | Lecture | <a href="https://www.youtube.com/watch?v=9WsyLL6KVBY" target="_blank">Week 4, (first 25 minutes)</a>  | THIS IS OPTIONAL. We already saw this last week, but if you want some more recursion material, this might help.

*** 

#### Now you're ready for [Class 1](../class1)

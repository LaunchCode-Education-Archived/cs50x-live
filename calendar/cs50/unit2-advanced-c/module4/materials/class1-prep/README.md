##### Module 4

# Class 1 Prep

Before coming to [Class 1](../class1), please complete the following tasks:

##### More practice with Recursion

Resource Type | Link | Task | Instructions
--------------|------|------|-------------
CS50 Study | [recursion](https://study.cs50.net/recursion) | Study | 
Lecture | <a href="http://www.youtube.com/embed/SadMsthVUBM?autoplay=1&rel=0&start=0" target="_blank">Week 4, (first 25 minutes)</a> | (re)Watch | THIS IS OPTIONAL. We already saw this last week, but if you want some more recursion material, this might help.

##### Leading up to Pointers:

Resource Type | Link | Task | Instructions
--------------|------|------|-------------
Lecture | <a href="http://www.youtube.com/embed/SadMsthVUBM?autoplay=1&rel=0&start=1525" target="_blank">Week 4 (25 minutes in)</a> | Watch | only watch the second half
Lecture Notes | [Week 4 / Swap](http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#swap) | Read
Lecture Notes | [Week 4 / Debugging](http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#debugging_with_cs50_ide) | Read | steps through swap
Lecture Notes | [Week 4 / Pointers](http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#pointers)| Read | Under the hood, a `string` is just a `pointer` to a `char`. This means that the "value" inside a `string` variable is not actually the contents of the text. Instead it is a number pointing to the memory address where the text is truly located-- more specifically, where the first `char` is located.  
Walkthrough | [noswap](https://www.youtube.com/watch?v=ETSddwPGjNM&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=5) | Follow-Along |
Walkthrough | [compare-0](https://www.youtube.com/watch?v=Q9d8F9dXxbA&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=1) | comparing strings (broken) | Watch
Supplement | [Why Pointers](../supplementary-resources/why-pointers) | Read | TODO res: recap by summarizing the problem, why swap and compare dont work, but with pointers they will.


**Pointers**

Task | Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="https://www.youtube.com/embed/uYiVtZHns-A?autoplay=1&rel=0&start=1545" target="_blank">Week 4 / Continued</a> | Just the second half. We'll do the first half in Class 2 Prep.
Read | Lecture Notes | [Week 4, continued / Strings and Pointers](http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#strings_and_pointers) |
Watch | Doug's Playlist | [Pointers](https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2) | prereqs: hex (a little)
Watch | Walkthrough | [compare-1](https://www.youtube.com/watch?v=jE_bs-QNj3c&index=2&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg) | comparing strings (fixed)
Watch | Walkthrough | [pointers](https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg) | print str one char at a time using pointers
Study | CS50 Study | [pointers](https://study.cs50.net/pointers)
Do | Exercise | [Custom strcmp](../exercises/custom-strcmp) | TODO exc 
Watch | Short | [Pointers](https://www.youtube.com/watch?v=gv6i2CJm57Q&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP&index=4) | prereqs: dereferencing, malloc
Watch | Section | [Jason Hirschorn on Pointers](https://youtu.be/SppBaGROtX0?t=370) | really good

**malloc**

Task | Type | Link | Notes
-----|------|------|------
Watch | Walkthrough | [sizeof](https://www.youtube.com/watch?v=6o-w4CIWP84&index=12&list=PLhQjrBD2T383fi16gN97XlrTwdxDq2QWZ) | Learn about the `sizeof` operator. Harvard classifies this as belonging to Week 1, but we postponed it till now, since this is the context where you'll see `sizeof` being used.
Read | Lecture Notes | [Week 4, continued / Memory Allocation](http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#memory_allocation)
Watch | Doug's Playlist [Dynamic Memory Allocation](https://www.youtube.com/watch?v=ywqB3ZTf8OE&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=3)
Watch | Walkthrough | [copy-0](https://www.youtube.com/watch?v=zwKBMSLYrk4&index=3&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg) | copy a string (broken)
Watch | Walkthrough | [copy-1](https://www.youtube.com/watch?v=ebQSYaneMms&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=4) | copy string (fixed)
Watch | Short | [Strings](https://www.youtube.com/watch?v=z3j-gK1u6Kg&index=6&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP)




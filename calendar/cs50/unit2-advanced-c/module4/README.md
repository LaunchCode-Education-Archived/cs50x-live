[Back to Course Calendar](../../..)

# Module 4

**Pre-reqs:** You should have completed [Module 3](../../unit1-fundamentals/module3)

#### Synopsis 

Module 4 introduces a number of important topics:

* **pointers and memory management** TODO
* **file i/o** allows you interact with saved files on the computer. I/O stands for in/out: you will learn both how to read in data from a file, and write out new data to a file.
* **structs** are a way of creating new data types. So far we've seen "primitive" types like `int`, `float` and `char`, as well as larger collection types like `array`. With structs, you can represent more complex custom types by combining these primitives together into clusters.

In Problem Set 4, you will combine your new skills in these topics to write programs that manipulate image files. You will literally be digging into the raw bytes of these images to rewrite their pixels.

***

### Steps

Class # | Date | Before Class | During Class | Topics/Skills
:------:|:----:|:------------:|:------------:|-----------------------|
Class 1 | *TBD* | [Prep Work](./materials/class1-prep) | [In Class](./materials/class1) | more practice with recursion, pointers, malloc
Class 2 | *TBD* | [Prep Work](./materials/class2-prep) | [In Class](./materials/class2) | hexadecimal, file io, structs
Class 3 | *TBD* | Work on problem Set 4](./materials/problem-set) | [In Class](./materials/class3) | (office hours)


### Resources (by type)

**Lecture**

Task | Type | Link | Notes
-----|------|------|------
Watch | Lecture | <a href="http://www.youtube.com/embed/SadMsthVUBM?autoplay=1&rel=0&start=0" target="_blank">Week 4</a> |
Watch | Lecture | <a href="http://www.youtube.com/embed/uYiVtZHns-A?autoplay=1&rel=0&start=0" target="_blank">Week 4, continued |

**Lecture Notes**

Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#swap" target="_blank">Week 4 / Swap</a> |
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#debugging_with_cs50_ide" target="_blank">Week 4 / Debugging</a> | steps through swap
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#pointers" target="_blank">Week 4 / Pointers</a> | comparing strings example unfortunately `1` as mem address and uses "Mom" twice
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#files_headers_and_hex" target="_blank">Week 4, continued / Files, Headers and Hex</a> 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#structs" target="_blank">Week 4, continued / Structs</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#strings_and_pointers" target="_blank">Week 4, continued / Strings and Pointers</a> |
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#memory_allocation" target="_blank">Week 4, continued / Memory Allocation</a>

**Walkthroughs**

Task | Type | Link | Notes
-----|------|------|------
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=Q9d8F9dXxbA&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=1" target="_blank">compare-0</a> | comparing strings (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=jE_bs-QNj3c&index=2&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">compare-1</a> | comparing strings (fixed)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=zwKBMSLYrk4&index=3&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">copy-0</a> | copy a string (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=ebQSYaneMms&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=4" target="_blank">copy-1</a> | copy string (fixed)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=ETSddwPGjNM&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=5" target="_blank">noswap</a> | swap (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">pointers</a> | print str one char at a time using pointers
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=l1sfaAyt6ac&index=7&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">scanf-0</a> | custom GetInt
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=4zS7RTnRuWY&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=8" target="_blank">scanf-1</a> | custom GetString, buggy and dangerous
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=TJK6l_SBLnk&index=9&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">scanf-2</a> | custom GetString (fixed)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=C-J0fKmwKmw&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=10" target="_blank">sigma-0</a> | (already did this in module 3) sumtorial (iterative)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=GSY5bEv3gX8&index=11&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">sigma-1</a> | (already did this in module 3) sumtorial (recursive)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=yMvRqKmbRm4&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=12" target="_blank">structs-0</a> | struct for a "student" object  
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=hZ2Fy-J8DwQ&index=13&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">stucts-1</a> | student structs written to csv file

**Shorts**

Task | Type | Link | Notes
-----|------|------|------
Watch | Short | <a href="https://www.youtube.com/watch?v=KwvObCA04dU&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">File I/O</a> | examples of reading from and writing to files. `fpoen` `fclose` `fgets` `fputs`
Watch | Short | <a href="https://www.youtube.com/watch?v=USPvePv1uzE&index=2&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">GDB</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=gv6i2CJm57Q&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP&index=4" target="_blank">Pointers</a> | seems like a good intro; leads with "up till now, we've only seen..."
Watch | Short | <a href="https://www.youtube.com/watch?v=t4MSwiqfLaY&index=5&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Recursion</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=z3j-gK1u6Kg&index=6&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Strings</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=EzRwP7NV0LM&index=7&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Structs</a>

**Doug**

Task | Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=nrFHGtGdOzA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Hexedecimal</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ywqB3ZTf8OE&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=3" target="_blank">Dynamic Memory Allocation</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=6RLxPdZ59y0&index=4&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Structs</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=wgv4xH_tVgA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=5" target="_blank">Defining Custom Types</a> | typedef
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=VrrnjYgDBEk&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=6" target="_blank">Recursion</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=beqqGIdabrE&index=7&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Call Stack</a>

**Section**

Task | Type | Link | Notes
-----|------|------|------
Watch | Section | <a href="https://youtu.be/SppBaGROtX0?t=370" target="_blank">Jason Hirschorn on Pointers</a> | really good
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=hgJqcVcYCXU" target="_blank">Week 4</a>

**Study**

Task | Type | Link | Notes
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/?toc=io,pointers,malloc" target="_blank">file i/o, pointers, malloc</a>

**Possible Supplements**
* talk explicitly about weird design-choices / conventions with pointers:
  * the two different meanings of `*` 
  * the convention of `char *s` instead of `char* s`
  * show them strcmp <a href="http://www.opensource.apple.com/source/Libc/Libc-262/ppc/gen/strcmp.c" target="_blank">source</a>, make them implement another version

### Resources (by topic)

**Pointers**

Task | Type | Link | Notes
-----|------|------|------
Watch | Section | <a href="https://youtu.be/SppBaGROtX0?t=370" target="_blank">Jason Hirschorn on Pointers</a> | really good
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#swap" target="_blank">Week 4 / Swap</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#debugging_with_cs50_ide" target="_blank">Week 4 / Debugging</a> | steps through swap
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/m/notes4m/notes4m.html#pointers" target="_blank">Week 4 / Pointers</a> | comparing strings example unfortunately `1` as mem address and uses "Mom" twice
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#strings_and_pointers" target="_blank">Week 4, continued / Strings and Pointers</a> |
Watch | Short | <a href="https://www.youtube.com/watch?v=gv6i2CJm57Q&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP&index=4" target="_blank">Pointers</a> | seems like a good intro; leads with "up till now, we've only seen..."
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=Q9d8F9dXxbA&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=1" target="_blank">compare-0</a> | comparing strings (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=jE_bs-QNj3c&index=2&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">compare-1</a> | comparing strings (fixed)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">pointers</a> | print str one char at a time using pointers
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=ETSddwPGjNM&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=5" target="_blank">noswap</a> | swap (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=l1sfaAyt6ac&index=7&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">scanf-0</a> | custom GetInt
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=4zS7RTnRuWY&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=8" target="_blank">scanf-1</a> | custom GetString, buggy and dangerous
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=TJK6l_SBLnk&index=9&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">scanf-2</a> | custom GetString (fixed)


**malloc**

Task | Type | Link | Notes
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#memory_allocation" target="_blank">Week 4, continued / Memory Allocation</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=ywqB3ZTf8OE&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=3" target="_blank">Dynamic Memory Allocation</a>
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=zwKBMSLYrk4&index=3&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">copy-0</a> | copy a string (broken)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=ebQSYaneMms&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=4" target="_blank">copy-1</a> | copy string (fixed)
Watch | Short | <a href="https://www.youtube.com/watch?v=z3j-gK1u6Kg&index=6&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Strings</a>


**structs**

Task | Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=6RLxPdZ59y0&index=4&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Structs</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=wgv4xH_tVgA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=5" target="_blank">Defining Custom Types</a> | typedef
Watch | Short | <a href="https://www.youtube.com/watch?v=EzRwP7NV0LM&index=7&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Structs</a>
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=yMvRqKmbRm4&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=12" target="_blank">structs-0</a> | struct for a "student" object  
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=hZ2Fy-J8DwQ&index=13&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">stucts-1</a> | student structs written to csv file

**File i/o**

Task | Type | Link | Notes
-----|------|------|------
Watch | Short | <a href="https://www.youtube.com/watch?v=KwvObCA04dU&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">File I/O</a> | examples of reading from and writing to files. `fpoen` `fclose` `fgets` `fputs`
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#files_headers_and_hex" target="_blank">Week 4, continued / Files, Headers and Hex</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=nrFHGtGdOzA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Hexedecimal</a>

**Review**
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=hgJqcVcYCXU" target="_blank">Week 4</a>
Study | CS50 Study | <a href="https://study.cs50.net/?toc=io,pointers,malloc" target="_blank">file i/o, pointers, malloc</a>

**Move or Ignore**

Task | Type | Link | Notes
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=VrrnjYgDBEk&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=6" target="_blank">Recursion</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=beqqGIdabrE&index=7&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Call Stack</a>
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=C-J0fKmwKmw&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=10" target="_blank">sigma-0</a> | (already did this in module 3) sumtorial (iterative)
Watch | Walkthrough | <a href="https://www.youtube.com/watch?v=GSY5bEv3gX8&index=11&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">sigma-1</a> | (already did this in module 3) sumtorial (recursive)
Watch | Short | <a href="https://www.youtube.com/watch?v=USPvePv1uzE&index=2&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">GDB</a>
Watch | Short | <a href="https://www.youtube.com/watch?v=t4MSwiqfLaY&index=5&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Recursion</a>

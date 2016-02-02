##### [Module 4](../../)  

# Class 2 Prep

Before coming to [Class 2](../class2), please complete the following tasks:

#### Reinforcement on Pointers, malloc
Task | Resource Type | Link | Instructions
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/?toc=pointers,malloc" target="_blank">pointers, malloc</a> | If you still feel fuzzy on this stuff, that's par for the course. It's going to take time for everything to sink in. Keep your head up!

***

#### Lecture

Task | Resource Type | Link | Instructions
-----|------|------|------
 Watch  | Lecture | <a href="http://www.youtube.com/embed/uYiVtZHns-A?autoplay=1&rel=0&start=0" target="_blank">Week 4, continued</a> |  We already watched the second half, so you can stop after 25 minutes (but feel free to re-watch if you think it will be beneficial).
 
***

#### Files, Hex

Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#files_headers_and_hex" target="_blank">Week 4, continued / Files, Headers and Hex</a> | These notes reveal how the underlying structure of files, such as JPEG or BMP image files, is just bits. We also get a taste of Hexadecimal counting, another alternative counting system (like binary, but base-16 instead of base-2), which can be very useful for humans trying to examine raw data in contexts such as these image files.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=nrFHGtGdOzA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Hexedecimal</a> | Doug Lloyd explains how hexadecimal works.
Do | Exercise | [Hex Converter](../exercises) | TODO: exc: write a program that converts back and forth from hex
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=QOD2hHiHpn0&index=1&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh" target="_blank">File Pointers</a> | Working with files allows us to make programs that can "save" data permanently, even after they've stopped running. Doug Lloyd shows us some core functions that we can use to work with files: `fopen`, `fclose`, `fgetc`, `fputc`, `fread`, `fwrite`.
Watch | Short | <a href="https://www.youtube.com/watch?v=KwvObCA04dU&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">File I/O</a> | Check this short for some more examples of reading from and writing to files. Functions used: `fopen` `fclose` `fgets` `fputs`.
Do | Exercise | [Good Burger](../exercises/filewrite) | Implement a storefront for the restaurant "Good Burger" by asking the user for their order, then writing it to a file.
Do | Exercise | [Restaurant Menu](../exercises/restaurant-menus) | Implement a menu display for a restaurant by reading their menu from a file.

TODO for files:
* simple `createfile.c` exercise
* simple exercises for `fread` and `fwrite`
* talk about how they are different types of functions
  * `fget` simply returns a thing
  * `fread` is more like `swap`, making a "destructive update"
* talk about the "cursor"
  * fseek
  * ftell
  * exercise idea: "halfway point"?
* tell them they need to refresh in the sidebar to see new files show up
* talk about EOF and feof
  * doesn't quite work as intended, see [this](https://youtu.be/KwvObCA04dU?list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP&t=448)

***

#### Structs

Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Nodes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#structs" target="_blank">Week 4, continued / Structs</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=6RLxPdZ59y0&index=4&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Structs</a> | pointers around 5:00, sizeof, accessing fields with `->` operator
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=wgv4xH_tVgA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=5" target="_blank">Defining Custom Types</a> | typedef
Watch | Short | <a href="https://www.youtube.com/watch?v=EzRwP7NV0LM&index=7&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Structs</a> | prereq `char*`; goes into recursive struct definitions like linked lists, and then talks alot about pointers
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=yMvRqKmbRm4&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=12" target="_blank">structs-0</a> | Follow David as he creates a struct for a "student" object.  <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-2-task-structs-0" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=hZ2Fy-J8DwQ&index=13&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">stucts-1</a> | Keep following David as he creates a program to write student structs to a csv file. You've seen this program before and can find instructions to start the program <a href="../../../../../../helpful-resources/modules/module-4.html#class-2-task-structs-1" target="_blank">here</a>.
Do | Exercise | [Game](../exercises/game) | Help us create a game called "Dungeon Quest" by defining a `struct` to represent the player playing the game.

***

**Review**

Task | Resource Type | Link | Instructions
-----|------|------|------
Study | CS50 Study | <a href="https://study.cs50.net/?toc=io,pointers,malloc" target="_blank">file i/o, pointers, malloc</a> |
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=hgJqcVcYCXU" target="_blank">Week 4</a> |
***
#### Now you're ready for [Class 2](../class2)

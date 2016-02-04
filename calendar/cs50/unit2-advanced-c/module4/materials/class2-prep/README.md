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
 Watch  | Lecture | <a href="https://www.youtube.com/watch?v=uYiVtZHns-A" target="_blank">Week 4, continued</a> |  We already watched the second half, so you can stop after 25 minutes (but feel free to re-watch if you think it will be beneficial).
 
***

#### Files, Hex

Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#files_headers_and_hex" target="_blank">Week 4, continued / Files, Headers and Hex</a> | These notes reveal how the underlying structure of files, such as JPEG or BMP image files, is just bits. We also get a taste of Hexadecimal counting, another alternative counting system (like binary, but base-16 instead of base-2), which can be very useful for humans trying to examine raw data in contexts such as these image files.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=nrFHGtGdOzA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Hexedecimal</a> | Doug Lloyd explains how hexadecimal works.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=QOD2hHiHpn0&index=1&list=PLhQjrBD2T382ZqJSoJqAnX7dXVi5-YaRh" target="_blank">File Pointers</a> | Working with files allows us to make programs that can "save" data permanently, even after they've stopped running. Doug Lloyd shows us some core functions that we can use to work with files: `fopen`, `fclose`, `fgetc`, `fputc`, `fread`, `fwrite`.
Watch | Short | <a href="https://www.youtube.com/watch?v=KwvObCA04dU&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">File I/O</a> | Check this short for some more examples of reading from and writing to files. Functions used: `fopen` `fclose` `fgets` `fputs`.
Study | CS50 Study | <a href="https://study.cs50.net/?toc=io" target="_blank">file i/o</a> | CS50 Study provides an overview here of what you need to know to work with files.
Do | Exercise | [Good Burger](../exercises/filewrite) | Implement a storefront for the restaurant "Good Burger" by asking the user for their order, then writing it to a file.
Do | Exercise | [Restaurant Menu](../exercises/restaurant-menus) | Implement a menu display for a restaurant by reading their menu from a file.
Do | Exercise | [Good Burger - Part 2](../exercises/filewrite-2) | Redo the Good Burger exercises using `fwrite` this time instead of `fputs`
Do | Exercise | [Restaurant Menu - Part 2](../exercises/restaurant-2) | Redo the menu exercise using `fread` instead of `fgets`

***

#### Structs

Task | Resource Type | Link | Instructions
-----|------|------|------
Read | Lecture Nodes | <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#structs" target="_blank">Week 4, continued / Structs</a> | These notes introduce `struct`s, why they are useful, how to create them, and how to access their inner data fields.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=6RLxPdZ59y0&index=4&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq" target="_blank">Structs</a> | Doug talks more about `struct`s, including the shorthand `->` for accessing fields when you have a pointer to a struct.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=wgv4xH_tVgA&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=5" target="_blank">Defining Custom Types</a> | Doug shows us how to use the `typedef` keyword so we can define our structs as actual data types. That way, we don't have to rewrite the word `"struct"` everywhere in our code.
Watch | Short | <a href="https://www.youtube.com/watch?v=EzRwP7NV0LM&index=7&list=PLhQjrBD2T381pcj3Ph49iiDkrhZ9FHpHP" target="_blank">Structs</a> | This short talks more about structs. There is one part where he gets into "linked lists" and recursively defined structs, which you won't really need to worry about until Module 5.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=yMvRqKmbRm4&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg&index=12" target="_blank">structs-0</a> | Follow David as he creates a struct for a "student" object.  <br>You can grab the pseudocode <a href="../../../../../../helpful-resources/modules/module-4.html#class-2-task-structs-0" target="_blank">here</a>.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=hZ2Fy-J8DwQ&index=13&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg" target="_blank">stucts-1</a> | Keep following David as he creates a program to write student structs to a csv file. You've seen this program before and can find instructions to start the program <a href="../../../../../../helpful-resources/modules/module-4.html#class-2-task-structs-1" target="_blank">here</a>.
Do | Exercise | [Game](../exercises/game) | Help us create a game called "Dungeon Quest" by defining a `struct` to represent the player playing the game.

***
#### Now you're ready for [Class 2](../class2)

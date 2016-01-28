# Module 4

##Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

###Class X Studio: Word Grid Stretch
You will only submit 1 file, `wordgridstretch.c`, but there are formatted instructions to create `stretchvertical.c` and `stretchhorizontal.c` to help you to complete the Studio.
```nohighlight
 /**
  * Filename: wordgridstretch.c
  * Save in Folder: ~/workspace/module4/studios/wordgridstretch
  *
  * The word grid is back with a vengence!
  *
  * Just like last week, this studio involves taking some strings from the user, and then printing them back out in a transformed way.
  *
  * Today, your program will apply a "stretch" factor to the grid of letters, making it larger.
  * 
  * It is easiest to explain via example. The finished program should behave like this:
  * 
  * $ ./wordgridstretch goat crab bear
  * Your word grid currently looks like this:
  * goat
  * crab
  * bear
  * Now I will stretch it out. How much should I stretch by?
  * 3
  * After stretching by 3, you now have this!
  * gggoooaaattt
  * gggoooaaattt
  * gggoooaaattt
  * cccrrraaabbb
  * cccrrraaabbb
  * cccrrraaabbb
  * bbbeeeaaarrr
  * bbbeeeaaarrr
  * bbbeeeaaarrr
  * That's what we mean by "making the grid larger".
  * 
  * Validation
  * 
  * Don't forget to validate the user's input. Specifically, you'll want to ensure:
  * 
  *   1. that the user gave you exactly 3 words as command-line arguments
  *   2. that those words are all the same length
  *   3. that the user provides a non-negative stretch factor
  *  
  * Submitting
  * 
  * You don't have to submit stretchvertical.c and stretchhorizontal.c. You only have to submit wordgridstretch.c.
  */
 ```
Break it Down

To get started, we suggest you try two simpler versions first, `stretchvertical.c` and `stretchhorizontal.c`.

A program that just stretches the grid vertically:
```
 /**
  * A program that just stretches the grid vertically:
  * 
  * $ ./stretchvertical goat crab bear
  * Your word grid currently looks like this:
  * goat
  * crab
  * bear
  * Now I will stretch it out vertically. How much should I stretch by?
  * 3
  * After stretching by 3, you now have this!
  * goat
  * goat
  * goat
  * crab
  * crab
  * crab
  * bear
  * bear
  * bear
  *
  */
 ```
A program that just stretches the grid horizontally:
```
 /**
  * $ ./stretchhorizontal goat crab bear
  * Your word grid currently looks like this:
  * goat
  * crab
  * bear
  * Now I will stretch it out horizontally. How much should I stretch by?
  * 3
  * After stretching by 3, you now have this!
  * gggoooaaattt
  * cccrrraaabbb
  * bbbeeeaaarrr
  * Only after writing these little badboys should you start to think about how to combine both steps into one big badderboy.
  * 
  */
```

###Class X Studio: ASCII Art

```nohighlight
 /**
  * Filename: xxx.c
  * Save in Folder: ~/workspace/module4/studios/xxx
  * 
  */

```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused :confused:  about what to do, you can always refer to the video for help.

###Class 1 Task: NoSwap
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```c
 /**
  * Filename: noswap.c
  * Save in Folder: ~/workspace/module4/followalongs/noswap
  * 
  * Include the stdio library
  *
  * Declare a function called noswap with a return-type of void and an argument list consisting of two variables called a and b of type int.
  * Hint: return-type name(argument-list)
  *
  * Add main method
  *
  *    Declare a variable called x and assign the value 1 to it
  *    Declare a variable called y and assign the value 2 to it
  * 
  *    Print "x is %i\n" using x as the value for the placeholder %i
  *    Print "y is %i\n" using y as the value for the placeholder %i
  *    Print "Swapping...\n" 
  *    Call the swap function
  *    Print "Swapped!\n" 
  *    Print "x is %i\n" using x as the value for the placeholder %i
  *    Print "y is %i\n" using y as the value for the placeholder %i
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```
###Class 1 Task: Compare-0

Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```c
 /**
  * Filename: compare-0.c
  * Save in Folder: ~/workspace/module4/followalongs/compare
  * 
  * Include the cs50 library
  * Include the stdio library
  *
  * Add main method
  *    Print "Say something: " 
  *    Declare a variable called s of type string and assign the user input to it
  *    Hint: Use the function GetString() from the cs50 library.
  * 
  *    Print "Say something: " 
  *    Declare a variable called t of type string and assign the user input to it   
  *
  *    If (s == t)
  *        Print "You typed the same thing!\n"
  *    Else
  *        Print "You typed different things!\n"
  *
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```
### Class 1 Task: Compare-1
This is a continuation of Compare-0, please follow the instructions below.  You will use terminal commands to copy the `compare-0.c` file.  Make sure you are in the `module4/followalongs/compare` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.html" target="_blank">Terminal Commands</a>.
```c
 /**
  * This is a continuation of the last program and you should copy compare-0.c file so you do not have to 
  * write the whole program. Use the command below, open up compare-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module4/followalongs/compare
  *
  *      cp compare-0.c compare-1.c
  *
  */
```

### Class 1 Task: Pointers
<a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a> refresher. Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```c
 /**
  * Filename: pointers.c
  * Save in Folder: ~/workspace/module4/followalongs/pointers
  * 
  * Include the cs50 library
  * Include the stdio library
  * Include the string library
  *
  * Add main method
  *
  *    Declare a pointer called s of type char and assign the user input to it
  *    Hint: <type>* <variable name> = GetString();
  *    If (s == NULL)
  *        return 1;
  *
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```
### Class 1 Task: Sizeof

```c
 /**
  * Filename: sizeof.c
  * Save in Folder: ~/workspace/module4/followalongs/sizeof
  * 
  * Include the stdio library
  *
  * Add main method
  *
  *    Declare a variable called c of type char 
  *    Declare a variable called d of type double 
  *    Declare a variable called f of type float 
  *    Declare a variable called i of type int 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

###Class 1 Task: Copy-0

Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```c
 /**
  * Filename: copy-0.c
  * Save in Folder: ~/workspace/module4/followalongs/copy
  * 
  * Include the cs50 library
  * Include the stdio library
  * Include the ctype library
  * Include the string library
  *
  * Add main method
  *    Print "Say something: " 
  *    Declare a variable called s of type string and assign the user input to it
  *    Hint: Use the function GetString() from the cs50 library.
  *
  *    If (s == NULL)
  *        return 1
  *
  *    Declare a variable called t of type string and assign the variable s to it
  *
  *    Print "Capitalizing copy...\n"
  *
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```
### Class 1 Task: Copy-1
This is a continuation of Copy-0, please follow the instructions below.  You will use terminal commands to copy the `copy-0.c` file.  Make sure you are in the `module4/followalongs/copy` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.html" target="_blank">Terminal Commands</a>.
```c
 /**
  * This is a continuation of the last program and you should copy copy-0.c file so you do not have to 
  * write the whole program. Use the command below, open up copy-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module4/followalongs/copy
  *
  *      cp copy-0.c copy-1.c
  *
  */
```

### Class 2 Task: Structs-0
You can find a structs refresher <a href="http://cdn.cs50.net/2015/fall/lectures/4/w/notes4w/notes4w.html#structs" target="_blank">here.</a><br>For this FollowAlong there will be 2 files that are created, `structs.h` and `structs-0.c`.  You will create both files in the same folder `~/workspace/module4/followalongs/structs`. You will use the `structs.h` file for all of the structs follow alongs and will not have to copy it since it will be in the same folder as the rest of the follow alongs.  
```c
/**
  * Filename: structs.h
  * Save in Folder: ~/workspace/module4/followalongs/structs
  * 
  * Include the cs50 library
  *
  * define a type for a student
  * Hint: typedef struct
  *    Declare a variable called name of type string
  *    Declare a variable called house of type string
  * Name this datatype student
  * Hint: <datatype>;
  */
```
```c
 /**
  * Filename: structs-0.c
  * Save in Folder: ~/workspace/module4/followalongs/structs
  * 
  * Include the stdio library
  * Include the cs50 library
  * Include the string library
  *
  * Include the "structs.h" library 
  * Remember: To include a header file from the current directory the library name must be enclosed in double quotes.
  *
  * Define a constant named STUDENTS with a value of 3
  * Hint: #define <NAME> value
  *
  * Add main method
  *   Declare an array called students of type student and specify the size as 3 using the constant STUDENTS. 
  *   (Remember: STUDENTS value is 3)
  *   Hint: <type> <arrayname>[<SIZE>];
  *
  *   For( i=0; i < STUDENTS; i++ )
  *       print "Student's name: "
  *       
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 2 Task: Structs-1
This is a continuation of Structs-0, please follow the instructions below.  You will use terminal commands to copy the `structs-0.c` file.  Make sure you are in the `module4/followalongs/structs` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.html" target="_blank">Terminal Commands</a>.
```c
 /**
  * This is a continuation of the last program and you should copy structs-0.c so you do not have to 
  * write the whole program. Use the command below, open up structs-1.c and watch the video
  * to complete the task. 
  * Make sure you are in this Folder: ~/workspace/module4/followalongs/structs
  * 
  *      cp structs-0.c structs-1.c
  *
  */
```


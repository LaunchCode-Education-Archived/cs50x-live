#Module 5

##Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

###Class 1 Studio: Secret Santa 

```
/**
 * Filename: secret-santa.c
 * Save in Folder: ~/workspace/module5/studios/secret-santa
 * Part 1
 * Write a program that simulates some adorable people giving each other gifts, Secret-Santa style: 
 * each person gives a gift to someone, and receives a gift from someone else.
 * 
 * Example:
 * ./secret-santa
 * Name of person (q to stop): David Malan
 * Name of person (q to stop): Andi Peng
 * Name of person (q to stop): Doug Lloyd
 * Name of person (q to stop): q
 * What gift does David Malan give? a kazoo
 * What gift does Andi Peng give? a linkedIn connection
 * What gift does Doug Lloyd give? homemade pesto
 * Twas the night before the day ...
 * ... in the morning everyone rushed downtairs to rip open their boxes:
 * Andi Peng received a kazoo! Thanks Santa!
 * Doug Lloyd received a linkedIn connection! Thanks Santa!
 * David Malan received homemade pesto! Thanks Santa!
 * 
 * Use a linked-list of typedef struct person, which contains three fields:
 * 
 * char* name
 * char* gift
 * struct person* receipient
 * 
 * Part 2: Not-so-secret Santa
 * 
 * Let's out those santas. Turn your singly-linked list into a doubly-linked list so that 
 * each node in your list contains a pointer back to the previous node, i.e. the giver fo the gift. 
 * 
 * Then your program can run like so.
 * 
 * Example:
 * ./secret-santa
 * Name of person (q to stop): David Malan
 * Name of person (q to stop): Andi Peng
 * Name of person (q to stop): Doug Lloyd
 * Name of person (q to stop): q
 * What gift does David Malan give? a kazoo
 * What gift does Andi Peng give? a linkedIn connection
 * What gift does Doug Lloyd give? homemade pesto
 * Twas the night before the day ...
 * ... in the morning everyone rushed downtairs to rip open their boxes:
 * Andi Peng received a kazoo! Thanks David Malan!
 * Doug Lloyd received a linkedIn connection! Thanks Andi Peng!
 * David Malan received homemade pesto! Thanks Doug LLoyd!
 * 
 */
```
###Class 2 Studio: Hash-Table

```

```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused :confused:  about what to do, you can always refer to the video for help.

###Class 1 Task: Scanf-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">here</a> for a reminder on "scanning" user input. 
```
 /**
  * Filename: scanf-0.c
  * Save in Folder: ~/workspace/module5/followalongs/scanf
  * 
  * Include the stdio library
  *
  * Add main method
  *    Declare a variable called x 
  *    Print "Number please: " 
  *    Scan the user input using "&x" as the value for the placeholder %i
  *    Print "Thanks for the %i!\n" 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```
  
### Class 1 Task: Scanf-1
This is task is very similar to scanf-0, please follow the instructions below. <a href="https://www.youtube.com/watch?v=yOdd3uYC--A&list=PLhQjrBD2T383tGruv374_Yee84qbXeJjq&index=2" target="_blank">Pointers</a> refresher. Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library" target="_blank">here</a> for a reminder on "scanning" user input. 
```
  * Filename: scanf-1.c
  * Save in Folder: ~/workspace/module5/followalongs/scanf
  * 
  * Include the stdio library
  *
  * Add main method
  *    Declare a pointer called buffer of type char 
  *    Print "String please: " 
  *    Scan the user input using "buffer" as the value for the placeholder %s
  *    Print "Thanks for the %s!\n" 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: Scanf-2
This is a continuation of scanf-0, please follow the instructions below.  You will use terminal commands to copy the `scanf-1.c` file.  Make sure you are in the `module5/followalongs/scanf` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy scanf-1.c file so you do not have to 
  * write the whole program. Use the command below, open up scanf-2.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module5/followalongs/scanf
  *
  *      cp scanf-1.c scanf-2.c
  *
  */
```




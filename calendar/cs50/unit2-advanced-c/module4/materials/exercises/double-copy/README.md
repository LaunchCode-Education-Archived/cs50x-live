##### Module 4

[Back to Class 1 Prep](../../class1-prep#malloc)

# Exercise: Double Copy

Write a program that prompts the user for a `string`, and then then echoes back a "double" copy of the string. For example:

```nohighlight
$ ./doublecopy
Whaddaya say, kid?
hello
hellohello

$ ./doublecopy
Whaddaya say, kid?
i'm learning about pointers and stuff
i'm learning about pointers and stuffi'm learning about pointers and stuff
```

You could easily solve the problem using a line like this:
```c
printf("%s%s\n", inputStr);
```
But! Don't do that. The point of this exercise is to practice using `malloc` to make a string by allocating memory from the heap. So make sure you actually create a chunk of memory that can hold twice the amount as the input string, and then fill that memory, and then print the resulting string.


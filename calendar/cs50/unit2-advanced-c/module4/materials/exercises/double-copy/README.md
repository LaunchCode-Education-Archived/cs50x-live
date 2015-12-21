##### Module 4

[Back to Class 1 Prep](../class1-prep/README.md#malloc)

# Exercise: Double Copy

Write a program that prompts the user for a `string`, and then then echoes back a "double" copy of the string. For example:

```
$ ./doublecopy
Whaddaya say, kid?
hello
hellohello

$ ./doublecopy
Whaddaya say, kid?
i'm learning about pointers and stuff
i'm learning about pointers and stuffi'm learning about pointers and stuff
```

One more thing: you may not use `printf` more than once! This means that you'll need to build a single `string` which contains all the characters, and then print that string. Make sure you `malloc` enough space.

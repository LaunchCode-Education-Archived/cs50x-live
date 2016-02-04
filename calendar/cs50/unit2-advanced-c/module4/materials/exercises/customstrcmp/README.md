##### Module 4
[Back to Prep for Class 1](../../class1-prep#pointers)
# Exercise: Custom strcmp

To practice using pointers, we’ll be implementing our own version of the `strcmp` function.

Write a function that takes in two `string` variables, and returns `true` if, and only if, the two `strings` are exactly the same, character by character.

In your function, make sure you’ve handled the case where the strings don’t have the same length. If they don't, then you immediately know they are not the same without having to check (in fact, if you do try to check, your code will eventually try to access beyond the bounds of the shorter string, which would be bad!)

We've provided [a tiny bit of code](customstrcmp.html) to take in two strings and compare them with a function. For this exercise, fill in the body of the `customstrcmp` function.

Here’s an example of a successful implementation for the exercise:
```nohighlight
$ ./customstrcmp
String 1?: hello
String 2?: world
The strings are not equal!

$ ./customstrcmp
String 1?: hello
String 2?: hello
Bingo! The strings are equal!
```

Just like in the [pointers](https://www.youtube.com/watch?v=1PoFw5_p0xk&index=6&list=PLhQjrBD2T382SQnebs5bf6BkngrHTbJKg) Walkthrough, you could do this using square-bracket notation (e.g. `[]`), treating the `string` as an `array` of `chars`. But don't do that. Instead, use pointer notation, treating the `string` as a `char*`. 

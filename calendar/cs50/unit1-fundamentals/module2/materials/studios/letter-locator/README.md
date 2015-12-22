##### Module 2
[Back to Class 1](../../class1)
# Studio: Letter Locator

In a file called `letterlocator.c` write a program that prompts the user for an alphabetic character,
and then prints the position of that letter in the alphabet, starting with `A` at position `0`. Your program 
should work for both capital and lowercase letters, but should reject any input that is not alphabetical, 
like `'3'` or `'$'`.

```
$ ./letterlocator
Give me a letter: A
A is at position 0
$ ./letterlocator
Give me a letter: e
e is at position 5
$ ./letterlocator
Give me a letter: @
Give me a letter: Y
Y is at position 25
```

You will find the following functions very helpful:
* [GetChar](https://reference.cs50.net/cs50.h/GetChar)
* [isAlpha](https://reference.cs50.net/ctype.h/isalpha)

*You can grab a copy of these instructions from the CS50x Wiki <a href="https://github.com/Launch-Code/cs50x-live-2016/wiki/Module-2#class-1-studio-letter-locator" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.

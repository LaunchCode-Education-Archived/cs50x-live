# Exercise: Letter Locator

Write a program that prompts the user for an alphabetic character,
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

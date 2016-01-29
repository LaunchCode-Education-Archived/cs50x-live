##### Module 2
[Back to Class 1](../../class1)
# Studio: Letter Locator

In a file called `letterlocator.c` write a program that prompts the user for an alphabetic character,
and then prints the position of that letter in the alphabet, starting with `A` at position `0`. Your program 
should work for both capital and lowercase letters, but should reject any input that is not alphabetical, 
like `'3'` or `'$'`.

```nohighlight
$ ./letterlocator
Give me a letter: A
A is at position 0
$ ./letterlocator
Give me a letter: e
e is at position 4
$ ./letterlocator
Give me a letter: @
Give me a letter: Y
Y is at position 24
```

You will find the following functions very helpful:
* <a href="https://reference.cs50.net/cs50.h/GetChar" target="_blank">GetChar</a>
* <a href="https://reference.cs50.net/ctype.h/isalpha" target="_blank">isAlpha</a>

### Part 2 (Optional)

Refactor your code so that most of the work is done by a separate function, called `alphaPos`, which recieves a `char` as input and returns an `int` representing the alphabet position of that character.

Your main funcntion should now look like this:

```c

int main(void)
{
    // prompt the user for a character, and validate to make sure it is alphabetical
    // ...
    // ...
    
  
    // assuming you have a char called c...
    int answer = alphaPos(c);
    printf("%c is at position %i", c, answer);
}
```


*You can grab a copy of these instructions from the Helpful Resources <a href="../../../../../../../helpful-resources/modules/module-2.html#class-1-studio-letter-locator" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.

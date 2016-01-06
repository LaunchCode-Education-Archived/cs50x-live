##### Module 7
[Back to Prep for Class 1](../../class1-prep)
# Exercise: Lotto Numbers

We just learned about “foreach” loops, which are a feature of PHP, but not C.  In PHP we can use the keyword `foreach` to declare two kinds of loops:

1. This kind of loop:
    ```php
    foreach ($things as $thing) {
        // do stuff with $thing
    }
    ```
    
    lets us loop through an array without having to use an indexing variable to explicitly index into the array. This is a nicer syntax for those (very frequent) times when you don't care about the index, you just want to do something which each of the actual "things" or "values" inside the array.

2. This kind of loop:

    ```php
    foreach ($things as $key => $thing)
    {
        // do stuff with $key and $thing
    }
    ```
    
    lets us loop through an “associative array”, looking at each paired key and value together. 

In [lottonumbers.php](./lottonumbers.php), we’ve provided some php code for you that declares a list of lottery numbers (in the variable `$lottoNumbers`), and an associative array (the variable `$drawnNumbers`).  Each key in the associative array is the name of a lotto ticket buyer, and each corresponding value is the lotto number they drew.

Add some code to this file, using the two versions of `foreach` syntax in order to:
- print each of the lotto numbers
- print each lotto participant, along with their number

When complete, the program should behave like this:
```
$ php lottonumbers.php
Tonight's numbers: 123, 555, 23, 7129
...
Participant's drawn numbers:
Sally: 23
Ken: 3
Jeremy: 8
Rhonda: 7129
```

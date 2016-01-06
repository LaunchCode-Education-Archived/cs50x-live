##### Module 7
[Back to Prep for Class 1](../../class1-prep)
# Exercise: Lotto winners

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

In this file, use the two versions of `foreach` syntax to write code that:
- prints each of the lotto numbers
- prints each lotto participant, along with their number

An example run of the completed code should look like this:
```
$ php lottonumbers.php
Tonight's numbers:
...
Participant's drawn numbers:
name1: number1
name2: number2
name3: number3
```

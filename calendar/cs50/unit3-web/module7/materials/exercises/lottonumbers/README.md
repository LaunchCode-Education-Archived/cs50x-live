##### Module 7
[Back to Prep for Class 1](../../class1-prep)
# Exercise: Lotto winners

We just learned about “foreach” loops, which are in php, but not in C.  We can use the keyword “foreach” to declare two kinds of loops:

This kind of loop:
```
foreach ($numbers as $number) {
    // do this with $number
}
```

lets us loop through an array without having to use an indexing variable to explicitly index into the array.

This kind of loop:

```
foreach ($things as $key => $value)
{
    // do stuff with $key and $value
}
```

lets us loop through an “associative array”, looking at each paired key and value together.

In [lottonumbers.php](./lottonumbers.php), we’ve provided some php code for you that declares a list of lottery numbers (in the variable `$lottoNumbers`), and an associative array (the variable `$drawnNumbers`).  Each key in the associative array is the name of a lotto ticket buyer, and each corresponding value is the lotto number they drew.

Use these two loops to make the code:
- print each of the lotto numbers
- print each lotto participant, along with their number

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

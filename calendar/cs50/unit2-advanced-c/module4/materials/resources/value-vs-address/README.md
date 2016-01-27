##### Module 4

[Back to Class 1 Prep](../class1-prep)

# Resource: Value vs Address

Let's take a minute now to summarize a few of the problems that CS50 has presented to us:

1. The `swap` function is not actually swapping the variables that we give it.
2. When we try to compare two strings, our boolean expression

  ```c
  str1 == str2
  ```
  evaluates to `false`, even when the strings really are identical (they have the same characters in the same order).
  
Both of these bugs are the result of a mix-up between the **value** of a variable and its **address**:

1. With `swap`, we ought to be passing the addresses of our variables into the function, but in fact we are mistakenly passing their values.
2. When comparing the two strings, we have the opposite problem. We ought to be comparing the values of the strings, but in fact we are mistakenly comparing their addresses.


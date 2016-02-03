##### Module 4
[Back to Class 1 Prep](../../class1-prep#pointers)

# Resource: Annoying Syntax

Pointers in c have a reputation as being very difficult to learn. But a large part of the difficulty is due to their wacky syntax. 

Here, we attempt to explicitly point out the wackiness, so that hopefully it does not trip you up as much as it might otherwise.

There are two aspects of the syntax that are confusing:

1. The fact that the asterisk `*` symbol has two different (somewhat opposite) meanings, depending on context.
2. The existence of a common convention wherein people often put a space before the asterisk when declaring a pointer type.

Let's look at both of these in more detail.

### Two Different Asterisks

The `*` character is used to do two different things:

1. To specify a pointer type.
  ```c
  float* x;
  ```
  Above, we declare a variable called `x` whose type is `float*`, or, in other words, "pointer to a float". This means that the value of `x` is simply an address, a number representing the location in memory where a `float` is stored.
  Similarly, we can declare other pointer types in the same way:
  * `char*` declares a pointer to a `char`
  * `int*` declares a pointer to an `int`

2. To "dereference" a pointer.

  In the above example, `x` is does not contain the actual `float` value. That value might be `99.9`, for example, but `x` is simply a "reference" to that `99.9`; `x` is a different number representing **where** the `99.9` value is stored.
  
  Ok, but what if we have a variable like `x` and we want to do stuff with the "actual" value, the `99.9`? This is where "dereferencing" is used. A dereferenced pointer means simply "the actual value at that location". 
  
  The syntax for dereferencing a pointer is, of course, the same stupid `*` symbol. So in this scenario where we have `x`, whose value is some big number representing a memory address, we can say `*x`, and **this** will be equal to `99.9`.

  | Use Case | Situation | Syntax | Example |
  |----------|------|----------------|:------------------:|
  | (A) Declaring a pointer | when first creating a variable | The `*` symbol comes after the data type. | `float* x` |
  | (B) Dereferencing a pointer | when you already have a variable, whose type is "pointer to a something", and you want to get the actual value that is being pointed to | The `*` symbol comes before the name of the variable | `float actualValue = *x` |
  
### Space Convention

Hopefully the above is now somewhat understandable. Unfortunately, there is one more complication that makes it extra tricky.

Let's go back again to our running example,
```c
float* x;
```
This is scenario (A) from above: we are declaring a variable called `x` whose type is `float*`.

Here's the twist: You will very often see the above written slightly differently:
```
float *x;
```
This means the exact same thing. We are still creating a variable whose type is a pointer to a float. The type is written `float *` instead of `float*`, but the compiler doesn't care about the spacing. 

But this can be incredibly confusing because syntactically, it *looks* just like scenario (B): we have the `*` symbol directly before the name of our variable.

Due to context, the compiler still understands that we are in scenario (A) here. And we humans too, unfortunately, are going to have to rely on context to understand. We cannot use a rule of thumb like "if the asterisk comes directly before the variable name, we are definitely in scenario (B)"

There is actually a quasi-reasonable reason why seasoned C programmers follow this convention, but we won't bore / overload you with it here.

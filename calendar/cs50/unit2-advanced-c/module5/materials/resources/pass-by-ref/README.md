##### Module 5

[Back to Class 1 Prep](../class1-prep)

# Resource: Pass by Reference

Recall from Module 4 that functions generally receive copies of whatever values you pass in. This is called "passing by value", and is the reason why the `swap` function failed to actually swap anything. To fix `swap`, we had to pass the two variables "by refrence" instead:

```c
void swap(int* x, int* y);
```

The above signature indicates that `swap` receives the *addresses* of two `int`s: `x` is the address where an `int` is stored, and so is `y`. The body of the function then goes and does the work of swapping the "real" values by re-writing the memory at those addresses.

This is a very common pattern: a function that receives a pointer to some value, and then goes to that spot in memory and updates the value there.

In this resource, we present 3 more examples of "pass by reference" functions, just to get you comfortable with the idea.


### 1. Cut in Half
  
  First, we have a program that simply divides a number by 2:
  
  ```nohighlight
  $ ./cutinhalf 46.5
  I halved the number you gave me
  It is now 23.250000
  ```
  
  Check out the source for [cutinhalf.c](./cutinhalf.html). Notice how there is a function called `cutInHalf`, whose signature is:
  
  ```c
  void cutInHalf(float* n);
  ```
  
  In `main`, we call this function like so:
  
  ```c
  cutInHalf(&n);
  ```
  by passing the address of `n`, our `float` variable. And after making that call, `n` has been "magically" updated to half of whatever it was.
  
  This is a contrived example. You would probably never actually implement this program with a pass-by-ref function (or any function at all!). But hopefully the simplicity here makes it easy to see how the mechanics of function work.

### 2. Vowel Caps

  The next example is a program that capitalizes vowels in a string:
  
  ```nohighlight
  ./vowelcaps "I like doin stuff"                                                             
  I took the liberty of capitalizing all your vowels...
  I lIkE dOIn stUff
  ```
  
  Check out the source for [vowelcaps.c](./vowelcaps.html). Pretty similar to `cutinhalf.c`. In this case the function looks like this:
  
  ```c
  void capitalizeVowels(char* str);
  ```
  
  and in `main`, we call the `capitalizeVowels` function like this:
  
  ```c
  capitalizeVowels(str);
  ```
  
  Question: Recall that in the previous example, we used the address-of `&` operator. How come we didn't have to do that in the function call, like this:
  
  ```c
  capitalizeVowels(&str);
  ```
  
  Answer: Because in this case `str` is *already* an address. The type of `str` is `char*`, i.e. pointer-to-a-`char`. So by default we are already passing a referene to the data that needs to be overwritten. If we tried to pass `&str`, that would actually be a `char**`: a pointer to a pointer to a char!
  
# 3. Late grade

In this example, we pass a reference to a `struct` into our function. The program has a `struct` representing a student's grade on a homework assignment. The hard-coded situation is that a student named Suzie turned in her assignment late, so we want to retroactively change her grade to deduct points from her score.

```c
$ ./lategrade 
Suzie got a score of 94 on the assignment. But you say she turned it in late?
How many days late did Suzie submit her work?
4
Suzie's PERMANENT RECORD has been updated to reflect the late submission.
Her new score for the assignment is 82
```





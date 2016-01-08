##### Module 2
[Back to Prep for Class 2](../../class2-prep#command-line-arguments)

# Exercise: atoi

One tricky thing about command-line arguments is that our program always receives the arguments as `string`s. Even a program like this:

```
$ pidigits 2016
The 2016th digit of Pi is: 9
```

still receives that `2016` as a string: `"2016"`. Sure, it happens to be text in which every character is numeric. But as far as the compiler is concerned, a string like `"2016"` is no different from any other string like `"puppies"` or `"Biased Pluralism"`. 

But that's no good. We want to be able to treat that number as an actual number, like an `int`, so we can do numbery things with it, like decide how many digits of Pi to calculate.

So how can we recover an integer that is "trapped inside" a string? The `atoi` function does just that.

`atoi` takes a `string` like `"67"` as input, and (attempts to) return the integer value trapped inside that string. For example:
* `atoi("67")` is `67`
* `atoi("123")` is `123`
* `atoi("puppies")` is `0`
* `atoi("puppies123")` is `0`

Notice that you must provide a string that is totally unamiguously an integer, otherwise you get back `0` as a "sentinal value" representing "Hey I dont know how to interpret this string you gave me."

In [atoi.c](./atoi.c), we have attempted to write a program that

It should behave like this:

```
$ ./atoi
Please enter a number: 67
The next number is 68
```


Fix the code below:

```c
#include<cs50.h>
#include<stdio.h>

int main ()
{
	string input = GetString("Please enter a number:");
	
	printf ("The next number is %i\n", input + 1);
}
```

##### Module 2
[Back to Prep for Class 2](../../class2-prep#command-line-arguments)

# Exercise: atoi

One tricky thing about command-line arguments is that our program always receives the arguments as `string`s. Even a program like this:

```
$ pidigits 2016
The 2016th digit of Pi is: 9
```

still receives that `2016` as a string: `"2016"`. Sure, it happens to be text in which every character is numeric. But as far as the compiler is concerned, as string like `"2016"` is no different from any other string like `"puppies"` or `"  ##\n ###\n####"`.

`atoi` takes a `string` like `"67"` as input, and tries to return the integer value "trapped insde" that string. For example:
* `atoi("67")` is 67
* `atoi("123")` is 123

I say *tries* because

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

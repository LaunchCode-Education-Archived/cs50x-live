##### Module 2
[Back to Prep for Class 2](../../class2-prep)

TODO make resource explaining motivation and giving examples. Then provide this exercise with broken example code. 

# Exercise: atoi

In this exercise, you will use the standard library's `atoi` function to print an integer passed in as a string. 

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

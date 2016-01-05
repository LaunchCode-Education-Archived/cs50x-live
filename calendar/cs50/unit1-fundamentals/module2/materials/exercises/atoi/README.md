##### Module 2
[Back to Prep for Class 2](../../class2-prep)

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
	int i;
	string input;

	input = GetString("Please enter a number:");
	
	printf ("The value entered is %d.", input);

	return 0;
}
```

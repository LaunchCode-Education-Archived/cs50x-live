##### Module 2
[Back to Prep for Class 2](../../class2-prep)

# Exercise: atoi

In this exercise, you will use the standard library's atoi() to print an integer passed in as a string. 

Ex:
```
$ ./atoi
Please enter a number:
The value entered is 67
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

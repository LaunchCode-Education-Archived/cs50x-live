##### Module 2
[Back to Prep for Class 1](../../class1-prep)
# Resource: Variable Scope

Let’s look at another example of a bug due to variable scope.
As we just learned, a variable’s “scope” refers to contexts in which a variable can be accessed.  If we compiled and ran the following code:
```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int i;
  int maxNum = GetInt();

  while(i <= 10)
  {
    int i = 1;
    printf(“%i! Ah, ah, ah, ah!\n”, );
    i++;
  }
}
```

We would see that the function would loop forever! 
This is because we accidentally redeclared our looping variable, `i`, inside of our loop.  Inside the loop, our program decides to use the “int i” that we just declared instead of the one we declared before, due to scope.

How can we fix this?  Here is some fixed code:
```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int i;
  int maxNum = GetInt();

  i = 1;
  while(i <= 10)
  {
    printf(“%i! Ah, ah, ah, ah!\n”, );
    i++;
  }
}
```

In the new code, we made sure to initialize our looping variable outside of the loop.  By not declaring a new variable, we didn’t block access to our original `int i`; we didn’t change the scope of the variable `i`.

This example is a little contrived, but it is not uncommon for programs to have unintentional infinite loops because of little mistakes like these, where we accidentally lose access to a variable that we care about because of scope.

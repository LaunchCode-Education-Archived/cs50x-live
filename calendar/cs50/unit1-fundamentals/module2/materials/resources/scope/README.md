##### Module 2
[Back to Prep for Class 1](../../class1-prep#scope)
# Resource: Variable Scope

Let’s look at another example of a bug due to variable scope. As we just learned, a variable’s “scope” refers to contexts in which a variable can be accessed.  

Below we have a program that asks the user for a string, and then reports the location of the first uppercase letter in that string. Take a look:

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("Please give me a string that contains at least one uppercase letter\n");
  string str = GetString();
  int maxn = strlen(str);

  for(int i = 0; i < maxn; i++)
  {
      if( isUpper(str[i]) ) {
          break; // break out of the for-loop
      }
  }
  printf("I have discovered the first capital letter!  It's at index %i\n", i);
}
```

(Quick note: This may be the first time you have seen the `break` keyword. Essentially it just causes the program execution to exit the `for loop` immediately. In this case, we have found the first capital letter, so we don't need to continue looping over the string. Using `break` here causes execution to skip down right away to the next line, `printf("I have discovered ...`)

The above code fails to compile.  Why is this?

After the loop, we try to print out the variable `i` as the index where we found a capital letter.  However, at that point in the code, we no longer have access to the variable `i`; because we’ve left the loop, it is no longer in our current “scope”. Variables declared within a loop cannot be accessed outside of that loop.

How can we fix this?  Well, we need to make sure that the variable `i` is in scope when we try to print it out.  To do this, we can move the `printf` line inside the loop, like so:

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("Please give me a string that contains at least one uppercase letter\n");
  string str = GetString();
  int maxn = strlen(str);

  for(int i = 0; i < maxn; i++)
  {
      if( isUpper(str[i]) ) {
          printf("I have discovered the first capital letter!  It's at index %i\n", i);
          break; // break out of the for-loop
      }
  }
}
```

This should compile correctly.  There are many ways to fix this program, but all of them must fix the fundamental problem with the original: when we wanted to access the variable `i`, it was not in scope.

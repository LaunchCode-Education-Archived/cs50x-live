##### Module 2
[Back to Prep for Class 1](../../class1-prep)
# Resource: Variable Scope

Let’s look at another example of a bug due to variable scope. As we just learned, a variable’s “scope” refers to contexts in which a variable can be accessed.  Take a look at the following code:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string hasAnE = GetString();
  int maxn = strlen(hasAnE);

  for(int i = 0; i < maxn; i++)
  {
      if(hasAnE[i] == 'e'){
          break;
      }
  }
  printf("Found the first 'e'!  It's at index %i\n", i);
}
```

The code attempts to ask the user for a string, then print out the index of the first ‘e’ in their input. However, this code fails to compile.  Why is this?
After the loop, we try to print out the variable `i` as the index where we found an ‘e’.  However, at that point in the code, we no longer have access to the variable `i`; because we’ve left the loop, it is no longer in our current “scope”.  Variables declared within a loop cannot be accessed outside of that loop.

How can we fix this?  Well, we need to make sure that the variable `i` is in scope when we try to print it out.  To do this, we can move the `printf` line inside the loop, like so:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string hasAnE = GetString();
  int maxn = strlen(hasAnE);

  for(int i = 0; i < maxn; i++)
  {
      if(hasAnE[i] == 'e'){
          printf("Found the first 'e'!  It's at index %i\n", i);
          break;
      }
  }
}
```

This should compile correctly.  There are many ways to fix this program, but all of them must fix the fundamental problem with the original: when we wanted to access the variable `i`, it was not in scope.

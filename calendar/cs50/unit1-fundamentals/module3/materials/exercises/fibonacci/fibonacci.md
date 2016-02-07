```c
#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(int argc, char* argv[])
{
  // validate
  if (argc != 2) 
  {
    printf("usage: ./fibonacci n\n");
    return 1; // return a non-zero number to indicate an error
  }
  
  // get the command-line arg
  char* argument = argv[1];
  int n = atoi(argument);
  
  // compute answer and then print it
  int answer = fib(n);
  printf("%i\n", answer);

  // all's well
  return 0;
}

/**
 * returns the nth term in the Fibonacci Sequence
 */
int fib(int n) 
{
  // TODO
  return 0;
}
```

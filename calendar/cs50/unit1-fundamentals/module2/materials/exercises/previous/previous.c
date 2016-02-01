#include<cs50.h>
#include<stdio.h>

int main ()
{

  // validation: make sure they provided a CL argument
  if (argc < 2) 
  {
    // if they didn't provide one, yell at them and then quit
    
    // a "usage" statement explains what they should have typed
    printf("usage: previous n (the number whose predecessor you want)\n");

    // quit the program. Why? Because if we continue, then line 20 below is
    // going to try to access memory beyond the bounds of the argv array
    return 1;
  }
  
  string input = argv[1];
  printf ("The previous number is %i\n", input - 1);
  
  return 0;
}

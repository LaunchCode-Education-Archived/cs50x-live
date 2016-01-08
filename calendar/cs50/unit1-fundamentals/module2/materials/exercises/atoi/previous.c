#include<cs50.h>
#include<stdio.h>

int main ()
{

  // validation: make sure they provided a CL argument
  if (argc < 1) 
  {
    printf("Please provide one integer.\n");
    printf("usage: previous n\n");
    return 1;
  }
  
  string input = argv[0];
  printf ("The previous number is %i\n", input - 1);
  
  return 0;
}

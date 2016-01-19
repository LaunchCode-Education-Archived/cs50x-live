#include<cs50.h>
#include<stdio.h>

int main (int argc, string argv[])
{

  // validation: make sure they provided a CL argument
  if (argc < 2) 
  {
    printf("Please provide one integer.\n");
    printf("usage: previous n\n");
    return 1;
  }
  
  string input = argv[1];
  printf ("The previous number is %i\n", atoi(input) - 1);
  
  return 0;
}
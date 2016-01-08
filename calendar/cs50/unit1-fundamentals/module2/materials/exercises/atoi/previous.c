#include<cs50.h>
#include<stdio.h>

int main ()
{

  if (argc != 1) 
  {
    printf("Please provide one integer.\n");
    printf("usage: previous n\n");
  }
  
	string input = argv[0];
	
	printf ("The previous number is %i\n", input - 1);
}

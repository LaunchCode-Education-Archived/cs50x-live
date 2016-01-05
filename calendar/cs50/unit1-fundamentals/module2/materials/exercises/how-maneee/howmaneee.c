/**
 * howmaneee.c
 * Calculates the number of occurances of the character 'e' found within the user's input 
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// FIXME there's something wrong with this code. It's not working!
int main(void)
{
  printf("Type some stuff: ");
  string userinput = GetString();
  
  // count the occurrances of the letter 'e'
  int len = strlen(userinput);
  for (int i = 0; i < len; i++)
  {
    int counter = 0;
    if (userinput[i] == 'e')
    {
      counter++;
    }
  }
  
  printf("The thing you just typed contains %i 'e's!", counter);
}

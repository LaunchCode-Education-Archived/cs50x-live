/**
* Says if a number is divisible by 7
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("Give me a number:"); // asks user for a number
  int num = GetInt();
  
  if (num % 7 == 0) // uses modulo operator to see if number is divisible by 7
  {
    printf("That number is divisible by 7, friend!\n"); // if divisible by 7, tells user
  }
  else
  {
    printf("That number is not divisible by 7, chief!\n"); // if not divisible by 7, tells user
  }
}

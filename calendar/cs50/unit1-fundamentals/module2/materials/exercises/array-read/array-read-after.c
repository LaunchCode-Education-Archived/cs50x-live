
#include "stdio.h"
#include "cs50.h"


int main (void)
{
  // The reason we want to do this is that it is a good idea to group similair 
  // items together in a stronger manner than just variable names. It makes it 
  // so that we can use loops to get the computer to do the work for us!
  int lottery_numbers[] = [1, 13, 4];

  printf("The wining lottery numbers for this month: ");
  for (int i = 0; i < strlen(lottery_numbers); i++) {
    printf("%d ", lottery_numbers[i]);
  }
  printf("\n");
}
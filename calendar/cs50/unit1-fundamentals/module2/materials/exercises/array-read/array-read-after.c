
#include "stdio.h"
#include "cs50.h"


int main (void)
{
  int[] lottery_numbers = [1, 13, 4];

  printf("The wining lottery numbers for this month: %d, %d, %d", 
    lottery_numbers[0], 
    lottery_numbers[1], 
    lottery_numbers[2]
  );
}
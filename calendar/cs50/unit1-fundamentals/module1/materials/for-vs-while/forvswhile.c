#include <stdio.h>

// This example provides a side-by-side comparison of a while-loop and a for-loop.

// for-loops simply provide a different syntax for accomplishing the same thing as while-loops.
// In fact, they are both composed of the same 4 basic components:
//    INITIALIZE, CONDITION, BODY, MODIFY

int main(void)
{
  
  // WHILE LOOP -----------------------------------------
  
  // INITIALIZE initialize some variable(s)
  int i = 0;
  
  // CONDITION: should we enter the loop (again)?
  while(i < 10)
  {
    // BODY: do stuff
    printf("A warm hello to the number %i\n", i);
    
    // MODIFY: modify variable(s)
    i++;
  }
  
  
  // FOR LOOP -------------------------------------------
  
  //  (INITIALIZE ; CONDITION ; MODIFY)
  for (int i = 0  ; i < 10    ; i++   )
  {
    // BODY
    printf("A warm hello to the number %i\n", i);
  }
  
}

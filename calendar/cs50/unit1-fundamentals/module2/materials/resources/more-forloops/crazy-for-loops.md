```c
#include "stdio.h"
#include <time.h>
#include <stdlib.h>
//#include "cs50.h"


int main (void)
{
  // Any or all of the for loop arguments can actually be left empty
  for (;;) {
    // This is essentially an infinite loop, so we need to break out of it
    break;
  }

  // The first part is executed before the first time the for loop happens
  for (printf("hello world\n");;) {
    //also an infinite loop, so break out of it
    break;
  }

  // The second part is the condition when the loop will end which is checked at the begining of each loop. 
  // In this case we are going to be clever and have the loop exit when random does not return 1
  for (; rand() == 1;){
    // but since we don't want to wait around for that to happen, we also break
    break;
  }

  // The final part is what happens after each loop. The below for loop should look farmiliar.
  // The only difference is that we have `i = i + 1` instead of `i++` which is more commonly seen.
  for (int i = 0; i < 10; i = i + 1) {
    // This will happen 10 times
    printf("Hello world\n");
  }

  //But just like the other parts of the for loop, you can do some fun stuff in this last of 3 parts.
  for (int i = 0; i < 10; i = (i + 2) % 10){ 
    // This will print out even numbers from 0-10 forever!!!!
    printf("%d\n", i);
    // But since we don't have forever, also break
    break;
  }

  // So the thing to take away, is that the for-loop is actually composed of 3 parts.
  // 1. Happens before the first loop
  // 2. Happens at the begining of each loop
  // 3. Happens at the end of each loop
}
```
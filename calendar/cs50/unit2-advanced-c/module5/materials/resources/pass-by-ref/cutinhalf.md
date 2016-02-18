```c

/**
 * cutinhalf.c
 * 
 */

#include <stdio.h>
#include <cs50.h>


void cutInHalf(float* n);

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("usage: ./cutinhalf number\n");
        return 1;
    }
    
    float n = atof(argv[1]);
    
    cutInHalf(&n);
    
    printf("I halved the number you gave me\n");
    printf("It is now %f\n", n);
}

void cutInHalf(float* n)
{
    *n = *n / 2;
}

```

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*
 * Returns the number of characters in a string, i.e. the length of the string
 */
int charCounter(string theString);

int main(void)
{
    printf("Please enter a string :  \n");

    // get a string from the user
    string s = GetString();

    // compute the length of s by using our function
    int length = charCounter(s);

    printf("That string is %d characters long!\n", length);
}

int charCounter(string theString)
{
    int counter = 0;
    
    // until we see '\0', the nul terminator...
    while(theString[counter] != '\0')
    {
        // ... continue incrementing counter
        counter++;
    }

    return counter;
}
```
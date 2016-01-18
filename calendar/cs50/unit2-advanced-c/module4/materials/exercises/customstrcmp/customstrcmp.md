```c
#include <stdio.h>
#include <cs50.h>

bool customstrcmp(char* string1, char* string2){
    // TODO: your code goes here! write a function that iterates through the strings and
    // checks if they are equal
}

int main(void){
    printf("\nString 1?: ");
    char* string1 = GetString();
    printf("\nString 2?: ");
    char* string2 = GetString();

    bool areEqual = customstrcmp(string1, string2);

    if (areEqual){
        printf("\nBingo! The strings are equal!\n");
    } else {
        printf("\nThe strings are not equal!\n");
    }
}
```
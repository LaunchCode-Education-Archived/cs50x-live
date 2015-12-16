#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    char myChar;
    struct node* next;
} node;

node* stringToList(string inputString)
{
    node* first = malloc(sizeof(node));
    first->myChar = 'a';
    first->next = NULL;
    node* current = first;
    for(int i = 0, n = strlen(inputString); i < n; i++)
    {
        node* newNode = malloc(sizeof(node));
        newNode->myChar = inputString[i];
        newNode->next = NULL;
        current = newNode;
    }
    return first->next;
}

string listToString(node* firstChar)
{
    // get the length of the string
    int totalLen = 0;
    node* current = firstChar;
    while(current != NULL)
    {
        totalLen++;
        current = current->next;
    }

    char newString[totalLen] = "";
    current = firstChar;
    for (int i = 0; i < totalLen; i++)
    {
        newString[i] = current->myChar;
        current = current->next;
    }
    return newString;
}

int main(void)
{
    // Read in an input string
    printf("Input string?: \n");
    string myString = GetString();

    // Convert that string into a linked list
    node* firstChar = stringToList(myString);

    // TODO: Your code here! Loop through the list, and every time you see an 'o',
    // insert a 'u' afterwards
    node* current = firstChar;
    while(current != NULL){
        if(current->myChar == 'o'){
            node* newNode = malloc(sizeof(node));
            newNode->myChar = 'u';
            newNode->next = current->next;
            current->next = newNode;
            current = current->next;
        }
        current = current->next;
    }

    // convert the list back into a string
    string newString = listToString(firstChar);

    // print out the "corrected" string
    printf("Charlatan! I use the Queen's English:\n");
    printf("%s\n", newString);
}

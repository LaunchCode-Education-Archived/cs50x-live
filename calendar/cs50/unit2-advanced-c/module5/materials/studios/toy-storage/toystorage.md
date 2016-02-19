```c
/**
 * toystorage.c
 * 
 */

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define NUM_BINS 27


// a node structure for use in implementing singly linked lists
typedef struct node
{
    char* name;
    struct node* next;
} node;

int hashByFirstLetter(char* inputString);

void printBin(int binNumber, node* table[]);

void freeAll(node* table[]);


int main(void)
{
    printf("Welcome, valued employee.\n");
    
    // Initialize an array of pointers for use in a hash table
    node* table[NUM_BINS];

    // Initialize every key with a dummy node, with a string and NULL next pointer
    for(int i = 0; i < NUM_BINS2; i++)
    {
        table[i] = NULL;
    }

    // Make a loop where you ask the user if they want to put a new toy in;
    // if they input "q", stop, else, take the string as a name
    while(true)
    {
        printf("Please select an option\n\ta -- to add a new toy to the warehouse\n\tq -- to quit\n");
        char* input = GetString();
        
        if(strcmp("q", input) == 0)
        {
            // User wants to quit, so break out of the while loop
            break;
        } 
    
        // TODO: your code goes here! Here's what you should do:
        // - using malloc, make a new node
        // - prompt the user for the name of the new toy
        // - set your node's "name" field to the string that the user inputted
        // - use the hashByFirstLetter function to obtain a hash key for the toy name
        // - use this hash key to insert the new node into its proper "bin"
        //      - make a variable pointing to the current first node in the linked list for this bin
        //      - to insert the new node, update its "next" pointer so that it points to the current first node
        //      - then make the table point to your new node

        // now we report what happened
        printf("%s has been added to bin %i:", toynode->name, hashkey);
        printBin(hashkey, table);
    }
    
    // if we're here, the user just quit, so wrap things up
    
    // print a summary
    printf("Contents of all bins:\n");
    for (int i = 0; i < NUM_BINS; i++)
    {
        printBin(i, table);
    }
    
    //let's remember to free all the memory we malloc'ed
    freeAll(table);
    
    // that's all folks
    printf("Goodbye, valued employee.\n");
}


/**
 * hashByFirstLetter
 * 
 * A hash function that returns an index for every string passed in
 * For any string, returns a key based on its first letter
 * Capitals and lowercase get the same key (e.g. 'A' and 'a' both return 0)
 * non-letter characters share one key (26)
 */
int hashByFirstLetter(char* inputString)
{
    // A hash function that returns an index for every string passed in
    // For any string, returns a key based on its first letter
    // Capitals and lowercase get the same key (e.g. 'A' and 'a' both return 0)
    // non-letter characters share one key

    // get the first letter
    char firstChar = *inputString;
    
    // if it's not a letter return the max index
    if (!isalpha(firstChar))
    {
        return NUM_BINS - 1;
    }
    
    // we have a letter. return its alphabet position
    int ascii = (int)(toupper(firstChar));
    return ascii - 'A';
}


/**
 * printBin
 * 
 * prints the contents of a hash-table "bin" to the console
 * you must tell it which bin number you want to print,
 * and also pass a reference to the hashtable itself
 */
void printBin(int binNumber, node* table[])
{
    node* currentNode = table[binNumber];
    if (currentNode == NULL)
    {
        return;
    }
    printf("bin %i contains:\n", binNumber);
    while(currentNode != NULL)
    {
        printf("\t%s\n", currentNode->name);
        currentNode = currentNode->next;
    }
    printf("\n");
}


/**
 * freeAll
 * 
 * frees all memory in a hash-table
 */
void freeAll(node* table[])
{
    for (int i = 0; i < NUM_BINS; i++)
    {
        node* toynode = table[i];
        while (toynode != NULL)
        {
            node* next = toynode->next;
            free(toynode->name);
            free(toynode);
            toynode = next;
        }
    }
}
```

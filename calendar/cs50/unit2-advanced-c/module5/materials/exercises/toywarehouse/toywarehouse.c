#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// A node structure for use in implementing singly linked lists
typedef struct node
{
    char* myName;
    struct node* next;
} node;

int hashFunction(char* inputString){
    // A hash function that returns an index for every string passed in
    // For any string, returns a key based on its first letter
    // Capitals and lowercase get the same key (e.g. 'A' and 'a' both return 0)
    // non-letter characters share one key

    // get the letter
    // treat it as an ascii number
    int curCode = (int)(*inputString);
    // if it's over 95, knock it down to "uppercase" territory
    if (curCode > 95){
        curCode -= 32;
    }
    // if it's a letter, return an index based on its letter
    if (curCode > 64 && curCode < 91){
        return (curCode - 65);
    } else {
        // otherwise, return the max index: 26
        return 26;
    }
}

void printBin(int binNumber, node* table[]){
    node* currentNode = table[binNumber];
    printf("For bin %i:\n", binNumber);
    while(currentNode != NULL){
        printf("%s\n", currentNode->myName);
        currentNode = currentNode->next;
    }
}

void printAll(node* table[]){
    printf("Contents of all bins:\n");
    for (int i = 0; i < 27; i++){
        printBin(i, table);
    }
}

int main(void){
    // Initialize an array of pointers for use in a hash table
    int numKeys = 27;
    node* table[numKeys];

    // Initialize every key with a dummy node, with a string and NULL next pointer
    for(int i = 0; i < numKeys; i++){
        table[i] = malloc(sizeof(node));
        table[i]->myName = "END, NO MORE ITEMS IN THIS BIN";
        table[i]->next = NULL;
    }

    // Make a loop where you ask the user if they want to put a new toy in;
    // if they input "q", stop, else, take the string as a name

    while(true){
        char* input = GetString();
        if(strcmp() == 0){
            // User wants to quit, print out all contents of tables and stop
            printAll(table);
            break;
        } else {
            // TODO: your code goes here! Here's what you should do:
            // - Take the string the user just input, and get a hash key for it
            // - using the hash key, make a new node
            // - insert the new node at the beggining of the list of nodes at
            //   that point in the table
            //      - to do this, make a new node, make it's next pointer point to the
            //        current entry in the table, then make the table point to your new node
            // - use the built in function to print out the bin just inserted into
        }
    }

}

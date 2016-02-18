```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Provide code for a singly linked list
typedef struct beacon
{
    bool isLit;
    struct beacon* next;
} beacon;

void printBeaconStatus(beacon* head){
    beacon* current = head;
    printf("Current status of the beacons of Gondor:\n");
    while(current != NULL)
    {
        if(current->isLit){
            printf("* ");
        } else {
            printf("_ ");
        }
        current = current->next;
    }
    printf("\n");
}

bool areAllLit(beacon* head){
    beacon* current = head;
    while(current != NULL)
    {
        if(!current->isLit){
            return false;
        }
        current = current->next;
    }
    return true;
}

int main(void)
{
    // Initialize a linked list

    beacon firstBeacon;
    beacon* curBeacon = &firstBeacon;

    for (int i = 0; i < 9; i++)
    {
        curBeacon->next = malloc(sizeof(beacon));
        curBeacon->next->isLit = false;
        curBeacon->next->next = NULL;
        curBeacon = curBeacon->next;
    }

    printf("Invaders! Light the beacons of Gondor!\n");
    firstBeacon.isLit = true;

    // print out the initial state of the beacons
    printBeaconStatus(&firstBeacon);

    // TODO: Your code here! Iterate through the linked list of beacons to light the beacons
    // of Gondor!



    // put in a function to check if everything is lit, outputs if they're all lit
    printBeaconStatus(&firstBeacon);
    if(areAllLit(&firstBeacon)){
        printf("The beacons are all lit! Our allies have been alerted!\n");
    } else {
        printf("The beacons are not all lit! Gondor is doomed!\n");
    }
}
```
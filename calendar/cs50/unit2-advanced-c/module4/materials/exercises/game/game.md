```c
/**
 * game.c
 */
 
#include <cs50.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


#define DESTINATION "The Altar of Yezzeron"
#define SKILL "Zorph Wisdom"
#define SKILL_GOAL 3


// TODO
// define a struct type called player



bool checkGameOver(player p);
void reportStatus(player p);
void discoverPotion(player* p);


int main(void) 
{
    // intro text
    printf("* * * DUNGEON QUEST * * *\n\n");
    printf("You find yourself in a dungeon ruled by dark magic\n");
    printf("Try to escape and reach %s without dying!\n", DESTINATION);
    printf("But before you arrive, you must boost your %s to at least level %i,\n", SKILL, SKILL_GOAL);
    printf("...or else the Dieties of %s will not accept you!\n\n", DESTINATION);
    
    // provide a seed to the random number generator (don't worry about understanding this)
    srand(time(NULL));
    
    // initialize the player
    player p = { 100, 3, 1 };

    // continue looping forever until Game Over
    while (true)
    {
        if (checkGameOver(p))
        {
            // stop if we hit Game Over
            return 0;
        }
        
        reportStatus(p);
        
        printf("You continue walking through dark corridors...\n");
        p.distance -= 1;
        GetString();
        
        printf("You health is slowly waning...\n");
        p.health -= 10;
        GetString();
        
        discoverPotion(&p);
    }
}

/** 
 * Returns true if the player has run out of health or reached the destination, else false
 * If the game did end, also prints an appropriate message, depending on the outcome
 */
bool checkGameOver(player p)
{
    if (p.health <= 0)
    {
        printf("Your last vestiges of health have deteriorated. You waste away in the loneliness of the Dungeon!\n");
        printf("Game Over\n");
        return true;
    }
    else if (p.distance <= 0)
    {
        if (p.skill >= SKILL_GOAL)
        {
            printf("You reach %s! The Dieties welcome you to their ethereal realm, and you join them in immortality!\n", DESTINATION);
        }
        else 
        {
            printf("You reach %s, but your %s is not developed enough.\n", DESTINATION, SKILL);
            printf("The Dieties condemn you, mortal, to another twenty years in the Dungeon!\n");
            printf("Game Over\n");
        }
        return true;
    }
    
    return false;
}

/**
 * Prints a status report to the console, informing the user of how they are doing 
 */
void reportStatus(player p)
{
    printf("Current Status: \n");
    printf("You are %i miles away from %s\n", p.distance, DESTINATION);
    printf("Your health is at %i percent\n", p.health);
    printf("Your %s is at level %i\n\n", SKILL, p.skill);
    GetString();
}

/**
 * Allows user the option to drink a magic potion
 * If so, randomly decides whether the potion had a "good" effect or "bad", and updates the player model accordingly
 */
void discoverPotion(player* p)
{
    printf("Suddenly you discover a potion on the ground!\n");
    printf("Do you want to drink it? (y/n)\n");
    
    // do drink if user types "y", otherwise don't drink
    bool userDecidesToDrink = strcmp(GetString(), "y") == 0;
    if (userDecidesToDrink)
    {
        // flip a coin to determine if the potion was helpful or harmful
        int r = rand();
        if (r % 2 == 0)
        {
            // good potion. increase skill
            p->skill++;
            printf("You feel your powers growing!\n");
            GetString();
        }
        else 
        {
            // evil potion. decrease health
            p->health -= 35;
            printf("A devilish sickness comes over you...\n");
            GetString();
        }
    }
}

```

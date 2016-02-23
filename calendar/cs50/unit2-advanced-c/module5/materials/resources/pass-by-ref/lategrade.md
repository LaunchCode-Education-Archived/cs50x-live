
```c

/**
 * lategrade.c
 * 
 */
 
#include <stdio.h>
#include <cs50.h>

typedef struct 
{
    char* title;
    char* studentName;
    int score;
} assignmentRecord;

void dockPoints(assignmentRecord* record, int daysLate);

#define PENALTY_PER_DAY 3

int main (void)
{
    assignmentRecord suzieRecord = { "Research Paper on Oatmeal", "Suzie Slacker", 94 };
    
    printf("Suzie got a score of %i on the assignment. But you say she turned it in late?\n", suzieRecord.score);
    printf("How many days late did Suzie submit her work?\n");
    int daysLate = GetInt();
    
    dockPoints(&suzieRecord, daysLate);

    printf("Suzie's PERMANENT RECORD has been updated to reflect the late submission.\n");
    printf("Her new score for the assignment is %i\n", suzieRecord.score);
}


void dockPoints(assignmentRecord* record, int daysLate)
{
    int pointsOff = daysLate * PENALTY_PER_DAY;
    record->score = record->score - pointsOff;
}
```

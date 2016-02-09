#include <stdio.h>
#include <cs50.h>


typedef struct 
{
    char* title;
    char* studentName;
    int score;
} assignmentGrade;

void dockPoints(assignmentGrade* grade, int daysLate);

int main (void)
{
    assignmentGrade suzieGrade = { "Paper", "Suzie Slacker", 94 };
    
    printf("Suzie got a score of %i on the assignment. But you say she turned it in late?\n", suzieGrade.score);
    printf("How many days late did Suzie submit her work?\n");
    int daysLate = GetInt();
    
    dockPoints(&suzieGrade, daysLate);

    printf("Suzie's PERMANENT RECORD has been updated to reflect the late submission.\n");
    printf("Her new score for the assignment is %i\n", suzieGrade.score);
}


void dockPoints(assignmentGrade* grade, int daysLate)
{
    int pointsOff = 3 * daysLate;
    grade->score = grade->score - pointsOff;
}

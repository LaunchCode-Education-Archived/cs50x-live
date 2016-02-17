```c
/**
 * sports.c
 *
 */


#include <stdio.h>
#include <cs50.h>


typedef struct team
{
    char* city;
    char* name;
    int wins;
    int losses;
    struct team* biggestRival;
} team;


typedef struct
{
    team* homeTeam;
    team* awayTeam;
    int homeScore;
    int awayScore;
} game;


void updateWinsLosses(game gameResult);

void reportGameResult(game gameResult);


int main(void)
{
    // make some teams
    team forks = { "Shelbyville", "Forks", 11, 4 };
    team spoons = { "Springfield", "Spoons", 2, 13, &forks };
    
    // make a game
    game spoonsVsForks = { &spoons, &forks, 22, 19 };
    
    // update the W/L records of both teams
    updateWinsLosses(spoonsVsForks);
    
    // report what happened
    reportGameResult(spoonsVsForks);
}


void updateWinsLosses(game gameResult)
{
    team* homeTeam = gameResult.homeTeam;
    team* awayTeam = gameResult.awayTeam;
    
    team* winners = homeTeam;
    team* losers = awayTeam;
    if (gameResult.awayScore > gameResult.homeScore)
    {
        winners = awayTeam;
        losers = homeTeam;
    }
    
    winners->wins += 1;
    losers->losses += 1;
}


void reportGameResult(game gameResult)
{
    team* homeTeam = gameResult.homeTeam;
    team* awayTeam = gameResult.awayTeam;
    
    char* tonightGame = "tonight's game";
    bool isRivalry = homeTeam->biggestRival == awayTeam || awayTeam->biggestRival == homeTeam;
    if (isRivalry)
    {
        tonightGame = "this year's EPIC RIVALRY CLASH";
    }
    
    printf("Good evening, sports fans!\n");
    printf("The score of %s was\n", tonightGame);
    printf("%s %s: %i\n", homeTeam->city, homeTeam->name, gameResult.homeScore);
    printf("%s %s: %i\n", awayTeam->city, awayTeam->name, gameResult.awayScore);
    printf("%s now has a record of %i wins, %i losses\n", homeTeam->city, homeTeam->wins, homeTeam->losses);
    printf("%s now has a record of %i wins, %i losses\n", awayTeam->city, awayTeam->wins, awayTeam->losses);
}

```

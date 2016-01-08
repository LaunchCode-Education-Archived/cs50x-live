#include <cs50.h>
#include <stdio.h>
#include <string.h>

string promptAndValidate(string fieldname);

int main(void)
{
    printf("Hello, thank you for signing up for: The United States\n");
    printf("I'll need to get some info from you please...\n\n");
    
    // TODO replace lines 14 - 44 with something much nicer
    
    // get first name and make sure it's valid
    string firstname = "";
    while( strlen(firstname) < 2 ) 
    {
        printf("First name (must be at least 2 characters long):\n");
        firstname = GetString();
    }
    
    // get last name and make sure it's valid
    string lastname = "";
    while( strlen(lastname) < 2 ) 
    {
        printf("First name (must be at least one 2 characters long):\n");
        lastname = GetString();
    }
    
    // get state and make sure it's valid
    string state = "";
    while( strlen(state) < 2 ) 
    {
        printf("State of residence (must be at least 2 characters long):\n");
        state = GetString();
    }
    
    // get email and make sure it's valid
    string email = "";
    while( strlen(email) < 2 ) 
    {
        printf("Email address (must be at least 2 characters long):\n");
        email = GetString();
    }
    
    printf("\nGreat thanks, lemme just enter that into my system here...\n");
    printf("%s %s from %s, at %s\n", firstname, lastname, state, email);
    printf("Excellent! Please pay your taxes in April, or you'll be hearing from us (check your spam folder).\n");
}


string promptAndValidate(string fieldname)
{
    string answer = "";
    while( strlen(answer) < 2 ) 
    {
        printf("%s (must be at least 2 characters long):\n", fieldname);
        answer = GetString();
    }  
    return answer;
}

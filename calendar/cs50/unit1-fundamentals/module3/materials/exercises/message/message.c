#include <stdio.h>
#include <cs50.h>

/**
 * Prints a personalized message to the console.
 */
int main(void)
{
  printf("Name of sender: ");
  string sender = GetString();
  
  printf("Name of recipient: ");
  string recipient = GetString();
  
  printf("Message: ");
  string message = GetString();
  
  printMessage(sender, recipient, message);
}

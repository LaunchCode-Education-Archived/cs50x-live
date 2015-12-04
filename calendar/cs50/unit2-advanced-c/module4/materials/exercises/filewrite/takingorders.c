#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string menuItems[] = {"Water", "Soda", "Cheeseburger", "Fries"};

  // Display menu:
  printf("Welcome to Good Burger! Can I take your order?\n");
  printf("MENU:\n");
  for (int i = 0; i < 4; i++)
  {
    printf("Item %i: %s\n", i, menuItems[i]);
  }
  printf("\nHow many items? ");

  int numItems = GetInt();

  // Here's where your code goes!
  // PUT YOUR CODE HERE: open a file to write


  for (int i = 0; i < numItems; i++)
  {
    printf("Which menu item would you like? ");
    // PUT YOUR CODE HERE: Take the order number, translate it into an item, and write it

  }

  // PUT YOUR CODE HERE: close the file


}

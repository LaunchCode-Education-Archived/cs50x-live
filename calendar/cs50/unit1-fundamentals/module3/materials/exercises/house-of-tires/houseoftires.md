```c
#include <cs50.h>
#include <stdio.h>
#include <math.h>
// TODO: include the header file with our numberOfContainers function so we can use the function!

int main(void)
{
    int tiresPerCrate = 20;
    float pricePerCrate = 1800.00;

    // Display a message for the user, ask how many tires they want
    printf("Welcome to Delmar House of Tires!\n How many tires do you want? ");
    int numberOfTires = GetInt();

    // Get the number of crates of tires to order
    int numberOfCrates = numberOfContainers(numberOfTires, tiresPerCrate);
    float totalCost = numberOfCrates*pricePerCrate;
    printf("\n\nYou need %i crates for %i tires.\nThat'll be %.2f!\n", numberOfCrates, numberOfTires, totalCost);
}
```

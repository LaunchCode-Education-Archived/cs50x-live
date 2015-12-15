#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include "mathHelper.h"

// TODO: cut the function from this file, and put it into mathHelper.c
int numberOfContainers(int numberOfUnits, int unitsPerContainer)
{
    // calculate number of containers to order using ceil from math.h
    float numberToOrder = ceil(((float)numberOfUnits)/unitsPerContainer);
    return (int)numberToOrder;
}

int main(void)
{
    int slicesPerPizza = 8;
    float pricePerPizza = 10.00;

    // Display a message for the user, ask how many pizza slices they want
    printf("Welcome to Delmar House of Pizza!\n How many slices do you want? ");
    int numberOfSlices = GetInt();

    // Get the number of pizzas to order
    int numberOfPizzas = numberOfContainers(numberOfSlices, slicesPerPizza);
    float totalCost = numberOfPizzas*pricePerPizza;
    printf("\n\nYou need %i pizzas for %i slices.\nThat'll be %.2f!\n", numberOfPizzas, numberOfSlices, totalCost);
}

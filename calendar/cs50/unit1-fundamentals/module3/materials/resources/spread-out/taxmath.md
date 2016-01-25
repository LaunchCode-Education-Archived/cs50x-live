```c
#include <cs50.h>
#include <stdio.h>
#include "taxmath.h"

// This file contains the actual code to implement the math functions for our tax program

float taxIncome(float income)
{
    // Calculate the total tax for someone's yearly income
    float incomeTax = 0.0;
    // Calculate taxes from the first tax bracket
    float firstBracket = ...
    if (income > firstBracket)
    {
      float taxable = income - firstBracket;
      float firstBracketTax = ...;
      income -= firstBracket;
      incomeTax += taxPercent(firstBracket, firstBracketTax);
    }

    // Keep going to calculate taxes on further brackets
    float secondBracket = ... // Set it to be the amount of money above the first bracket
    if(income > secondBracket)
    {
        ...
    }
    ...
    //
}

float taxProperty(float propertyWorth)
{
    //
    ...
    //
}

float taxInvestments(float investmentWorth)
{
    //
    ...
    //
}

float taxPercent(float amount, float percent)
{
    // Use this helper function to calculate a total amount of tax based on a percent and the amount to tax at that percent
    ...
    //
}

```
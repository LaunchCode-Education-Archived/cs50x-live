```c
#include <cs50.h>
#include <stdio.h>

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

int main(void)
{
    // ask for income
    // TODO: ask the user for their income using GetFloat

    // ask for property values
    // TODO: ask the user for their total property values

    // ask for investment values
    // TODO: ask the user for their income from investments

    // calculate taxes using each of our functions
    // TODO: call function for calculating taxes on income
    // TODO: call function for calculating taxes on property
    // TODO: call function for calculating taxes on investments

    // Display the results to the user:
    // show them:
    // - total tax
    // - taxes from income
    // - taxes from property
    // - taxes from investments
    // TODO: put display code here

    // After, either done, or provide services for user to learn more about their taxes
    // ... so much work!
}
```
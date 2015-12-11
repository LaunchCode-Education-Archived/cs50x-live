# Resource: Spread Out

So far we've only been working with small programs in which all the source code lives together in a single file, 
`myprogram.c`. But as we start writing larger, more complex programs, cramming everything into one file can make
it hard to stay organized. 

We saw a similar process in Module 2 with functional decomposition. Just as we learned to decompose a 
large and/or repetitive `main` function into several smaller, reusable functions, we also can (and should) do a similar decomposition procedure at the level of files. 

Here we provide an example of how to do this.

Let’s say we want to write a program to help a user calculate their taxes, and see where their total taxes are coming from.

I know! This is boring as heck! On the other hand, the fact that it’s boring is a good argument for making a computer do it, instead of a person!

Here’s the start of a program to ask the user about their income, and tell them about their total taxes.

taxprogram.c:
```
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

While this is at best a very rough approximation of how the U.S. tax system works, it demonstrates what kind of complexity would underly a tax-helper program.  Each kind of asset a user has might be passed to a different function to calculate taxes, and each of those functions has to handle things like tax brackets, which get even more complicated when we take into account things like state vs. federal tax.

If we were to finish this program, it might take thousands of lines of code!  If we needed to fix a bug, or track down a change we wanted to make in the program, we’d have to dig through the entire file again, and mentally keep track of all the different things we’ve done in it.

If we then wanted to extend the program to do something like show the user graphs of their taxes, it would be a nightmare!

What can we do to make our programming task easier? One thing we could do is break the code into multiple files.  That way, it’ll be easier when we need to make changes to the code, track down a bug, or add new features.

In this example, we could pull out the functions for calculating tax amounts into new files:

taxmath.h:
```
// This file contains prototypes for the math functions in our tax program

float taxIncome(float income);
float taxProperty(float propertyWorth);
float taxInvestments(float investmentWorth);
float taxPercent(float amount, float percent);
```

taxmath.c:
```
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

Here’s the new taxprogram.c:
```
#include <cs50.h>
#include <stdio.h>
#include "taxprogram.h"

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

This way, when we need to add new types of tax to taxmath.h and taxmath.c, we don’t have to think about all the other code we’ve put into taxprogram.c, and when we do something like add new user interface code to taxprogram.c, we don’t have to think about taxmath.h/c.

It's still a lot of code overall, but should be much more managable to work with.

Great!  Ugh, taxes.

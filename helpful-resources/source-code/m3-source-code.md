# Module 3 Source Code
You will find the source code for the follow-alongs that you will complete during Module 3.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/4/m/src4m/" target="_blank"><b>Lecture: Week 4 Source Code</b></a>


## Prep for Class 2

#### sigma-0

```c
/**
 * sigma-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Adds the numbers 1 through n.
 *
 * Demonstrates iteration.
 */

#include <cs50.h>
#include <stdio.h>

// prototype
int sigma(int);

int main(void)
{
    // ask user for a positive int
    int n;
    do
    {
        printf("Positive integer please: ");
        n = GetInt();
    }
    while (n < 1);

    // compute sum of 1 through n
    int answer = sigma(n);

    // report answer
    printf("%i\n", answer);
}

/**
 * Returns sum of 1 through m; returns 0 if m is not positive.
 */
int sigma(int m)
{
    // return sum of 1 through m
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        sum += i;
    }
    return sum;
}
```
#### sigma-1

```c
/**
 * sigma-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Adds the numbers 1 through n.
 *
 * Demonstrates recursion.
 */

#include <cs50.h>
#include <stdio.h>

// prototype
int sigma(int);

int main(void)
{
    // ask user for a positive int
    int n;
    do
    {
        printf("Positive integer please: ");
        n = GetInt();
    }
    while (n < 1);

    // compute sum of 1 through n
    int answer = sigma(n);

    // report answer
    printf("%i\n", answer);
}

/**
 * Returns sum of 1 through m; returns 0 if m is not positive.
 */
int sigma(int m)
{
    // base case
    if (m <= 0)
    {
        return 0;
    }

    // recursive case
    else
    {
        return (m + sigma(m - 1));
    }
}
```

















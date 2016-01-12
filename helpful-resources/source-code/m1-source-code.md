#Module 1 Source Code
You will find the source code for the follow-alongs that you will complete during Module 1.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/1/w/src1w/" target="_blank"><b>Lecture: Week 1 Source Code</b></a>

<a href="http://cdn.cs50.net/2015/fall/lectures/1/f/src1f/" target="_blank"><b>Lecture: Week 1, continued Source Code</b></a>


##Prep for Class 1
#### hello-0

```c
/**
 * hello-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to the world.
 *
 * Demonstrates use of printf.
 */
       
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

#### hello-1

```c
/**
 * hello-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to just David.
 *
 * Demonstrates use of CS50's library.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = "David";
    printf("hello, %s\n", name);
}
```
#### hello-2

```c
/**
 * hello-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to whomever.
 *
 * Demonstrates use of CS50's library and standard input.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("State your name: ");
    string name = GetString();
    printf("hello, %s\n", name);
}
```
#### adder

```c
/**
 * adder.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Adds two numbers.
 *
 * Demonstrates use of CS50's library.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for input 
    printf("Give me an integer: ");
    int x = GetInt();
    printf("Give me another integer: ");
    int y = GetInt();

    // do the math
    printf("The sum of %i and %i is %i!\n", x, y, x + y);
}
```
#### f2c

```c
/**
 * f2c.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Converts Fahrenheit to Celsius.
 *
 * Demonstrates arithmetic.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user user for temperature in Fahrenheit
    printf("Temperature in F: ");
    float f = GetFloat();
    
    // convert F to C
    float c = 5.0 / 9.0 * (f - 32.0);
    
    // display result to one decimal place
    printf("%.1f\n", c);
}
```
## Prep for Class 2

#### conditions-0

```c
/**
 * conditions-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tells user if his or her input is positive or negative (somewhat
 * inaccurately).
 *
 * Demonstrates use of if-else construct.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for an integer
    printf("I'd like an integer please: ");
    int n = GetInt();

    // analyze user's input (somewhat inaccurately)
    if (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    else
    {
        printf("You picked a negative number!\n");
    }
}
```
#### conditions-1

```c
/**
 * conditions-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tells user if his or her input is positive or negative.
 *
 * Demonstrates use of if-else if-else construct.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for an integer
    printf("I'd like an integer please: ");
    int n = GetInt();

    // analyze user's input
    if (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    else if (n == 0)
    {
        printf("You picked zero!\n");
    }
    else
    {
        printf("You picked a negative number!\n");
    }
}
```
#### positive

```c
/**
 * positive.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Demands that user provide a positive integer.
 *
 * Demonstrates use of do-while.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // loop until user provides a positive integer
    int n;
    do
    {
        printf("Please give me a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Thanks for the positive int!\n");
}
```
#### Debugging with Dan Armendariz

```c
#include <stdio.h>
#include <cs50.h>

void f()
{
    printf("Hello, world!\n");
}

int main(void)
{
    printf("Please enter a number: ");
    
    int num = GetInt();
    
    //printf("DEBUG before: %i\n", num);
    num = num / 2 + 1;
    //printf("DEBUG after: %i\n", num);
    
    for(int i = 1; i < num; i++)
    {
        printf("%i!\n", i);
    }
    
    return 0;
    
}
```
















# Module 2 Source Code
You will find the source code for the follow-alongs that you will complete during Module 2.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/2/m/src2m/" target="_blank"><b>Lecture: Week 2  Source Code</b></a>

<a href="http://cdn.cs50.net/2015/fall/lectures/2/w/src2w/" target="_blank"><b>Lecture: Week 2, continued Source Code</b></a>

<a href="http://cdn.cs50.net/2014/fall/lectures/2/m/src2m/" target="_blank"><b>Lecture: Week 2 Source Code (2014)</b></a>

<a href="http://cdn.cs50.net/2014/fall/lectures/2/w/src2w/" target="_blank"><b>Lecture: Week 2 Source Code (2014)</b></a>

## Prep for Class 1
#### floats-0

```c
/**
 * floats-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tries to print 1/10 as a floating-point value.
 *
 * Demonstrates truncation.
 */

#include <stdio.h>

int main(void)
{
    float f = 1 / 10;
    printf("%.1f\n", f);
}
```

#### floats-1

```c
/**
 * floats-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints 1/10 as a floating-point value to one decimal place.
 *
 * Demonstrates division of floating-point values.
 */

#include <stdio.h>

int main(void)
{
    float f = 1.0 / 10.0;
    printf("%.1f\n", f);
}
```
#### floats-2

```c
/**
 * floats-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints 1/10 as a floating-point value to 28 decimal places.
 *
 * Demonstrates imprecision of floating-point values.
 */

#include <stdio.h>

int main(void)
{
    float f = 1.0 / 10.0;
    printf("%.28f\n", f);
}
```
#### ascii-0

```c
/**
 * ascii-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Displays the mapping between alphabetical ASCII characters and
 * their decimal equivalents.
 *
 * Demonstrates casting from int to char.
 */

#include <stdio.h>

int main(void)
{
    // display mapping for uppercase letters
    for (int i = 65; i < 65 + 26; i++)
    {
        printf("%c: %i\n", (char) i, i);
    }

    // separate uppercase from lowercase
    printf("\n");

    // display mapping for lowercase letters
    for (int i = 97; i < 97 + 26; i++)
    {
        printf("%c: %i\n", (char) i, i);
    }
}
```
#### ascii-1

```c
/**
 * ascii-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Displays the mapping between alphabetical ASCII characters and
 * their decimal equivalents.
 *
 * Demonstrates casting from char to int.
 */

#include <stdio.h>

int main(void)
{
    // display mapping for uppercase letters
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c: %i\n", c, (int) c);
    }

    // separate uppercase from lowercase
    printf("\n");

    // display mapping for lowercase letters
    for (char c = 'a'; c <= 'z'; c++)
    {
        printf("%c: %i\n", c, (int) c);
    }
}
```

#### function-0

```c
/**
 * function-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints a user's name.
 *
 * Demonstrates a function (not from a library) with a side effect.
 */

#include <cs50.h>
#include <stdio.h>

// prototype
void PrintName(string name);

int main(void)
{
    printf("Your name: ");
    string s = GetString();
    PrintName(s);
}

/**
 * Says hello to someone by name.
 */
void PrintName(string name)
{
    printf("hello, %s\n", name);
}
```

#### function-1

```c
/**
 * function-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Demands that user provide a positive integer.
 *
 * Demonstrates use of a function (not from a library) with a return value.
 */

#include <cs50.h>
#include <stdio.h>

// prototype
int GetPositiveInt();

int main(void)
{
    int n = GetPositiveInt();
    printf("Thanks for the %i!\n", n);
}

/**
 * Gets a positive integer from a user.
 */
int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("Please give me a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    return n;
}
```

#### string-0

```c
/**
 * string-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints a string, one character per line.
 *
 * Demonstrates strings as arrays of chars and use of strlen.
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // print string, one character per line
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
}
```
#### string-1

```c
/**
 * string-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints a string, one character per line.
 *
 * Demonstrates error checking.
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // print string, one character per line
    if (s != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            printf("%c\n", s[i]);
        }
    }
}
```
#### string-2

```c
/**
 * string-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints a string, one character per line.
 *
 * Demonstrates optimization of a loop.
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // print string, one character per line
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c\n", s[i]);
        }
    }
}
```
#### capitalize-0
<a href="http://cdn.cs50.net/2015/fall/lectures/3/w/src3w/" target="_blank">Lecture: Week 3</a>

```c
/**
 * capitalize-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Capitalizes a given string.
 *
 * Demonstrates casting and iteration over strings as arrays of chars.
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // capitalize text
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
```
#### capitalize-1

```c
/**
 * capitalize-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Capitalizes a given string.
 *
 * Demonstrates islower and toupper.
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // capitalize text
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
```
#### capitalize-2

```c
/**
 * capitalize-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Capitalizes a given string.
 *
 * Demonstrates further simplification of code with toupper.
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();

    // capitalize text
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
```

## Prep for Class 2

#### ages

```c
/**
 * ages.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Ages people by a year.
 *
 * Demonstrates arrays.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // determine number of people
    int n;
    do
    {
        printf("Number of people in room: ");
        n = GetInt();
    }
    while (n < 1);

    // declare array in which to store everyone's age
    int ages[n];

    // get everyone's age
    for (int i = 0; i < n; i++)
    {
        printf("Age of person #%i: ", i + 1);
        ages[i] = GetInt();
    }

    // report everyone's age a year hence
    printf("Time passes...\n");
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, person #%i will be %i years old.\n", i + 1, ages[i] + 1);
    }
}
```
#### argv-0

```c
/**
 * argv-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints program's first command-line argument; assumes it's present.
 *
 * Demonstrates use of argv.
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("%s\n", argv[1]);
}
```
#### argv-1

```c
/**
 * argv-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints command-line arguments, one per line.
 *
 * Demonstrates use of argv.
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // print arguments
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
```
#### argv-2

```c
/**
 * argv-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints command-line arguments, one character per line.
 *
 * Demonstrates argv as a two-dimensional array.
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // print arguments
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}
```
















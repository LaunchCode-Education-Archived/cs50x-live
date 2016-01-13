# Module 4 Source Code
You will find the source code for the follow-alongs that you will complete during Module 4.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/4/m/src4m/" target="_blank"><b>Lecture: Week 4 Source Code</b></a>

<a href="http://cdn.cs50.net/2015/fall/lectures/4/w/src4w/" target="_blank"><b>Lecture: Week 4, continued Source Code</b></a>




## Prep for Class 1
#### noswap

```c
/**
 * noswap.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Should swap two variables' values, but doesn't!  How come?
 */

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping...\n");
    swap(x, y);
    printf("Swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

/**
 * Fails to swap arguments' values.
 */
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
```

#### compare-0

```c
/**
 * compare-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tries (and fails) to compare two strings.
 *
 * Demonstrates strings as pointers to arrays.
 */
       
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get line of text
    printf("Say something: ");
    string s = GetString();
 
    // get another line of text
    printf("Say something: ");
    string t = GetString();
 
    // try (and fail) to compare strings
    if (s == t)
    {
        printf("You typed the same thing!\n");
    }
    else
    {
        printf("You typed different things!\n");
    }
}
```
#### compare-1

```c
/**
 * compare-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Compares two strings.
 *
 * Demonstrates strings as pointers to characters.
 */
       
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    printf("Say something: ");
    char* s = GetString();
 
    // get another line of text
    printf("Say something: ");
    char* t = GetString();
 
    // try to compare strings
    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("You typed the same thing!\n");
        }
        else
        {
            printf("You typed different things!\n");
        }
    }
}
```
#### pointers

```c
/**
 * pointers.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Prints a given string one character per line.
 *
 * Demonstrates pointer arithmetic.
 */
       
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }

    // print string, one character per line
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", *(s+i));
    }
}
```
#### sizeof
Source Code for sizeof is located <a href="http://cdn.cs50.net/2014/fall/lectures/1/w/src1w/" target="_blank">here</a>.

```c
/**
 * sizeof.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Reports the sizes of C's data types.
 *
 * Demonstrates use of sizeof.
 */

#include <stdio.h>

int main(void)
{
    // some sample variables 
    char c;
    double d;
    float f;
    int i;

    // report the sizes of variables' types
    printf("char: %i\n", sizeof(c));
    printf("double: %i\n", sizeof(d));
    printf("float: %i\n", sizeof(f));
    printf("int: %i\n", sizeof(i));
}
```

#### copy-0

```c
/**
 * copy-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Tries and fails to copy two strings.
 *
 * Demonstrates strings as pointers to arrays.
 */
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    printf("Say something: ");
    string s = GetString();
    if (s == NULL)
    {
        return 1;
    }

    // try (and fail) to copy string
    string t = s;
 
    // change "copy"
    printf("Capitalizing copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // print original and "copy"
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);

    // success
    return 0;
}
```
#### copy-1

```c
/**
 * copy-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Copies a string.
 *
 * Demonstrates strings as pointers to arrays.
 */
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    printf("Say something: ");
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }

    // allocate enough space for copy
    char* t = malloc((strlen(s) + 1) * sizeof(char));
    if (t == NULL)
    {
        return 1;
    }

    // copy string, including '\0' at end
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // change copy
    printf("Capitalizing copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // print original and copy
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);

    // free memory
    free(s);
    free(t);

    // success
    return 0;
}
```

## Prep for Class 2

#### structs.h

```c
/**
 * structs.h
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Defines a student.
 */

#include <cs50.h>

// structure representing a student
typedef struct
{
    string name;
    string house;
}
student;
```

#### structs-0

```c
/**
 * structs-0.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Demonstrates use of structs.
 */
       
#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "structs.h"

// number of students
#define STUDENTS 3

int main(void)
{
    // declare students
    student students[STUDENTS];

    // populate students with user's input
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student's name: ");
        students[i].name = GetString();

        printf("Student's house: ");
        students[i].house = GetString();
    }

    // now print students
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s is in %s.\n", students[i].name, students[i].house);
    }

    // free memory
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}
```
#### structs-1

```c
/**
 * structs-1.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Demonstrates use of file I/O.
 */
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

// number of students
#define STUDENTS 3

int main(void)
{
    // declare students
    student students[STUDENTS];

    // populate students with user's input
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student's name: ");
        students[i].name = GetString();

        printf("Student's house: ");
        students[i].house = GetString();
    }

    // save students to disk
    FILE* file = fopen("students.csv", "w");
    if (file != NULL)
    {
        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file, "%s,%s\n", students[i].name, students[i].house);
        }
        fclose(file);
    }

    // free memory
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].house);
    }
}
```

















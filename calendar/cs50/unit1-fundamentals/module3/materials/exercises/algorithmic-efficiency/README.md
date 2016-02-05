##### Module 3
[Back to Prep for Class 1](../../class1-prep#algorithmic-efficiency)
# Exercise: Algorithmic Efficiency

### Question 1
We have an algorithm to find the largest number in an array.  Given an array, it looks at each entry of the array in order, keeping track of the largest number its seen so far.  It can show up in a program like this:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // set up example data
  int exampleArray[] = {12, -2, 0, 15, 27, 20, 6};
  int exampleSize = 7;

  int currentMax = exampleArray[0];
  for (int i = 1; i < exampleSize; i++)
  {
    if (exampleArray[i] > currentMax){
      currentMax = exampleArray[i];
    }
  }
  printf("The biggest number was %i\n", currentMax);
}
```
**This algorithm is O(n).  What does ’n’ represent in this example?**


### Question 2
We have an algorithm that prints a square grid of ‘x's.  For a given integer ’n’, it prints ’n’ rows, each of which contains ’n’ copies of the character ‘x’.

It could show up in a program like this:
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n = GetInt();
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("x");
    }
    printf("\n");
  }
}
```
**What is this algorithm’s time complexity, in terms of 'n'?**


### Question 3
We have an algorithm, this time being carried out by a person!
Sally’s boss gives her a job: take a list of integers, sort them, then let your team know.
Sally thinks for a second, then decides to accomplish her task like so:
- sort the integers using “selection sort"
- let each member of her team know individually

She also knows the following:
- there are ’n’ integers
- her team has ‘m’ members
- letting any individual team member know that she’s done will take constant time, or O(1) time

**What is the total time complexity of Sally’s task, in terms of ’n’ and ‘m'?**

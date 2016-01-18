```c
//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include <stdio.h>
#include <cs50.h>

// pi is always gonna be 3.14159..., so this variable should never be altered!
// #define allows us to set a value once and have it remain constant.
#define PI 3.141593654
// notice the different syntax (no '=' aka assignment operator)
// and the different naming scheme (ALL_CAPS)

float area(float radius);
float circumference(float diameter);

int main (void)
{
  // Get the size of the pizza from the user
  printf("What's the diameter of the pizza? ");
  float pizza_diameter = GetFloat();
  
  // Calculate circumference and area of the pizza
  float pizza_circumference = circumference(pizza_diameter);
  float pizza_area = area( pizza_diameter / 2.0 );
  
  // Tell the user all about their pizza
  printf("The pizza is %f inches around.\n", pizza_circumference);
  printf("The pizza has %f square inches.\n", pizza_area);
}

/*
 * returns the area of a circle with a given radius
 */
float area(float radius)
{
  return PI * (radius * radius); // pi r squared
}

/*
 * returns the circumference of a circle with a given diameter
 */
float circumference(float diameter)
{
  return PI * diameter;
}
```
//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include <stdio.h>
#include <cs50.h>

float area(float radius);
float circumference(float diameter);

int main (void)
{
  // Get the size of the pizza from the user
  printf("What's the diameter of the pizza? ");
  float pizza_diameter = GetFloat();

  float pizza_circumference = circumference(pizza_diameter);
  float pizza_area = area( pizza_diameter / 2.0 );
  
  printf("The pizza is %f inches around.\n", pizza_circumference);
  printf("The pizza has %f square inches.\n", pizza_area);
}

/*
 * returns the area of a circle with a given radius
 */
float area(float radius)
{
  float pi = 3.141592654;
  return pi * (radius * radius); // pi r squared
  
  // now we have 3.14159... stored in a variable called pi
  // That's good, but...
}

/*
 * returns the circumference of a circle with a given diameter
 */
float circumference(float diameter)
{
  float pi = 3.141592654;
  return pi * diameter;
  
  // ...but down here we end up needing to repeat ourselves by making another pi variable.
  // Wouldn't it be nice if we could just create pi once, and then use it in both functions?
}

```c
//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include <stdio.h>
#include <cs50.h>

// If we initialize pi out here, at the global scope, it will be accessible everywhere.
float pi = 3.141592654;
// BUT! this is generally a bad idea. What if some piece of code somewhere changes the value pi?

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
  // now we can just use pi here, because we declared it globally (see top of file)
  return pi * (radius * radius); // pi r squared
}

/*
 * returns the circumference of a circle with a given diameter
 */
float circumference(float diameter)
{
  return pi * diameter;
}
```
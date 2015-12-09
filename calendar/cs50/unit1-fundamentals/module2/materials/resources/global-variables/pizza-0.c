//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include <stdio.h>
#include <cs50.h>


/*
 * returns the area of a circle with a given radius
 */
float area(float radius);

/*
 * returns the circumference of a circle with a given diameter
 */
float circumference(float diameter);

int main (void)
{
  // Get the size of the pizza from the user
  printf("What's the diameter of the pizza? ");
  float pizza_diameter = GetFloat();

  float pizza_circumference = circumference(pizza_diameter);
  float pizza_area = area( pizza_diameter / 2.0 );
  
  printf("The pizza is %f inches around.", pizza_circumference);
  printf("The pizza has %f square inches.", pizza_area);
}

float area(float radius)
{
  return 3.141592654 * (radius * radius); // pi r squared
  
  // our use of 3.14159... is a "magic number". It would be better to store it in a variable
}

float circumference(float diameter)
{
  return 3.141592654 * diameter;
}


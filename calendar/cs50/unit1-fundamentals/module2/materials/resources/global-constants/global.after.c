//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include "stdio.h"

#define PI 3.141593654

float area (float radius);


int main (void)
{
  // Get the size of the pizza from the user
  float pizza_diameter = GetFloat();
  float pizza_radius = pizza_diameter / 2.0;

  //How many square inches of pizza do you get
  float pizza_area = area(pizza_radius);

  printf("The pizza has %f square inches", pizza_area);
}

float area (float radius)
{
  // Area of a pizza is (Pi * radius * radius)
  return PI * radius^2;
}

//source video: https://www.youtube.com/watch?v=F5feTW3CAZs&index=4&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF

#include "stdio.h"
#include "cs50.h"

// Global variables are almost always a bad idea though! Look below at an altervative with #define
int pi = 3.141593654;

// Because this variable is never altered, a #define is a better option. Note that different syntax and naming scheme. 
// #define PI 3.141593654

int main (void)
{
  // Get the size of the pizza from the user
  float pizza_diameter = GetFloat();
  float pizza_radius = pizza_diameter / 2.0;

  // Area of a pizza is (Pi * radius * radius)
  float pizza_area = pi * pizza_radius^2;

  printf("The pizza has %f square inches", pizza_area);
}
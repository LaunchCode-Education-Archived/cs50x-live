#include <stdio.h>
#include <cs50.h>

int main void()
{
  
  // this works, but is a very bad idea
  printf("What is the year of your birth? ");
  string birthyear = GetString();
  // don't even bother trying to understand this:
  printf("In the year %i, you were halfway towards becoming who you are today!\n", (2016 - atoi(birthyear)) + (2016 - atoi(birthyear)) / 2);

  // this is ever so slightly better
  printf("What is the year of your birth? ");
  string birthyear = GetString();
  int answer = (2016 - atoi(birthyear)) + (2016 - atoi(birthyear)) / 2
  printf("In the year %i, you were halfway towards becoming who you are today!\n", answer);
  
  // but still needs to be expanded more, because:
  // -- it's impossible for someone else to understand what that math is doing.
  // -- if we get a bug, it will be very difficult to figure out which part of our formula is broken
  // -- we repeat this expression twice: (2016 - atoi(birthyear))

  // ------------------------------
  // The following is much clearer. 
  // We break up the convulted math into multiple lines with descriptive variable names and comments
  // ------------------------------
  
  // prompt user for their birthday
  printf("What is the year of your birth? ");
  
  // get user's answer
  string birthyear_str = GetString();
  
  // convert string to int
  int birthyear = atoi(birthyear_str);
  
  // calculate year at which the user was half of their current age
  int currentYear = 2016;
  int age = currentYear - birthyear;
  int halfage = age / 2;
  int halfwayYear = birthYear + halfAge;
  
  printf("In the year %i, you were halfway towards becoming who you are today!\n", halfwayYear);
  
}

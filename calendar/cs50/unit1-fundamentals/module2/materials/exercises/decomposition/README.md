# Exercise: Decomposition

*TODO an exercise that requires them to "decompose" a cluttered program with a long `main` function by pulling
some piece of the funcitonality (especially something that is repeated) out into a separate function. Potentially
use their code from [letterlocator](../letterlocator) (what is letter locator?) as the starting point.*

Examine this file:

  //TODO code for a file with a long 'main' function.
    // Write a blank function called capitalize(){//TODO}
    // ask how many names you want to enter?
    // ask for a first name, capitalize first letter
    // then ask for a last name, capitalize first letter
    // then ask for a state, capitalize first letter
    // loop through entries for the number of names to enter
    // show all the people entered 
    
  
Notice lines *TODO*.  This loop capitalizes the first letter in each word passed to it.  A similar loop is used again for last name...and then again for state. Do you see it?  This is an opportunity to make your code more eloquent! Instead of repeating this code three times, use a FUNCTION.  Notice that there is a function above 'main' called 'capitalize'.  This will do the same work as all those loops.  Implement this 'capitalize' into 'main' in the 3 places where loops are used to capitalize letters.  Here is how it would work for the first name section of the code // TODO




  
  

##### Module 2

[Go back to Class 1 Prep](../../class1-prep)

# Resource: Global Variables

Take a look at the evolution of our `pizza` program:

Version | Improvement | Problem
--------|-------------|-------- 
[pizza-0.c](./pizza-0.c) | (pizza is yummy) | Magic numbers are bad! Makes your code difficult for others to read and understand.
[pizza-1.c](./pizza-1.c) | Replaces magic numbers with decriptively named variables. | Repetition is bad! Makes your code  harder to maintain because if you want to change something, you have to change it in multiple places.
[pizza-2.c](./pizza-2.c) | Eliminates repetition by using a global variable. | Global variables are dangerous! Susceptible to being overwritten by any code anywhere. 
[pizza-3.c](./pizza-3.c) | Replaces global variable with `#define`, a "pre-processor directive", so that the value 
cannot be overwritten. | nothing!

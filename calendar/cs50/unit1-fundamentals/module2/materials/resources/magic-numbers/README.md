##### Module 2

[Go back to Class 1 Prep](../../class2-prep#magic-numbers-global-variables)

# Resource: Magic Numbers

We have written a "pizza" program, which behaves like this:
```
~/workspace $ ./pizza
What's the diameter of the pizza? 12
The pizza is 37.699112 inches around.
The pizza has 113.097336 square inches.
```

Take a look at [pizza-0.c](./pizza-0.c). Notice that it makes use of two functions, each of which do some math using the value `3.14159...` aka `pi`. 

The following table summarizes the evolution of our program as we continually improve it:

Version | Improvement | Problem
--------|-------------|-------- 
[pizza-0.c](./pizza-0.c) | (pizza is yummy) | Magic numbers are bad! Makes your code difficult for others to read and understand.
[pizza-1.c](./pizza-1.c) | Replaces magic numbers with decriptively named variables. | Repetition is bad! Makes your code  harder to maintain because if you want to change something, you have to change it in multiple places.
[pizza-2.c](./pizza-2.c) | Eliminates repetition by using a global variable. | Global variables are dangerous! Susceptible to being overwritten by any code anywhere. 
[pizza-3.c](./pizza-3.c) | Replaces global variable with `#define`, a "preprocessor directive", so that the value cannot be overwritten. | nothing!

What the heck is this preprocessor directive thing, and why is the syntax different? For now, don't worry about it. They allow you to do other fancy things beyond defining constant global values, but this is probably the only context in which you'll use them during CS50.

##### Module 2

[Go back to Class 1 Prep](../../class2-prep#magic-numbers-global-variables)

# Resource: Magic Numbers

We have written a "pizza" program, which behaves like this:
```nohighlight
~/workspace $ ./pizza
What's the diameter of the pizza? 12
The pizza is 37.699112 inches around.
The pizza has 113.097336 square inches.
```

Take a look at [pizza-0.c](./pizza-0.html). Notice that it makes use of two functions, each of which do some math using the value `3.14159...` aka `pi`. 

There is a problem with the code: it uses that `3.14159...` value as a magic number, inserting it directly into our code in multiple places. 

We fixed this problem in a new version, [pizza-1.c](./pizza-1.html). But that version still wasn't perfect... 

Eventually, after a couple more improvements, we arrived a a nice solution in [pizza-3.c](./pizza-3.html).

In the table below, we summarize the evolution of our program as we continually improved it. Click on each link to see the changes that we made.

Version | Improvement |     | Problem
--------|-------------|-----|-------- 
[pizza-0.c](./pizza-0.html) | (pizza is yummy) | but... | Magic numbers are bad! Makes your code difficult for others to read and understand.
[pizza-1.c](./pizza-1.html) | Replaces magic numbers with decriptively named variables. | but... | Repetition is bad! Makes your code  harder to maintain because if you want to change something, you have to change it in multiple places.
[pizza-2.c](./pizza-2.html) | Eliminates repetition by using a global variable. | but... | Global variables are dangerous! Susceptible to being overwritten by any code anywhere. 
[pizza-3.c](./pizza-3.html) | Replaces global variable with `#define`, a "preprocessor directive", so that the value cannot be overwritten. | but... | nothing!


***

BTW,

What the heck is this preprocessor directive thing, and why is the syntax different? For now, don't worry about it. They allow you to do other fancy things beyond defining constant global values, but this is probably the only context in which you'll use them during CS50 (along with the `#include` directive).

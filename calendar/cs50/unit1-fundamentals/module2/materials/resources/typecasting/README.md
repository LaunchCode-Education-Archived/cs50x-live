##### Module 2
[Go back to Prep for Class 1](../../class1-prep#types-typecasting-imprecision) 

# Typecasting

Say we are grading a multiple-choice quiz, and the student got `46` correct answers out of `50` total questions.

Here's how we might we represent that knowledge in code:

```c
int num_correct = 46;
int total = 50;
```

Now let's say we want to calculate the student's score as a percentage value. How might we do that?

Well in math terms, all we have to do is divide the number of correct answers by the total number questions, 
like so: 

`46 / 50` 

which gives us `0.92`. 

(For simplicity, let's just be happy with a value between 0 and 1,
rather than an actual percentage out of 100 like `92%`.)

How can we do this calculation in C?

First let's just declare a variable to hold the score:

```c
int score;
```

Oops, this won't work. If we want `score` to be able to hold floating-point values like `0.92`,
then `int` is not the right data-type for the job. Let's use a `float` instead:

```c
float score;
```

Now that we have declared our variable, let's assign it a value:

```c
score = num_correct / total;
```

Unfortunately, this will produce a value we might not be expecting: instead of `0.92`, we get `0.0`.

Why? Because integer division is weird. Recall that `num_correct` and `total` are both `int`s.
When dividing two `int`s, the computer produces a new `int` by throwing away (or *truncating*)
everything after the decimal point:

`3 / 4` -> `0.75` -> `0`

`250 / 100` -> `2.5` -> `2`

`46 / 50` -> `0.92` -> `0`

So the fact that our `score` variable is of type `float` is nice, but that alone is not enough
to produce the result we want. The problem is that the computer executes this line
```c
score = num_correct / total;
```
 by **first** calculating the result of the expression on the right-hand side of the `=` sign:
 
`num_correct / total` -> `46 / 50` -> `0` 

and **then** assigns the resulting `0` into our variable.

We need to somehow change our code so that it calculates the answer by dividing `float`s:
`46.0 / 50.0`, rather than dividing `int`s: `46 / 50`.

But our variables `num_correct` and `total` are both `int`s, so how are we supposed to do that? 
Should we go back and change our code to use `float`s instead, like this?
```c
float num_correct = 46.0;
float total = 50.0;
```
That doesn't feel right. The data-types we choose should always reflect, as accurately as possible, the
situation we are trying to model. Here we want to represent a multiple-choice quiz, with discrete, 
whole numbers of questions and answers. It doesn't make sense to speak of 46.3 correct answers, or 50.76 total questions. So `num_correct` and `total` should be `int`s. 

So how are we going divide them?

#### Typecasting to the rescue

Typecasting allows us to convert between data-types:
```c
float f = (float) num_correct; // f is 46.0
int i = (int) 8.84; // i is 8
```
When casting, the compiler will do its best to choose the "equivalent" value for the new data-type. Notice
how the `8.84` got truncated.

Now we can cast our `46` into a `46.0` and our `50` into `50.0`:
```c
score = (float) num_correct / (float) total;
```
and `score` will have a value of `0.92`.

Hooray!

A couple of additional things to note:

You can choose to cast just one of the variables, and leave the other alone.
```c
score = num_correct / (float) total;
```
Still gives us `0.92`. When the compiler encounters a type mismatch, like dividing an `int` by a `float`,
it will silently cast the `int` into a float under the hood for us, so we end up casting both anyway.

Finally, note that the following will NOT work:
```c
score = (float) (num_correct / total);
```
In the above case, the computation happens first: `46 / 50` evaluates to `0`, which is then casted into a 
float, `0.0`, which is then assigned to our variable.

In fact, the above is equivalent to our first attempt, when we provided no casting at all:
```c
score = num_correct / total;
```
Even without explicit casting here, the compiler notices that `score` is a float, so it silently casts `0` into `0.0` before assigning it to the variable.

#### Morals of this story:
* Try to choose the best data-type to model each piece of your code.
* Sometimes you need to switch between data types
  * For example, integer division truncates everything after the decmial point and you might not want that to happen
* You can cast an expression from one data-type to another
  * The syntax for casting an expression into a different data type involves prefixing the expression with the name of the new type in parentheses, like so: `(newType) expression` where `newType` is something like `float` and `expression` is something like `num_correct` or `46` or `(1 + 2 + 3)`

Check out [quizscore.c](./quizscore.c) for the sourcecode version of this example;



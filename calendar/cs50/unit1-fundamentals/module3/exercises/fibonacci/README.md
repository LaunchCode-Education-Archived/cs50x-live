##### Module 3

# Exercise: Fibonacci

You may have heard of the [Fibonacci Sequence](https://en.wikipedia.org/wiki/Fibonacci_number), a famous math thing. 

The Fibonacci Sequence is an infinite series of integers, beginning with:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
```

Can you figure out what comes next?

If you guessed fifty-five, that's correct! More generally, the pattern is this: Every number in this sequence is 
the sum of the two previous numbers:
* `0 + 1` is `1`
* `1 + 1` is `2`
* `1 + 2` is `3`
* `2 + 3` is `5`
* ...

More formally, we can describe the sequence as a list of numbers, or "terms" labeled term 0, term 1, term 2 ...  
along with the computation necessary to figure out the value of a given term:
* The value of term 0 is: `0`
* The value of term 1 is: `1`
* The value of term n is: (the value of term `n-2`) `+` (the value of term `n-1`)

Hmm, that looks an awful lot like a recursive function, with two base cases and a recursive case.

Your challenge: Implement the function
```
int fib(int n);
```
which uses recursion to compute and return the value of nth term of the Fibonacci Sequence.

A skeleton program is already stubbed out for you in [fibonacci.c](./fibonacci.c)

The finished product should behave like this:

```
$ ./fibonacci 3
2
$ ./fibonacci 10
55
```

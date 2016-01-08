##### Module 2
[Back to Prep for Class 2](../../class2-prep#command-line-arguments)

# Exercise: Previous

One tricky thing about command-line arguments is that our program always receives the arguments as `string`s. Even a program like this:

```
$ pidigits 2016
The 2016th digit of Pi is: 9
```

still receives that `2016` as a string: `"2016"`. Sure, it happens to be text in which every character is numeric. But as far as the compiler is concerned, a string like `"2016"` is no different from any other string like `"puppies"` or `"Biased Pluralism"`. 

But that's no good. We want to be able to treat that number as an actual number, like an `int`, so we can do numbery things with it, like decide how many digits of Pi to calculate.

So how can we recover an integer that is "trapped inside" a string? There is a function called `atoi` which does just that!

`atoi` takes a `string` like `"67"` as input, and (attempts to) return the integer value trapped inside that string. For example:
* `atoi("67")` is `67`
* `atoi("123")` is `123`
* `atoi("puppies")` is `0`
* `atoi("puppies123")` is `0`

Notice that you must provide a string that is totally unamiguously an integer, otherwise you get back `0` as a "sentinal value" representing "Hey I dont know how to interpret this string you gave me."

In [previous.c](./previous.c), we have attempted to write a program that receives an integer from the command-line, and then reports the number that is 1 less.

It should behave like this:

```
$ ./previous 67
The previous number is 66
```

Unfortunately, we forgot to convert our argument to an `int` using `atoi`. That's your job! 

The `<string.h>` library is where `atoi` is defined, so don't forget to include it at the top of the file.

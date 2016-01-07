##### [Back to Prep for Class 2](../../class2-prep)

# Example: Recursion

Check out [sigma.c](./sigma.c), an example of a program that uses a recursive function:

```
int sigma(int m);
```

The `sigma` function takes in `int m` and returns the sum `m + (m - 1) + (m - 2) + ... + 2 + 1 + 0`.
For example, `sigma(4)` is `4 + 3 + 2 + 1 + 0` which is `10`.

In more detail, the process happens like this:
* `sigma(4)`
* `4 + sigma(3)`
* `4 + 3 + sigma(2)`
* `4 + 3 + 2 + sigma(1)`
* `4 + 3 + 2 + 1 + sigma(0)`
* `4 + 3 + 2 + 1 + 0`
* `10`

Build your own copy of `sigma.c`, and then step through the proccess line-by-line by setting some breakpoints and running the CS50 IDE Debugger.

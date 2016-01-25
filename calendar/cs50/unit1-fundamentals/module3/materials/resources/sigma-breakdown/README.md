##### Module 3
[Back to Prep for Class 2](../../class2-prep#recursion)

# Example: Recursion

Let's take one more look at that `sigma` example.

You have already implemented it yourself in the previous Follow-Alongs, but now we'll just summarize what happens.

The `sigma` function receives in `int` called `m`, and returns the following sum: 

`m + (m - 1) + (m - 2) + ... + 2 + 1 + 0`.

For example, `sigma(4)` is `4 + 3 + 2 + 1 + 0` which is `10`.

In more detail, the process happens like this:
* `sigma(4)`
* `4 + sigma(3)`
* `4 + 3 + sigma(2)`
* `4 + 3 + 2 + sigma(1)`
* `4 + 3 + 2 + 1 + sigma(0)`
* `4 + 3 + 2 + 1 + 0`
* `10`

You might find it useful to run your own copy of sigma through the Debugger, set some breakpoints, and use the **step into** button with each recursive call, watching the "call stack" grow with each call, and then shrink with teach `return` statement.

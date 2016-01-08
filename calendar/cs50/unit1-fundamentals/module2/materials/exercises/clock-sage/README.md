##### Module 2
[Go back to Prep for Class 1](../../class1-prep#the-modulo-operator-)
# Exercise: Clock Sage

Use the modulo `%` operator to write a program that prompts the user for the current time, and an amount of hours in the future, and then "predicts" what time it will be in the future:

```
$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 5
My prediction: 5 hours hence, the clock shall strike 8!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 12
My prediction: 12 hours hence, the clock shall strike 3!

$ ./clocksage
What is the hour? 3
How far into the future shall I cast mine eye? (number of hours plz): 25
My prediction: 25 hours hence, the clock shall strike 4!
```

You obviously don't need to worry about minutes, or the distinction between AM and PM. Just pretend the current time is exactly `n` o'clock, and use plain old `int`s to keep track of hours.

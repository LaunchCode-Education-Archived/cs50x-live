##### Module 1 

# Exercise: Countdown

Write a program that performs an epic countdown from a user-specified integer:

```
$ ./countdown
Count down from: 3
3...
2...
1...
BLAST OFF!
```

```
$ ./countdown
Count down from: 5
5...
4...
3...
2...
1...
BLAST OFF!
```

Watch out for negative numbers! If the user gives you a negative number, you should continue prompting until they 
behave more responsibly: 
```
$ ./countdown
Count down from: -2
Count down from: -32
Count down from: 3
3...
2...
1...
BLAST OFF!
```

Or optionally, you can implement the program so that if it receives a negative number, it counts **up**:
$ ./countdown
Count down from: -2
-2...
-1...
BLAST OFF!
```

##### Module 1

# Studio: Guess

#### Part 1

Write a program that gives the user five chances to guess correctly a number between 1 and 10. 
You can simply decide on a "correct answer" and hard-code that number into your code. 
Supposing for example that you decide to make 4 the correct answer, you will probably have a line like this:
```
int answer = 4;
```
somewhere in your code, and your program should behave like this:

```
$ ./guess
I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 5
Wrong!
Guess #2: 9
Wrong!
Guess #3: 4
Correct!
```
```
I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 8
Wrong!
Guess #2: 5
Wrong!
Guess #3: 1
Wrong!
Guess #4: 7
Wrong!
Guess #5: 6
Wrong!
Sorry, you ran out of guesses.
```

#### Part 2

Next, write another program called `guess_unlimited`, which, rather than stopping after five guesses, 
simply continues forever until the user guesses the correct answer.

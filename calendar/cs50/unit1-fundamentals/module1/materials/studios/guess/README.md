##### Module 1
[Go back to Class 2](../../class2)
# Studio: Guess

#### Part 1

Write a program that gives the user five chances to guess correctly a number between 1 and 10. 


Write a "guessing game" program, in which the user attempts to guess correctly a number between 1 and 10.
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

When the user guesses incorrectly, your program should reprompt them to guess again. Notice that you'll need to keep track of how many guesses have happened so far, so that you can properly print `"Guess #<n>:`. 

#### Part 2

Currently we give the user an unlimited number of chances to get the right answer. Let's make things a little more difficult. Write another program called `guess5`, which gives the user only 5 chances to get the answer:
```
$ ./guess5
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

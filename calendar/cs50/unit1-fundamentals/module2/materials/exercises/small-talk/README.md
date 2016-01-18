##### Module 2
[Go to back to Prep for Class 1](../../class1-prep#functions)
# Exercise: Small Talk

Write a program that engages the user in a little idle chit-chat. You should prompt the user with a small-talky
question, and then respond. Your program should respond differently, Goldilocks-style, 
based on the length of the user's answer:
* If the user's answer was too short (fewer than 20 characters), the program gets offended.
* If the user's answer was too long (greater than 50 characters), the program gets bored of listening.
* If the user's answer was just right (between 20 and 50 characters), the program responds positively.

```nohighlight
$ ./smalltalk
How's your day going? fine
Not much of a talker, I see. Maybe elaborate a little more next time.

$ ./smalltalk
How's your day going? Pretty good, I just wrote the code that comprises your existence.
zzzzzz... Huh? Oh yeah, totally. I know what you mean...

$ ./smalltalk
How's your day going? Good. I like your shoes.
Nice! Mine's going well, thanks for asking.
```

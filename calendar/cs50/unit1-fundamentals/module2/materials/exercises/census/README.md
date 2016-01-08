##### Module 2
[Go back to Prep for Class 1](../../class1-prep#functions)
# Exercise: Census

Take a look at [census.c](./census.c), which is a program that acts (sort of) like a government census taker. It basically just prompts the user for some basic info, and then echoes that info back to the console:

```
$ ./census
Hello, thank you for signing up for: The United States
I'll need to get some info from you please...

First name (must be at least 2 characters long):
Henry
Last name (must be at least one 2 characters long):
Thoreau
State of residence (must be at least 2 characters long):
Massachusetts
Email address (must be at least 2 characters long):
hdt@transcendentalists.org

Great thanks, lemme just enter that into my system here...
Henry Thoreau from Massachusetts, at hdt@transcendentalists.org
Excellent! Please pay your taxes in April, or you'll be hearing from us (check your spam folder).
```

It also performs some (very weak) validation on the user input. It will continually re-prompt for a given field until receiving a response that is at least 2 characters long:

```
...
State of residence (must be at least 2 characters long):
M
State of residence (must be at least 2 characters long):
x
State of residence (must be at least 2 characters long):
jabberwocky
Email address (must be at least 2 characters long):
...
```
  
If you look at the source-code for census.c, you might notice that it is **very** repetitive. As you might guess, we did a bunch of copy-pasting, and in fact, all that copy-pasting led to a bug on line 22! We accidentally prompt for "First name" again, even though, by that point, we are supposed to be asking for the user's last name:
```c
22. printf("First name (must be at least one 2 characters long):\n");
23. lastname = GetString();
```

This is a great opportunity to make our code more eloquent! That's where you come in. Instead of repeating the same code block 4 times, let's use a function.  Notice that there is a function above 'main' called 'capitalize'.  This will do the same work as all those redundant loops.  Your job is to replace each loop in `main` with a call to `capitalize`.
  

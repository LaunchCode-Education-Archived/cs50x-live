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
  
Notice lines TODO.  
This loop capitalizes the first letter in each word passed to it.  A similar loop is used again for last name...and then again for state. Do you see it?  This is an opportunity to make your code more eloquent! Instead of repeating this code three times, use a FUNCTION.  Notice that there is a function above 'main' called 'capitalize'.  This will do the same work as all those redundant loops.  Your job is to replace each loop in `main` with a call to `capitalize`.
  

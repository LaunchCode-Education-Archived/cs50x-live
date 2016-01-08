##### Module 2
[Go back to Prep for Class 1](../../class1-prep#functions)
# Exercise: Census

Take a look at [census-0.c](./census-0.c), which is a program that acts (sort of) like a government census taker. It basically just prompts the user for some basic info, and then echoes that info back to the console:

```
$ ./census-0
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

The program also performs some (very weak) validation on the user input. It will continually re-prompt for a given field until receiving a response that is at least 2 characters long:

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
  
If you look at the source-code for census.c, you might notice that it is **very** repetitive. For each "field", we have more or less the same code doing the same thing again and again:
* prompt the user for their info
* call `GetString()`
* check whether their response was valid
* continually re-prompt until the response is valid

As you might guess, we did a bunch of copy-pasting, and in fact, all that copy-pasting led to a bug on line 22! We accidentally prompt for "First name" again, even though, by that point, we are supposed to be asking for the user's last name:
```c
22. printf("First name (must be at least one 2 characters long):\n");
23. lastname = GetString();
```

The repetitiveness also makes it harder to maintain. Let's say we changed our minds about the validation step, and wanted to require all strings to be 8 characters long, instead of 2. We would have to go in and manually change every single `2` to an `8`. Very annoying.

This is a great opportunity to make our code more eloquent! That's where you come in. Instead of repeating the same code block 4 times, let's use a function. 

In [census-1.c](./census-1.c), we have provided a function called `promptAndValidate` with the following signature:
```c
string promptAndValidate(string fieldname);
```

This function accepts a string representing the name of the "field" you care about, e.g. "State of residence" or whatever, and then does all the work of prompting the user, validating their input, and returning the result.

All that's left to do is replace all those repetitive code blocks with some one-liners, making our function do all the work. 

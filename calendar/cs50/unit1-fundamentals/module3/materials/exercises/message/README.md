##### Module 3
[Go back to Prep for Class 1](../../class1-prep#more-practice-with-functions)
# Exercise: Message

Check out [message.c](message.html), the beginnings of a program that will allow the user to 
"send a message" to someone, like so:
```nohighlight
$ ./message
Name of sender: Count Chocula
Name of recipient: Count Vanilla
Message: I like you.

Dear Count Vanilla,

I like you.

Sincerely, 
Count Chocula
```

Notice line 18, in which we call the function `printMessage`, which does all the work of printing the stuff to the console. 
Sounds great, except that `printMessage` does not exist yet. That's your job! 

Start by just thinking about the signature of the function:

1. How many input paramters does it take?
2. What are the types of those parameters?
3. What are some good names to give those parameters?
4. What should the return type be?

After you've written the function signature, go ahead and fill in the body of the function as well.

If you get stuck, here are the answers to the above questions:

**Warning!**


**Spoiler Alert!**


**Don't look until you're actually stuck!**


Answers:

1. 3 parameters
2. they should all be `string`s
3. There's no right answer, but I think here it makes sense to just use the same names we used inside main: `sender`, `recipient`, and `message`
4. return type should be `void`

With these answers, the overal signature looks like:
```c
void printMessage(string sender, string recipient, string message)
```

##### Module 1

[Back to Class 1](../../class1)

# Studio: Donuts

Welcome to your first Studio! 

A Studio is a coding exercise for you to do together with other students during class. The goal is to give you some more practice with the concepts you learned during the Prep Work, and to help get you started on your upcoming problem set. 

You should work on your Studio in pairs. Teams of 3 are also acceptable (but 2 is better). If you need help finding a team, the staff will be facilitating a "match-making" service.

Without further ado, grab a buddy and get started!

### Team Programming

Once you have a team, you will both be working together on one computer (this is why pairs are a little better than 3 people). Go ahead and decide whose computer to use. Only one person at a time will be able to type, but you should both be actively engaged in the proccess. Afer a little while, switch seats and let the other person "drive". Continue switching like this every so often so that each team member gets some time on the keyboard.

Ready? Let's go!

###  Your Assignment

Here's the scenario:

You run a hip new artisanal donut shop, the Loop Hole, which, in its short lifetime, has already rocked the donut market with
numerous "<a href="http://www.forbes.com/sites/martinzwilling/2015/03/19/will-your-business-innovation-disrupt-the-market/#2715e4857a0b58b4f1954f56" target="_blank">disruptions</a>", including:
* a minimalist menu consisting of just one type of donut per day: Manager's Special... always Manager's Special.
* giving customers the option to order fractional amounts of donuts, e.g. 1.7 donuts, please.
* a progressive pay-what-you-want pricing system, in which the customer pays what s/he thinks is a fair price. (Of
course, you do provide a "suggested price".)

Now it's time to implement your latest innovation, an app via which users can pre-order donuts remotely from the
convenience of... the command-line terminal on their computer.

In a file called `donuts.c`, write a program which introduces the flavor of the day, and then takes the user's order. 

Taking their order involves asking two questions:

1. How many donuts do they want to buy?
2. How much do you want to pay per donut?
3. Inform the user of the total cost of their order. Don't forget to include sales-tax, which is, let's say, 5%.

Here's an example of how the finished program should behave:

```nohighlight
$ ./donuts
Welcome to the Loop Hole!
Today's Manager's Special is:
Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries Oops All Berries
How many would you like? 3.33333
How much would you like to pay per donut (suggested price is $4.35 each)? 2.5
Ok, let me prepare that for you....
After tax, your total is: $8.74999125
Thank you for snacking! Loop back around here soon!
```

Notice that the total price `$8.74999125` went way beyond 2 decimal places. Obviously it would be a little nicer to round that to $8.75. Within the next week or two, you'll be introduced to the tools you need to do that sort of thing. But for now, don't worry about it.

(Also, don't be concerned if your program gives an answer with a *slightly* different number of decimal places than the example program above. This is just a precision issue.)

For the Manager's Special, you can make something up (you are the Manager, after all), or just use the Crunch Berries example. Whatever you decide, you can simply hard-code it directly into your code. In other words, the flavor doesn't actually have to change depending on what day it is. The important part of this Studio is the math involved in calculating the cost of the user's order.

*To get started, you can grab a copy of these instructions from Helpful Resources <a href="../../../../../../../helpful-resources/modules/module-1.html#class-1-studio-donuts" target="_blank">here</a>.  They are formatted as comments so that you can put it at the top of your program in the CS50 IDE.  Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments. 

### How to Submit

Ready to submit? Follow these steps:

1. The owner of the computer should take over "driving" and do the typing again.
2. Download your `donuts.c` file from the CS50 IDE, by right-clicking on the file (in the left-side menu) and selecting "Download". You should now have a copy of the file on your computer, probably in your Downloads folder.
2. Log into <a href="http://labs.vocareum.com/main/main.php" target="_blank">Vocareum</a>.
3. You should see a sidebar on the left with some assignments, including *Studio: Donuts*. If not, click on my *My Classes* in the navigation menu at the top.
4. Click on *Studio: Donuts*.
6. Now you are going add your teammates so you can all submit together. **Important Note**: DO NOT click the *Start Solo* button. If you click this, you will not be able to add your teammates to the assignment. You'll have to share the code amongst yourselves via email and then each submit individually, like a bunch of chumps.
7. Use the *Partner* menu at the bottom to add each additional teammate.
6. Each teammate must accept the invite. Everyone open up your own computer and log into your own Vocareum account, where you should see a notification. Click to accept the invite.
7. The driver can now proceed to submit. Click the blue *Finalize Team* button.
9. Click the yellow *My Work* button
10. Click the blue *Upload* button in the lop-left, and upload your `donuts.c` file.
11. Click the red *Submit* button.

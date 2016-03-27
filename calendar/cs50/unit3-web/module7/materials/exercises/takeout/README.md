##### Module 7
[Back to Prep for Class 1](../../class1-prep#php-syntax)
# Exercise: Getting Takeout

Phew, so much hard work, now I'm hungry.  Write a program to help us order takeout food by helping us take down orders.

Your program should do the following:
- Ask the user how many people to get orders for
- Then, for each person:
  - Ask for their name
  - Ask for their order

After this is all done, output each person's name, then their order.  This double-checking step means hopefully no one is gonna order the wrong thing *again*.  **Right?  I'm looking at you, Tom.  I mean, I totally want the same thing every time.  Come on.**

How should we do this?  Some hints:
- if you want help for taking input from the user, try looking <a href="https://youtu.be/abUuRqYUUaY?t=29m50s" target="_blank">here</a>
- if you want to know how to use a php loop with an indexing variable, look <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#php" target="_blank">here</a>
- you should use an associative array to store the data!  This is a good opportunity to learn how to use this important data structure.  For syntax help on associative arrays, look <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#php" target="_blank">here</a> (the same set of notes as the previous link)

example run:
```nohighlight
$ php takeout
How many orders? 3
Order 0 name: Danny
Order 0 order: Beef with Broccoli
Order 1 name: Tom
Order 1 order: Pineapple Fried Rice
Order 2 name: Greg
Order 2 order: Sesame Chicken, LIKE ALWAYS

Total order:
Danny: Beef with Broccoli
Tom: Pineapple Fried Rice
Greg: Sesame Chicken, LIKE ALWAYS
```

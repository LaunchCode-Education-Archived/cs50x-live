# Exercise: Game

In [game.c](./game.c), we have written a program that allows the user to play a "role playing" game in the terminal.

The game behaves like this (it's a little long):

```nohighlight
$ ./game
* * * DUNGEON QUEST * * *

You find yourself in a dungeon ruled by dark magic
Try to escape and reach The Altar of Yezzeron without dying!
But before you arrive, you must boost your Zorph Wisdom to at least level 3,
...or else the Dieties of The Altar of Yezzeron will not accept you!

Current Status: 
You are 3 miles away from The Altar of Yezzeron
Your health is at 100 percent
Your Zorph Wisdom is at level 1

You continue walking through dark corridors...

You health is slowly waning...

Suddenly you discover a potion on the ground!
Do you want to drink it? (y/n)
y
A devilish sickness comes over you...

Current Status: 
You are 2 miles away from The Altar of Yezzeron
Your health is at 55 percent
Your Zorph Wisdom is at level 1

You continue walking through dark corridors...

You health is slowly waning...

Suddenly you discover a potion on the ground!
Do you want to drink it? (y/n)
y
You feel your powers growing!

Current Status: 
You are 1 miles away from The Altar of Yezzeron
Your health is at 45 percent
Your Zorph Wisdom is at level 2

You continue walking through dark corridors...

You health is slowly waning...

Suddenly you discover a potion on the ground!
Do you want to drink it? (y/n)
y
You feel your powers growing!

You reach The Altar of Yezzeron! The Dieties welcome you to their ethereal realm, and you join them in immortality!
```

This is a great example of a situation in which `struct`s are useful. Throughout the code, we make constant use of a `player` struct, which is a data model representing the character trekking through the dungeon. The structure keeps track of 3 things:

1. current level of health (between 0 and 100)
2. current distance from the destination (aka The Altar of Yezzenon)
3. current skill level (aka Zorph Wisdom)

Together, these 3 aspects comprise everything we need to represent the situation of the player. And any context in which we care about one of these values is likely to be a context in which we care about the other 2 as well. So it makes sense to package them all together into a single datatype. Without using a `struct` here, we would have to have 3 loose variables floating around, and our functions would have to accept 3 arguments as inputs instead of just 1.

### Your Assignment

There is one thing missing in the code: we never actually defined the `player` struct. That's your job! See if you can implement the definition so that the game compiles and runs. We have left a `//TODO` where you can place your code.


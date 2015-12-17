##### Module 5
[Back to Prep for Class 1](../../class1-prep)
# Exercise: The Beacons of Gondor

Gondor calls for aid!  Will Rohan answer?

Inspired by the hit Academy Award(TM) winning film The Lord of The Rings: Return of the King, we’ve provided an exercise where, in order to complete it, you must write code to iterate through a singly-linked list.

In the movie, the nation of Gondor has a warning beacon system where each beacon is a large bonfire, and is visible from one other beacon.  In order to send an alert to other nations, a soldier lights the first beacon, which causes the second beacon to be lit, and so on, until all of them are lit, signaling a call for help.

It can be visualized like this:
```
Current status of the beacons of Gondor:
* _ _ _ _ _ _ _ _ _
```
In the above lines, a "*" indicates a lit beacon, and a "_" indicates one that is not lit.  Only one beacon is currently lit.

We’ve already provided code for a singly-linked list implementation, where each node represents one beacon of Gondor: each node has a bool to indicate whether it is lit or not, and a pointer to the next visible beacon.

The code provided initializes a linked list where the first beacon is already lit.  Write the code to iterate through the rest of the list, lighting each beacon one-by-one.

More specifically:
- initialize a pointer to a beacon object
- use a while loop to check each beacon in the list
- set the "isLit" variable to true for each beacon
- remember to "move" the pointer at the end of every iteration!

Output from a correct implementation should look like this:
```
$ ./beaconsofgondor
Invaders! Light the beacons of Gondor!
Current status of the beacons of Gondor:
* _ _ _ _ _ _ _ _ _
Current status of the beacons of Gondor:
* * * * * * * * * *
The beacons are all lit! Our allies have been alerted!
```

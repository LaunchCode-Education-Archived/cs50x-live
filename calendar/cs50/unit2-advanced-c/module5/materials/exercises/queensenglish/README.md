##### Module 5
[Back to Prep for Class 1](../../class1-prep#linked-lists)
# Exercise: Queen’s English

One of the fundamental strengths of linked lists is the ability to insert items into the middle of the list quickly, in O(1) time.  Let’s practice making insertions into a linked list.

In this exercise, we’ll ask the user for a string, then output that string in “Queen’s English,” where every “o” in the original string is now followed by a “u”.

In order to do this efficiently, we’ll represent a string as a singly linked list. Up until now, we’ve been representing strings as arrays, but for operations like the one we’re doing, where we don’t know the final size of the string beforehand, linked lists can often be useful.

We’ve provided [code](queensenglish.html) that:
- implements a singly linked list of chars
- translates a given `string` to this linked list representation
- translates a linked list representation to a `string`, given the first node in the list

What do you need to do?  Finish the program by writing code to loop through the linked list and, whenever you see an “o”, insert a new node with a “u”.  The code we’ve provided will take care of outputting your modified string.  You can assume the entire input is in lower-case, so there’s no need to check for upper-case “O”.

An example run of the completed code:
```nohighlight
$ ./queensenglish
Input string?: i love the color yellow
Charlatan!  I use the Queen’s English:
i louve the coulour yellouw
```

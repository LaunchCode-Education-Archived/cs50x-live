##### Module 5

# Studio: Secret Santa

(TODO add more explanation. and maybe change the rules bc currently they dont necessarily require the solution
I'm going for, a linked list that cycles)

### Part 1

Write a program that simulates some adorable people giving each other gifts, Secret-Santa style: each person gives a 
gift to someone, and receives a gift from someone else. 

Your program should behave like this:

```
./secret-santa
Name of person (q to stop): David Malan
Name of person (q to stop): Andi Peng
Name of person (q to stop): Doug Lloyd
Name of person (q to stop): q
What gift does David Malan give? a kazoo
What gift does Andi Peng give? a linkedIn connection
What gift does Doug Lloyd give? homemade pesto
Twas the night before the day ...
... in the morning everyone rushed downtairs to rip open their boxes:
Andi Peng received a kazoo! Thanks Santa!
Doug Lloyd received a linkedIn connection! Thanks Santa!
David Malan received homemade pesto! Thanks Santa!
```

Use a linked-list of `typedef struct person`, which contains two fields:
* `char* name`
* `char* gift_given`
* `char* gift_received`

### Part 2: Not-so-secret Santa

Let's out those santas. Turn your singly-linked list into a doubly-linked list so that each node in your list
contains a pointer back to the previous node, i.e. the giver fo the gift. Then your program can run like so:

```
./secret-santa
Name of person (q to stop): David Malan
Name of person (q to stop): Andi Peng
Name of person (q to stop): Doug Lloyd
Name of person (q to stop): q
What gift does David Malan give? a kazoo
What gift does Andi Peng give? a linkedIn connection
What gift does Doug Lloyd give? homemade pesto
Twas the night before the day ...
... in the morning everyone rushed downtairs to rip open their boxes:
Andi Peng received a kazoo! Thanks David Malan!
Doug Lloyd received a linkedIn connection! Thanks Andi Peng!
David Malan received homemade pesto! Thanks Doug LLoyd!
```


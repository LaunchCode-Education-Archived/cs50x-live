##### Module 5

[Back to Class 1](../../class1)

# Studio: GetString() with doubly linked lists

In [this resource](../../exercises/getstring-ll), you saw an implementation of GetString() that used a singly linked list. In this studio, you will modify this implementation to use a doubly linked list.

Recall that in a singly linked list, each node has a pointer to the next node in the list. For a doubly linked list, each node has a pointer to the next node in the list as well as the previous node in the list.

Your first step should be to modify the [given code](getstring.html) to use a doubly linked list instead of a singly linked list. Update the node definition to contain a second pointer called `prev`. Then go through the code and make sure that when nodes are created and added to the list, the `prev` pointer is set correctly.

Once you have a doubly linked list set up, we can think about ways to make this implementation even more efficient. Right now when a node is added to the end of the list, we have to find the end of the list first before we can add the node. This means we have to iterate through each node in the list every time we want to add a new node, which is not very efficient.

Instead, consider an implementation where each node is added to the *beginning* of the list. This is called *prepending* a node. Modify the code to prepend nodes to the list instead of appending them. You may want to create a new function for this purpose.

One effect of prepending nodes is that now our string will be stored in reverse. The last character will be the first node in the list (or the *head* of the list), and the first character will be the last node of the list. This means that when we are converting our linked list to a string we need to iterate through it *backwards*. Update your code to perform this backwards traversal of the list. Notice that we would not be able to do this if we did not use a doubly linked list!

One way to make this backwards traversal even faster is to create a *tail* pointer. Much like we have a *head* pointer that points to the beginning of the list, a *tail* pointer points to the end of the list. This makes it much faster for us to iterate backwards through the list. Try it out!

Once you are finished, submit your solution in a file called `GetString.c`

Here's what your finished result should look like:

```nohighlight
$ ./GetString
Please give me a string:
taco
Thanks for the taco!
```

##### Module 5
[Back to Prep for Class 1](../../class1-prep)
# Resource: GetString with a linked list

In [this week's lecture](http://cdn.cs50.net/2015/fall/lectures/5/m/notes5m/notes5m.html#cs50_library), David goes through how the `GetString()` function is implemented in the cs50 library. In this resource, we will present an alternate implementation of `GetString()` that uses a linked list to track which characters are entered by the user, then converts this linked list into a string. The benefit of this approach is that we no longer need to reallocate memory if the buffer becomes to small to hold the string. The linked list can simply allocate memory for each node (and character) as it is added to the list.

First, examine the definition of the `node` structure:

```c
typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

Since there is only one link to a node (called *next*) this is a **singly-linked list**. This detail is important since later we will need to add nodes to this list for each character that is given by the user.

Now let's take a look at the `GetString()` function:

```c
//The head of our linked list
node* head = NULL;

string GetString(void)
{

    // number of chars actually in buffer
    unsigned int n = 0;

    // character read or EOF
    int c;
	...
```

The first part of the function starts out the same, by declaring a global variable called `head` that is used to point to the start of our linked list, and two local variables that are used to track the characters being input as well as the total number of characters.

```c
while ((c = fgetc(stdin)) != '\n' && c != EOF)
{
	//append the character to our linked list
	append(c);
	//update the number of characters
	n++;
}
```

The while loop definition is exactly the same as it was in the original implementation. The body of the loop is greatly simplified. It calls a function that appends the character to the end of the list and increments the character counter. Let's take a look at the `append` function next:

```c
void append(int c)
{
    //create a new node
    node* newNode = malloc(sizeof(node));
    newNode->n = c;
    newNode->next = NULL;
    
    //if the list is empty, our node is the only node
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        //iterate through the list until we find the end
        node* curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        
        //append the new node to the end of the list
        curr->next = newNode;
    }
}
```

Here's where things get interesting. The first thing `append` does is create a new node that contains the given character. We then have to add this node to our list, but we have to be careful. If the list is empty then `head` will be NULL which could lead to an error if we aren't careful. To accommodate this we check to see if the list is empty (by comparing `head` to NULL) and setting `head` if necessary.

If the list is not empty, then we want to append this character to the end of the list. To do this, we first need to find the end of the list. Recall that each node has a pointer to the next node in the list. This means that the last node in the list will not have anything to point to, so it will point to NULL. Our loop progresses through the list looking for this null value, then appends the new node to the end of our list.

Now let's return to GetString() and finish things up:

```c
// return NULL if user provided no input
if (n == 0 && c == EOF)
{
	return NULL;
}

//create a string to hold our result
string minimal = malloc((n + 1) * sizeof(char));

//iterate through the list, adding each character to the string
node * curr = head;
for(int i = 0; i < n; i++)
{
	minimal[i] = curr->n;
	curr = curr->next;
}

// terminate string
minimal[n] = '\0';

// return string
return minimal;
```

Now that we have a linked list that contains each character, we need to convert our linked list into a string. We first perform a check to see if the string is empty, much like the check that is performed in the original implementation of GetString().

Next, we allocate some memory for our string based on the number of characters. We need to remember to include space for our string termination character.

Finally, we loop through our list, adding each character to the string. Once the loop is finished, all we need to do is add the string termination character and viola! Our string is finished and returned.
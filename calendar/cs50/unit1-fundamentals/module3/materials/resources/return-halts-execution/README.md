##### Module 3

# `return` statements halt execution

We’ve already seen `return` statements when writing code, and you may or may not have noticed that after a `return` statement executes, no more code in its function executes.  Because of this we say that `return` statements “halt execution”.

What does this mean more concretely, and how is it useful?

Here’s an example in action.

Let’s say there is a group of people, and they all want to go see a show.  The show might be dangerous, so it’s only for ages 18 and up!  We could use a function that takes in an array of ages and checks if the group can get in; if anyone in the group is too young, the whole group is barred.  We could do it like this:

```
bool allOldEnough(int ages[], int numPeople)
{
    for (int i = 0; i < numPeople; i++){
        if (ages[i] < 18){
            printf(“Person %i isn’t old enough, they’re only %i!\n”, i+1, ages[i]);
            return false;
        } else {
            printf(“Person %i is old enough.”, i+1);
        }
    }
    return true;
}
```

If we execute that piece of code, we can see that after we find a single person under 18, we’ll no longer keep checking ages, or printing that we are; this is because the `return` statement we used when we found a person too young stopped the execution of the other code.

This example also illustrates that using the ability of `return` statements to stop code execution can be helpful; as soon as we found someone too young, we didn’t have to run any more code, potentially saving us a lot of time.  This is a common use of the ability for `return` to stop code execution: when we’re searching for one thing in a list, and can checking the rest of the list when we find it.

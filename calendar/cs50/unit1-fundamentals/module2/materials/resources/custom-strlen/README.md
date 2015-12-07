##### Module 2

[Back to Class 2 Prep](../../class2-prep)

# Resource: Custom strlen

We've already seen the `strlen` function, which returns the length of a `string`, in other words, the number of characters 
inside the string.

```
int len = strlen("Hello");
// the value of len is now 5
```

How does `strlen` figure out the answer?

Well, we now know enough about `strings` that we can actually write our own version of `strlen`. 

We will call our function `charCounter`. It will take a `string` parameter as input, and it will return an `int`

```
int charCounter(string theString)
{
    // TODO figure out how many chars are in theString
}
```

To figure out the length of the string, we can simply inspect each of its characters, one by one, until we find that special
character, `'\0'`, the `nul-terminator`, which is the last `char` in every `string` and exists solely to signify the fact that "hey. this is the end of the string right here."

We'll represent the answer with a variable, `counter`, which we initialize to `0`. And now each time we encounter a new character, we simply increment `counter` by `1`.

```
int charCounter(string theString)
{
    int counter = 0;
    
    // until we see '\0', the nul terminator...
    while(theString[counter] != '\0')
    {
        // ... continue incrementing counter
        counter++;
    }
    
    return counter;
}
```

Remember that `counter++` is just a fancy way of incrementing `counter` by `1`. These three statements are all equivalent:
* `counter++;`
* `counter += 1;`
* `counter = counter + 1;`

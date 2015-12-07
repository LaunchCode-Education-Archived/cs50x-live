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

Well, we actually know enough about `strings` now that we can do it ourselves. Let's write our own "custom" version of the `strlen` function.

Let's name our function `charCounter`. It will take a `string` parameter as input, and it will return an `int`.

```
int charCounter(string theString)
{
    // TODO figure out how many chars are in theString
}
```

To figure out the length of the string, we can simply inspect each of its characters, one by one, keeping track of the total as we go along, until we've reached the end. 

We'll represent the answer with a variable, `counter`, which we initialize to `0`. And for each new character that we encounter, we simply increment `counter` by `1`.

We know we've reached the end of the string when we find that special character, `'\0'`, the `nul-terminator`, which is the last `char` in every `string` and exists solely to signify: "Hey, this right here is the end of the string."


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

<aside class=notes>
Remember that `counter++` is just a fancy way of incrementing `counter` by `1`. These three statements are all equivalent:
* `counter++;`
* `counter += 1;`
* `counter = counter + 1;`
</aside>

Take a look at [customstrlen.c](./customstrlen.c) for a complete example program that implements this function, and invokes it from inside `main`, resulting in behavior like this:

```
$ ./customstrlen
Give me a string: Don't be silly!
That string contains 15 characters!
```

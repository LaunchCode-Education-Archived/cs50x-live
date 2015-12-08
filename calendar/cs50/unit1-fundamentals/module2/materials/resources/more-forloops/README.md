##### Module 2

[Back to Class 2 Prep](../../class1-prep)

# Resource: More for-loops


In most of their examples, CS50 iterates overs strings like this:

```
for (int i = 0, n = strlen(my_str); i < n; i++) 
{
    char c = my_str[i];
}
```

The thing that makes this example different from most "normal" `for-loops` you've seen is that in this case, we initialize
two variables rather than just one. Namely, we initialize `i` to `0`, and `n` to `strlen(my_str)`.

You might remember that they do this because it is more efficient to initialize `n` once at the beginning rather than
calling `strlen` every time around the loop. 

This explanation probably makes sense, but nevertheless, you might still feel a little hazy on the details, because even
vanilla for-loop syntax is very dense and cryptic.

The first thing to note is that you could accomplish the same exact thing like this:

```
int n = strlen(my_str);
for (int i = 0; i < n; i++) 
{
    char c = my_str[i];
}
```

Here we have a completely "normal" loop, immediately preceeded by a completely normal variable declaration.

And then say, but as long as we're here, this is a good example of how you can do fancy things with for-loops. 
You can initialize multiple variables, you can do different things instead of `i++`, etc.


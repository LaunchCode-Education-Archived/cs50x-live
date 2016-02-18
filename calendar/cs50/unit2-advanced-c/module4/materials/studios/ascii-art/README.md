##### Module 4

[Back to Class 2](../../class2)


# Studio: Ascii Art

Today we're going to make "pictures" out of text symbols.

Specifically, you will write a program that reads in CSV files, interprets their coded instructions, and writes out text files that form pictures.

Here's how it works: your output file will have two "colors", black and white. For each black "pixel", your file will have a `'#'` character. For each white "pixel" your file will have a space `' '` character. 

The input CSV file simply specifies, for each line of text, which pixels are black.

One such input file is [secretimage.csv](./secretimage.csv). Contained within these numbers and commas is a masterpiece image. What does it look like?? You'll have to write the program to find out! (You may have to zoom out and make the font size small to see the full majesty of the secret picture. You can do this in the IDE by going to 'View' from the top menu and selecting 'Font Size', then 'Decrease Font Size').

Let's walk through a quick example. Say we have an input file that looked like this:
```nohighlight
0,2
1
1,2
```
This specifies that the first row of out output file should have black pixels at x positions 0, and 2. The rest of the pixels should be white.

The next row should have a black pixel at position 1, and the rest should be white.

And the third row should be black at positions 1 and 2, elsewhere white.

So ultimately, our output file should look like this:
```nohighlight
# #
 #
 ##
```

Your program should prompt the user for the name of the input file and output file, and then proceed to "draw the picture" in the output file. Running it looks like this:

```nohighlight
$ ./asciiart
What is the name of the file I should read from?
secretimage.csv
What is the name of the file I should write to?
result.txt
Done! If you open up result.txt you should now see a cool image!
```

In [asciiart.c](./asciiart.html) we have given you some starter code. Most significantly, we have provided a function called `extractNumbers`, which takes as input a string of comma separated integers, and returns an actual array of `int`s. For example: 
```c
extractNumbers("3,22,401")
``` 
yields 
```c
[3, 22, 401]
```

Actually, that's a bit of a white lie. The function really returns **two** things. It returns an array of `int`s, AND an `int` indicating how long the array is (kind of like the `argc` and `argv` values in programs that accept command-line arguments).

You should now be scratching your head, wondering how a function can return 2 things. Since when is that possible?? 

Let's look at the full function signature:
```c
csvLine extractNumbers(char* line);
```
Turns out we are returning something called a `csvLine`. What the heck is that? It is a `struct` that we have defined precisely for this purpose: to cluster together the 2 pieces of information that you will need regarding each line from your CSV file: 

1. `hashLocations`: an array of all the x-positions in this row which should be `'#'` characters
2. `length` an int specifying the length of the the `hashLocations` array

The definition of `csvLine` looks like this:
```c
typedef struct {
    int* hashLocations;
    int length;
} csvLine;
```

Remember that an array is actually just a pointer under the hood. Hence, we have defined the type of `hashLocations` as `int*` rather than what you might have expected, `int[]`.

In `main`, we have provided detailed pseudocode for guidance.

We suggest you use the [smiley.csv](./smiley.csv) first to make sure your code is working correctly, before moving to the secret image. When your code works, it should reveal a nice smiley face :)

This is a tricky one, good luck!

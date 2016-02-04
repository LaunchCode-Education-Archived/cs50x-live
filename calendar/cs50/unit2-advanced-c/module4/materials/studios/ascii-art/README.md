##### Module 4

[Back to Class 2](../class2)


# Studio: Ascii Art

Today we're going to make "pictures" out of text symbols.

Specifically, you will write a program in a file called `asciiart.c` that reads in CSV files, interprets their coded instructions, and writes out text files that form pictures.

Here's how it works: your output file will have two "colors", black and white. For each black "pixel", your file will have a string made of two hash `"##"` characters. For each white "pixel" your file will have a string made of two space `"  "` characters. 

The input CSV file simply specifies, for each line of text, which pixels are black.

One such input file is [secretimage.csv](./secretimage.csv). Contained within these numbers and commas is a masterpiece image. What does it look like?? You'll have to write the program to find out!

Let's walk through a quick example. Say we have an input file that looked like this:
```
0,2
1
1,2
```
This specifies that the first row of out output file should have black pixels at x positions 0, and 2. The rest of the pixels should be white.

The next row should have a black pixel at position 1, and the rest should be white.

The third row should be black at positions 1 and 2, elsewhere white.

So ultimately, our output file should look like this:
```
# #
 #
 ##
```

Your program should prompt the user for the name of the input file and output file, and then proceed to "draw the picture" in the output file. Running it looks like this:

```
$ ./asciiart
What is the name of the file I should read from?
secretimage.csv
What is the name of the file I should write to?
result.txt
Done! If you open up result.txt you should now see a cool image!
```




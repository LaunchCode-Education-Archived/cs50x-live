##### Module 4

[Back to Class 2](../class2)


# Studio: Ascii Art

Today we're going to make "pictures" out of text symbols.

Specifically, you will write a program that reads in CSV files, interprets their coded instructions, and writes out text files that form pictures.

Here's how it works: your output file will have two "colors", black and white. For each black "pixel", your file will have a string made of two hash `"##"` characters. For each white "pixel" your file will have a string made of two space `"  "` characters. 

The input CSV file simply specifies, for each line of text, which pixels are black.

One such input file is [secretimage.csv](./secretimage.csv). Contained within these numbers and commas is a masterpiece image. What does it look like?? You'll have to write the program to find out!

For example, the first two rows of secretimage.csv look like this:
```
2,3,4,5
1,6
```
This means that the first row of your output file should have black pixels at x positions 2, 3, 4 and 5. The rest of the pixels should be white.

So your output file's first two rows will look like this:
```
    ########
  ##        ##
```


##### Module 4
[Back to Class 1](../../class1)
# Studio: Word Grid Stretch

The word grid is back with a vengence!

Just like last week, this studio involves taking some strings from the user, and then printing them back out in a transformed way.

Today, your program will apply a "stretch" factor to the grid of letters, making it larger. 

It is easiest to explain via example. The finished program should behave like this:

```nohighlight
$ ./wordgridstretch goat crab bear
Your word grid currently looks like this:
goat
crab
bear
Now I will stretch it out. How much should I stretch by?
3
After stretching by 3, you now have this!
gggoooaaattt
gggoooaaattt
gggoooaaattt
cccrrraaabbb
cccrrraaabbb
cccrrraaabbb
bbbeeeaaarrr
bbbeeeaaarrr
bbbeeeaaarrr
```

That's what we mean by "making the grid larger". 

### Break it Down

To get started, we suggest you try two simpler versions first:

1. A program that just stretches the grid vertically:
  ```nohighlight
  $ ./stretchvertical goat crab bear
  Your word grid currently looks like this:
  goat
  crab
  bear
  Now I will stretch it out vertically. How much should I stretch by?
  3
  After stretching by 3, you now have this!
  goat
  goat
  goat
  crab
  crab
  crab
  bear
  bear
  bear
  ```

2. A program that just stretches the grid horizontally:
  ```nohighlight
  $ ./stretchhorizontal goat crab bear
  Your word grid currently looks like this:
  goat
  crab
  bear
  Now I will stretch it out horizontally. How much should I stretch by?
  3
  After stretching by 3, you now have this!
  gggoooaaattt
  cccrrraaabbb
  bbbeeeaaarrr
  ```
  
Only after writing these little bad boys should you start to think about how to combine both steps into one bigger badder boy.


### Validation

Don't forget to validate the user's input. Specifically, you'll want to ensure:

* that the user gave you exactly 3 words as command-line arguments
* that those words are all the same length
* that the user provides a non-negative stretch factor 
 

### Submitting 

You don't have to submit `stretchvertical.c` and `stretchhorizontal.c`. You only have to submit `wordgridstretch.c`.

*You can grab a copy of these instructions from Helpful Resources <a href="../../../../../../..//helpful-resources/modules/module-4.html#class-x-studio-word-grid-stretch" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.

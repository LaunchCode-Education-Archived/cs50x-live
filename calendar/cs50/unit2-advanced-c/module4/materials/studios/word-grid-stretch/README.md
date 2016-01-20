##### Module 4

# Studio: Word Grid Stretch

Revenge of the word grid!

Just like last week, this studio involves taking some strings from the user, and then printing them back out in a transformed way.

Today, your program will apply a "stretch" factor to the grid of letters, making it larger. 

It is easiest to show with an example. The finished program will behave like this:

```nohighlight
$ ./wordgridstretch sun yes ear
You word grid currently looks like this:
sun
yes
ear
Now I will stretch it out. How much should I stretch by?
4
After stretching by 4, you now have this!
ssssuuuunnnn
ssssuuuunnnn
ssssuuuunnnn
ssssuuuunnnn
yyyyeeeessss
yyyyeeeessss
yyyyeeeessss
yyyyeeeessss
eeeeaaaarrrr
eeeeaaaarrrr
eeeeaaaarrrr
eeeeaaaarrrr
```

That's what we mean by "making the grid larger". 

You may assume that:

* the user will always give you exactly 3 words as command-line arguments
* that those words will all be the same length
* that the user will provide a non-negative stretch factor 
 
Obviously it would be foolish to make those assumptions in real life. But to save time today, we don't want you to have to worry about validating the user's input. (But if you did decide to add validation, you could do it in your sleep by now, right? ;))

To get started, we suggest you try two simpler versions first:

1. A program that just stretches the grid vertically:
  ```nohighlight
  $ ./stretchvertical sun yes ear
  You word grid currently looks like this:
  sun
  yes
  ear
  Now I will stretch it out. How much should I stretch by?
  4
  After stretching by 4, you now have this!
  sun
  sun
  sun
  sun
  yes
  yes
  yes
  yes
  ear
  ear
  ear
  ear
  ```

2. A program that just stretches the grid horizontally:
  ```nohighlight
  $ ./stretchhorizontal sun yes ear
  You word grid currently looks like this:
  sun
  yes
  ear
  Now I will stretch it out. How much should I stretch by?
  4
  After stretching by 4, you now have this!
  ssssuuuunnnn
  yyyyeeeessss
  eeeeaaaarrrr
  ```
  
After writing these little badboys, then you can think about how to combine both steps into one big badderboy.

You don't have to submit `stretchvertical.c` and `stretchhorizontal.c`. You only have to submit `wordgridstretch.c`

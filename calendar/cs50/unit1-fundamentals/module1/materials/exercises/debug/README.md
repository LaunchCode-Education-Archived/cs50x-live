##### Module 1

# Exercise: Debug

This exercise doesn't involve writing any code. 

Instead, we'll have you step through some pre-written code using the Debugger, just to get comfortable with it.

And as a bonus, it's quite possible that the proccess of stepping through these examples and
watching what happens might inadvertently help clear up some lingering confusion
you might have accumulated over the course of learning so many new concepts in such a short time span.

#### Instructions:
1. In your IDE, navigate to the place where you normally do exercises. (TODO, more specific?)
2. Instead of creating a new `.c` file like you normally do, download all of the official source code
from Week 1 by running the following commands in your terminal:
```
$ wget http://cdn.cs50.net/2015/fall/lectures/1/w/src1w.zip
$ wget http://cdn.cs50.net/2015/fall/lectures/1/f/src1f.zip
$ unzip src1w.zip src1f.zip
$ rm -f src1w.zip src1f.zip
$ ls
```
3. You should now have two new folders, `src1w/` and `src1f/`. If you look inside, you should see 
a bunch of .c files!
4. You might notice that the names of some of them look familiar. Indeed, these are the same programs you
have been creating by following-along with David Malan's Walkthrough videos.
5. Now the fun part: 
  1. Open up `adder.c`
  2. Add a breakpoint (little red dot) on line 17 (the first line inside of `main`) by clicking to the left of the number 17
  3. Run the program through the debugger by clicking the green `Debug` button at the top of the IDE.
  4. You should see that the program is paused at line 17. Advance to the next line by clicking the `Step Over`
  icon in the top right (next to the blue `Play / Pause` icon. 
  5. Continue stepping over each line and observe the changing values of variables in the right-hand panel.
  6. A couple times, you'll have to go back to the terminal and enter an integer, because the program is expecting 
  an integer from the user
  7. Hopefully this is giving you a more tangible feel for what happens when `adder` executes. 
  Feel free to tinker with the program and run it again.
6. Repeat this proccess for each of the source code files you just downloaded.

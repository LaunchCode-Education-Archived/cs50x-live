##### Module 4
[Back to Prep for Class 2](../../class2-prep#files-hex)
# Exercise: Restaurant Menus

Your job here is to write a program that reads in a text file full of menu items, and produces a nice "restaurant menu" on the console, by adding:
* a company slogan (you can make something up)
* a title for the menu. Something awesome like `"MENU:"` 
* each of the menu items should be numbered.

The input files should look like this:

```nohighlight
Turkey Club
Grilled Chicken
Philly Cheesesteak
```
Some example input files are provided in ([exampleMenu.txt](./exampleMenu.html) and [goodBurger.txt](./goodBurger.html)); 

Program usage should look something like this:

```nohighlight
$ ./displayMenu exampleMenu.txt
Welcome to Better Burger, way better than Good Burger!
MENU:
1) Turkey Club
2) Grilled Chicken
3) Philly Cheesesteak
```

The `[fgets]`(https://reference.cs50.net/stdio.h/fgets) function will be very helpful. You can use this function to read in each line of your file, one line at a time.

Here's an example. If you have declared a `string` variable, called, say `line`, you can "fill" it with data by calling `fgets` like so:
```c
fgets(line, 150, yourfile);
```
The `150` specifies that you want to stop reading after 150 bytes. But the cool part about `fgets` is that **if** it encounters a new line `\n` character at any point, even some time before 150 byes, it will immediately stop and return the data up until that point. This means you will receive exactly one line of text from the file!

After you run your program and create a file, it may not appear in the file browser right away. To find it, right click the folder that the program is in and select "Refresh." The file that you created should then appear. Alternatively, you can use ```ls``` in the terminal.

We've provided some starter code for you in ([displayMenu.c](./displayMenu.html)), but it's pretty minimal.



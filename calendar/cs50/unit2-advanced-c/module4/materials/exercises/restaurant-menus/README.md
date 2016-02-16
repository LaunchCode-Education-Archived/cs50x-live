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
Some example input files are provided in ([exampleMenu.txt](./exampleMenu.txt) and [goodBurger.txt](./goodBurger.txt)); 

Program usage should look something like this:

```nohighlight
$ ./displayMenu exampleMenu.txt
Welcome to Better Burger, way better than Good Burger!
MENU:
1) Turkey Club
2) Grilled Chicken
3) Philly Cheesesteak
```

The `fgets`(https://reference.cs50.net/stdio.h/fgets) function (short for "file get string") will be very helpful. You can use this function to read in each line of your file, one line at a time

Here's an example. 

Suppose you have previously declared a `char*` variable, or an array of `char`s, 

like this:
```c
// allocate memory for a string of length 256
char* line = malloc(sizeof(char) * 256);
```
or like this;
```c
// declare an array of 256 chars
char line[256];
```

the `line` variable above starts off "empty", but you can then "fill" `line` with data by calling `fgets`, like so:
```c
fgets(line, 256, yourfile);
```
This will read in 256 byes of data from `yourfile` and copy that data into the address pointed to by `line`. 

One nice feature of `fgets` is that **if** it encounters a new line `\n` character at any point, even some time before 256 bytes, it will immediately stop and return only the data up until that point. This means you are guaranteed to receive exactly one line of text from the file. (That is, unless the line is longer than 256 bytes. But this almost certainly won't be true. Most text files have a max line-length of around 75 characters. We sort of arbitrarily picked 256 here as a reasonable way of ensuring that we've got our bases covered.)

When you use `fgets` it will read content from the file until either the specified number of bytes, a newline, or the end of the file (EOF) is reached. You'll probably want to write code that checks to see if the end of the file has been reached or not. One example of how you might check for the end of the file is as follows:

```c
while(fgets(...) != NULL)
{
	//do stuff
}
```

In the above example, the loop will continue to run as long as there is more information to be read. As soon as the end of the file is reached, `fgets` will return NULL and the loop will stop.

After you run your program and create a file, it may not appear in the file browser right away. To find it, right click the folder that the program is in and select "Refresh." The file that you created should then appear. Alternatively, you can use ```ls``` in the terminal.

We've provided some starter code for you in ([displayMenu.c](./displayMenu.md)), but it's pretty minimal.



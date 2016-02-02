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

How can you do this? It woul be nice if we had a function called, say, `fgetline`, which returns the next line of text from a file. Unfortunately, we don't have that function at our disposal.

Here's an alternative game plan:

1. Read the entire contents of the file into one big string using `fgets`. (This function takes an argument specifying how many bytes to read, so in this case we just want to plug in a very large number, so that it reads the whole file.)
2. Loop through your string, printing each character as you go, keeping an eye out for new-line characters
3. Each time you encounter a new-line characters, you know you've hit a new line, so it's time to print another `"2) "` or `"3) "`, etc

We've provided some starter code for you in ([displayMenu.c](./displayMenu.html)), but it's pretty minimal.





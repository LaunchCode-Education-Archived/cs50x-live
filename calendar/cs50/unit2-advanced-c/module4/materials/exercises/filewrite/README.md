##### Module 4
[Back to Class 2 Prep](../../class2-prep#files-hex)

# Exercise: Good Burger

Here we'll finish a basic program to show the user a menu from a fast food restaurant (named "Good Burger"), then take down their order, and write it into a file.

We already started the program for you!  The code is in [goodburger.c](./goodburger.html).

The code to show the menu has already been written, you just need to fill in the code to:
- open a file
- write their orders in
- close the file

The program should run like this:
```nohighlight
$ ./goodburger
Welcome to Good Burger! Can I take your order?
MENU:
Item 0: Water
Item 1: Soda
Item 2: Cheeseburger
Item 3: Fries

How many items? 
4
Which menu item would you like (0, 1, 2, or 3)?
2
Which menu item would you like (0, 1, 2, or 3)? 
3
Which menu item would you like (0, 1, 2, or 3)?
0
Which menu item would you like (0, 1, 2, or 3)?
2
```

The resulting output file should look like this:
```nohighlight
Cheeseburger
Fries
Water
Cheeseburger
```

You can call your output file `order.txt`.

You will need to use the following functions:
* `fopen`
* `fclose`
* `fputs`

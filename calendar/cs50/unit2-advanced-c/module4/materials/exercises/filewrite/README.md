##### Module 4

# Good Burger

Here we'll finish a basic program to show the user a menu from a fast food restaurant (named "Good Burger"), then take down their order, and write it into a file.

We already started the program for you!  The code is in [this file](./goodburger.c).

The code to show the menu has already been written, you just need to fill in the code to:
- open a file
- write their orders in
- close the file

The program should run like this:
```
$ ./goodburger
Welcome to Good Burger! Can I take your order?
MENU:
Item 0: Water
Item 1: Soda
Item 2: Cheeseburger
Item 3: Fries

How many items? 3
Which menu item would you like? 2
Which menu item would you like? 3
Which menu item would you like? 0
```

The resulting output file should be formatted like this:
```
Order 1) Fries
Order 2) Cheeseburger
Order 3) Water
```

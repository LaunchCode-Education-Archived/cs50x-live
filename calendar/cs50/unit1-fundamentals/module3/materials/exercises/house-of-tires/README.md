##### Module 3
[Back to Prep for Class 2](../../class2-prep#compiling-header-files)

# Exercise: Delmar House of Tires

Here we have a program for a restaurant called Delmar House of Pizza. The program asks the user how many slices of pizza they want, then tells them how many pizzas they have to order, and how much they have to pay for them.

We have a similar store that sells tires by the crate, but their storefront program is not done. Edit the four files provided so that the programs for both Delmar House of Pizza and Delmar House of Tires function correctly.

To do this, you should:

0. Copy all these files into your IDE:
  * [houseofpizza.c](./houseofpizza.html)
  * [houseoftires.c](./houseoftires.html)
  * [mathhelper.h](./mathhelperheader.html)
  * [mathhelper.c](./mathhelper.html)
  * [Makefile](./makefile.html)
1. Cut the `numberOfContainers` function from `houseofpizza.c` into `mathhelper.c`, so we can use it in both `houseofpizza.c` and `houseoftires.c`
2. Add an appropriate function prototype to `mathhelper.h`
3. Add a line to `#include` mathHelper.h in `houseoftires.c`
4. Add a line to `#include` mathHelper.h in `houseofpizza.c`. (Actually we have already done this for you!)
5. You can now compile your programs using the `Makefile` you copied over.  It will compile all of your programs at once for you by running the command `make`.  
 * When you copy over the makefile make sure you save it as `Makefile` without using any extension. 
 * You will learn more about makefiles in Class 2 and [pset3](../../problem-set).


After this, the programs `houseofpizza` and `houseoftires` should both work correctly, and we hardly had to write any new code!

Here's how the two programs should run after your edits:

```nohighlight
$ ./houseofpizza
Welcome to Delmar House of Pizza!
How many slices do you want? 12

You need 2 pizzas for 12 slices.
That'll be 20.00!
```

```nohighlight
$ ./houseoftires
Welcome to Delmar House of Tires!
How many tires do you want? 75

You need 4 crates for 75 tires.
That'll be 7200.00!
```

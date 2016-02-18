Below is a Makefile, which tells clang how to compile our program.

Don't worry about how this works right now, we'll see more in Studio coming up.

For now, just create a new file called `Makefile` in your IDE, and paste in the text below

One very important thing you must do: notice how some of the lines are indented. These indentations **must** be tabs, not spaces. When you copy/paste, they will be spaces. So go into each indented line, delete the spaces, and then re-indent by pressing tab.

```nohighlight
# Makefile

all: houseofpizza houseoftires

houseofpizza: houseofpizza.c mathhelper.c mathhelper.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o houseofpizza houseofpizza.c mathhelper.c -lcs50 -lm

houseoftires: houseoftires.c mathhelper.c mathhelper.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o houseoftires houseoftires.c mathhelper.c -lcs50 -lm 

clean:
	rm -f *.o a.out core pizza tires 
```

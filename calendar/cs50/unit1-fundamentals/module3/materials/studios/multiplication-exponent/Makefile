all: expt

expt: expt.c mult.c mult.h
	clang -ggdb3 -std=c11 -Wall -Werror -o expt expt.c mult.c -lcs50 -lm

clean:
	rm -f *.o a.out core expt

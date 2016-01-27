```nohighlight
all: pizza tires

pizza: houseOfPizza.c mathHelper.c mathHelper.h
    clang -ggdb3 -O0 -std=c11 -Wall -Werror -o houseOfPizza houseOfPizza.c mathHelper.c -lcs50 -lm

tires: houseOfTires.c mathHelper.c mathHelper.h
    clang -ggdb3 -O0 -std=c11 -Wall -Werror -o houseOfTires houseOfTires.c mathHelper.c -lcs50 -lm 

clean:
    rm -f *.o a.out core pizza tires 
```
##### Module 5

[Back to Class 1 Prep](../../class1-prep)

# Exercise: Leaky

In [leaky.c](./leaky.html), you will find a program simply prompts the user for their name, and then replies:

```nohighlight
$ ./leaky
first name please:
Bugs 
last name please:
Bunny
Nice to meet you, Bugs Bunny!
```

Unfortunately, if you run this program through valgrind, you will see that it contains a leak!

```nohighlight
$ valgrind ./leaky
==16520== Memcheck, a memory error detector
==16520== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==16520== Using Valgrind-3.10.0.SVN and LibVEX; rerun with -h for copyright info
==16520== Command: ./leaky
==16520== 
first name please:
bugs 
last name please:
bunny
Nice to meet you, bugs bunny!
==16520== 
==16520== HEAP SUMMARY:
==16520==     in use at exit: 11 bytes in 2 blocks
==16520==   total heap usage: 5 allocs, 3 frees, 91 bytes allocated
==16520== 
==16520== LEAK SUMMARY:
==16520==    definitely lost: 11 bytes in 2 blocks
==16520==    indirectly lost: 0 bytes in 0 blocks
==16520==      possibly lost: 0 bytes in 0 blocks
==16520==    still reachable: 0 bytes in 0 blocks
==16520==         suppressed: 0 bytes in 0 blocks
==16520== Rerun with --leak-check=full to see details of leaked memory
==16520== 
==16520== For counts of detected and suppressed errors, rerun with: -v
==16520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

See if you can figure out where the leak is and fix it!

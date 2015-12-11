##### Module 1

[Go back to Prep for Class 1](../../class1-prep)

# Exercise: Haiku

### Introduction

Welcome to your first exercise! Before you get started, here are a few quick instructions on how to set up the folder structure in your IDE, so you have a system for deciding where to put new files each exercise.

1. Open up your CS50 IDE and log in.
2. Inside the IDE, open up a new Terminal Window by clicking the little green plus sign at the bottom of the screen.
3. Inside the terminal, make a new directory called `/module1`, and within that, a directory called `/exercises`:

  ```
  $ mkdir module1
  $ mkdir module1/exercises
  ```
  NOTE: Don't type the dollar sign `$`. That's just a convention for specifying that the example is supposed to take place at the commandl-line prompt in a linux terminal window.
  
4. While you're at it, make a few other subfolders that you'll need:

  ```
  $ mkdir module1/follow_alongs
  $ mkdir module1/studios
  $ mkdir module1/misc
  ```
  
5. In future modules, you will create another folder just like this one, so you can copy it like so:

  ```
  $ cp -r module1 module2
  $ ls
  module1 module2
  $ ls module2
  exercises follow_alongs misc studios
  ```
  
6. Check out the <a href="https://github.com/Launch-Code/cs50x-live-2016/wiki/File-Management-Resource" target="_blank">Wiki</a> for more detail on how to set up your folder structure in the IDE.

### Get Started

Phew! Now we're ready to do this exercise.

Navigate into `module1/exercises` and make a new folder called `/haiku`:
```
$ cd module1/exercises
$ mkdir haiku
```

In that folder, create a file called `haiku.c`:
```
$ cd haiku
$ touch haiku.c
```

Open up `haiku.c`, and write a program that prints a 3-line Haiku to the console, like this:

```
$ ./haiku
Learning how to code
is a thing I like to do
more often than not
```

Make up your own haiku, if feeling creative.

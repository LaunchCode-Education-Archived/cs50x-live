##### Module 2
[Back to Prep for Class 2](../../class2-prep#arrays)
# Resource: Array Basics

Arrays are a data structure for storing a collection of values. For example:

{0, 11, 24, 13, 44, 15, 60, 37, 8, 9}

This is an array with 10 integer values.

In C, arrays must be declared with a type, a name, and a size.

```c
type name [ size ];
int myArray[10];
```

Use curly braces `{ }` to what goes inside the array.

```c
int myArray[10] = {0, 11, 24, 13, 44, 15, 60, 37, 8, 9};
```

To access the data stored in an array, use square brackets with the index whose value you want. This can also be used for assigning a value to a given index.

```c
// use bracket notation to inspect the contents at index 2
int n = myArray[2];
printf("%s\n", n); // prints 24

// now let's insert a new value at index 2
myArray[2] = 15;
n = myArray[2]; 
printf("%s\n", n); // prints 15
```

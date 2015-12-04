Arrays are a data structure for storing a collection of values. For example:

{0, 11, 24, 13, 44, 15, 60, 37, 8, 9}

This is an array with 10 integer values.

In C, arrays must be declared with a type, a name, and a size.

```
type name [ size ];
int myArray[10];
```

Use brackets to define the data stored in an array.

```
int myArray[10] = {0, 11, 24, 13, 44, 15, 60, 37, 8, 9};
```

To access the data stored in an array, use square brackets with the index whose value you want. This can also be used for assigning a value to a given index.

```
>$ printf(myArray[0]);
>0
>$ myArray[0] = 10;
>$ printf(myArray[0]);
>10
```

##### Module 3
[Back to Prep for Class 1](../../class1-prep#alogrithms-for-searching)
# Exercise: Searching Algorithms

### Question 1:
Given the following array:

{-2, 5, 20, 4, 8, 17}

How many items would need to be looked at when running linear search on the above array for the following items:

Linear search for ‘5’:

Linear search for ‘8’:

Linear search for ’20’:

### Question 2:

Given the following array:

{0, -6, 20, 15, 1, 2, 3}

Would it be more appropriate to use linear search or binary search? Why?

### Question 3:
Given the following array:

{4, 7, 13, 18, 21, 42}

carry out the process of using binary search for the number ’21'.  For each iteration of binary search, show:

1.  which elements of the array are between the “start” and “end” elements
2.  which element is the “middle” element; highlight it by putting it between square brackets (i.e., put it between [])
3.  next to the final iteration, write “final iteration"

For example, let's say we did this question with the following array: 

{-6, 0, 1, 2, 3, 15, 20}

searching for the number '0'.

A correct answer would look like this:

{-6, 0, 1, [2], 3, 15, 20}

{-6, [0], 1} final iteration

### Question 4:

Say we have `n` elements and know that they are not yet sorted.

What is the time complexity of sorting the array and then performing `m` search operations with binary search?  You may use any sorting algorithm you want, just say what it is, and what it’s time complexity is.

### Question 5:

For an unsorted array of 256 elements in which we would need to search for 8 elements, would it be faster to use linear search or binary search?

There is no need to actually sort the array, or show the sorted array. Feel free to use the time complexity of whichever sorting algorithm you want, and feel free to use a calculator!

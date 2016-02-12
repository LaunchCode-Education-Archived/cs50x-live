##### Module 3
[Back to Prep for Class 1](../../class1-prep#algorithmic-efficiency)
# Exercise: Algorithmic Efficiency

### Question 1

**This algorithm is O(n).  What does ’n’ represent in this example?**

n represents the number of elements in the array, given as the exampleSize variable.

### Question 2

**What is this algorithm’s time complexity, in terms of 'n'?**

This algorithm's complexity is O(n<sup>2</sup>), where n is the number of rows and columns. We can determine this by examining the loops. The outer loop runs n times (i < n) and the inner loop also runs n times (j < n). This means that in total there will be n * n = n<sup>2</sup> iterations.
### Question 3

**What is the total time complexity of Sally’s task, in terms of ’n’ and ‘m'?**

Selection sort has a efficiency of O(n<sup>2</sup>). Since notifying 1 person has an efficiency of O(1), notifying m people will have an efficiency of O(m). The total efficiency will be the efficiency of the sort combined with the efficiency of notifying everyone, or O(n<sup>2</sup> + m). 
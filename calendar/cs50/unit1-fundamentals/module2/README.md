# Module 2

**Pre-reqs:** [Module 1]()

**Assignment** By the end of this module you will have completed [Pset 2]()

### Steps

*TODO*

***

### Outline

TODO split into three class periods

* chars
  * ascii 
* arrays
* strings
  * indexing into them
  * iterating over them
  * the fact that they are arrays of chars (try to ignore the pointer aspect)
* command-line args
* modulo operator
* more practice with functions
  * sentence with no predicate
* more practice with boolean exprs

### Tricky Concepts / Things to Emphasize
* when iterating over an array, keep a clear distinction in your mind between the variable representing 
the **index** at which you are reading, vs the actual **value** in the array at that index
* juggling a bunch of moving parts, especially in vigenere
  * iterating over multiple arrays at the same time
* command line arguments require good understanding of arrays. Your program receives the args as array of strings, aka an array of arrays. That's a lot to grok in a dense space
* need to use library functions like isUpper() and isAlpha(). continue getting comfortable understanding how this process works.
  * people often neglect to actually use the result of a function call into their code, (eg by assigning it into a variable and then using the variable, or by embedding the fuction invocation into a larger expression). They just have a single line like `isAlpha(myChar);` which indicates they still dont quite get what's going on. Takes time and practice. So give them those reps.
* good workflow habits
  * write comments first, understand what you want to do before you implement.
  * run frequently and use sanity checks
* again, use variables smartly. 
  * If you can't come up with a good name, that means you dont fully understand what you're trying to do, so you should stop and figure that out first

# Module 2

**Pre-reqs:** [Module 1]()

**Assignment** By the end of this module you will have completed [Pset 2]()

### Schedule

Class # | Before Class | During Class | Topics/Skills
:--------:|:------------:|:------------:|-----------------------|
**Class 1**| [Prep Work](./materials/class1-prep) | [In Class](./materials/class1) | chars, functions, scope, strings, modulo|
**Class 2**| [Prep Work](./materials/class2-prep) | [In Class](./materials/class2) | more strings, arrays, command-line arguments |
**Class 3**| Continue [Pset2](http://cdn.cs50.net/2015/fall/psets/2/pset2/pset2.html) | [In Class](./materials/class3) | (office hours!)|

### Tricky Concepts / Things to Emphasize
* c syntax for declaring an array is awful because the `[]` comes after the name of the variable rather than the name of the type, e.g. `string argv[]` rather than the more sensible `string[] argv`. This adds another little thing to impede understanding for beginners, something to be aware of and talk about explicitly.
* a common mistake is to declare a variable at the wrong level of scope, e.g. you declare it inside of a loop, but you need to use it afterwards
* when iterating over an array, keep a clear distinction in your mind between the variable representing 
the **index** at which you are reading, vs the actual **value** in the array at that index
* juggling a bunch of moving parts, especially in vigenere
  * iterating over multiple arrays at the same time
* command line arguments require good understanding of arrays. Your program receives the args as array of strings, aka an array of arrays. That's a lot to grok in a dense space
* functions take awhile to grasp
  * concept of side effects vs return values
  * people often neglect to actually use the result of a function call into their code, (eg by assigning it into a variable and then using the variable, or by embedding the fuction invocation into a larger expression). They just have a single line like `isAlpha(myChar);` which indicates they still dont quite get what's going on. Takes time and practice. So give them those reps.
* The concept of `NULL` is introduced this module, but is never given much explicit attention and explanation. Elaborate on `NULL` a bit.
* good workflow habits
  * write comments first, understand what you want to do before you implement.
  * run frequently and use sanity checks
* again, use variables smartly. 
  * If you can't come up with a good name, that means you dont fully understand what you're trying to do, so you should stop and figure that out first
 
##### Useful functions TODO move, delete, or keep this?
* [isAlpha](https://reference.cs50.net/ctype.h/isalpha)
* [isUpper](https://reference.cs50.net/ctype.h/isupper)
  

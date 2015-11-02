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
  * typecasting ints to chars
  * resources: [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html#typecasting), [walkthroughs/ascii-0](TODO), [walkthroughs/ascii-1](TODO)
* arrays
  * resources: [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#arrays), [walkthroughs/ages](https://www.youtube.com/watch?v=dYVU9nFYybU&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU) 
* the concept of memory
  * resources: [walkthroughs/sizeof](TODO)
* strings
  * resources: 
    * [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html#representing_strings)
      * the stupid thing with strlen() inside a for-loop. TODO provide a resource to explain its not a big deal and equivalent to declaring the length in the previous line. maybe use as excuse to revisit for-loop syntax
    * [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#more_on_strings), [walkthrough/string-0](TODO), [walkthrough/string-1](), [walkthrough/string-2](TODO)
  * indexing into them
  * iterating over them
  * the fact that they are arrays of chars (try to ignore the pointer aspect)
* command-line args
  * resources: [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#command_line_arguments), [walkthrough/argv-0](TODO), [walkthrough/argv-1](TODO), [walkthrough/argv-2](TODO)
* modulo operator
* more practice with functions
  * decomp 
    * resources: 
      * [lecture bite from week 1 again](http://cdn.cs50.net/2015/fall/lectures/1/f/notes1f/notes1f.html#functions_and_arguments)  
      * [lecture bite](http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html)
        * also explains scope
      * [walkthroughs/functions0](), [walkthroughs/functions1]()
    * exercise: TODO
  * dont use funcs like a sentence with no predicate
    * resource: TODO
  * void return types, lack of input args, concept of side effects vs return values
* more practice with boolean exprs
* more practice on how to debug
* more practice including libraries and calling their functions
  * resources: [walkthroughs/capitalize-0](TODO), [walkthroughs/capitalize-1](TODO), [walkthroughs/capitalize-2](TODO)

### Tricky Concepts / Things to Emphasize
* c syntax for declaring an array is awful because the `[]` comes after the name of the variable rather than the name of the type, e.g. `string argv[]` rather than the more sensible `string[] argv`. This adds another little thing to impede understanding for beginners, something to be aware of and talk about explicitly.
* a common mistake is to declare a variable at the wrong level of scope, e.g. you declare it inside of a loop, but you need to use it afterwards
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
 
##### Useful functions
* [isAlpha](https://reference.cs50.net/ctype.h/isalpha)
* [isUpper](https://reference.cs50.net/ctype.h/isupper)
  

[Module 5](../..)

# Problem Set: Pset 5

### Synopsis
In this problem set, you'll do (TODO someone: a few sentences, just a quick overview.)

### Guidance
##### General Tips
This guidance primarily refers to the hashtable structure. However, you can select whichever structure you'd prefer. The instructions remain basically the same:

- skip anything in the probem set specification and videos that has to do with structures other than the one you've selected to code.

- Start with just the problem set specification - don't worry about any of the videos until you're clear on the written stuff.

- While reading the pset spec, underline or highlight everything that applies specifically to the input and output requirements. For example, the spec notes that all the words in the dictionary will be lowercase. That's important because it tells you that you don't have to convert anything to different cases during the `load()` function.

- Make sure you understand exactly what CS50's base code will provide you and what you have to put out. FOR EXAMPLE: speller.c does a whole lot of the heavy lifting! **You** are going to load words from a dictionary (the name will be provided by speller.c). **You** will provide the capability to check if a word is in the dictionary. And, finally **you** will be unloading the words from memory when the program is done. Some people have a tendency to practically rewrite everything that speller.c does! Make sure you understand only what the actual `dictionary.c` file has to do (load, check, unload)!

- When you get to a video in the spec, watch it. You don't need any videos other than what's in the spec!

- Do one section at a time! Don't even worry about anything past what you're currently trying to complete. For example, Zamyla starts with 'load'. Read that section, then watch Zamyla's video. **Don't move on to anything else until you have that specific part working.**

- While watching the videos linked in the spec, **stop the video whenever you see code**! Zamyla and her co-TFs will be explaining stuff about how hashtables (or your desired structure) work. That information is good and helpful - but you really want to focus in on any code they provide. **You will use that code in your work!**

##### On to the coding:
- You need an array to act as the starting point or "head" for your hashtable's linked lists. Zamyla demonstrates an array variable declared as `node* hashtable[500]`.

- That array needs to be declared within the `dictionary.c` file - but where? A tip: the array variable that is the basis for your hashtable will need to be used by all of the functions in your dictionary.c file. Where do you put variables that are used within many functions in the same file? "Global" variables are just like regular variables, but you put them outside of any other functions. That way, they can be used by any function. Like prototypes, they go somewhere above the first function (`int main`, if present; whatever other function is first if no `int main` is there, as in dictionary.c).

- While working on your `load` function, you might want to also implement your `size` function – it just returns the number of words in your dictionary. Consider a global variable for that one, too. That would allow you to use the same variable for both counting the words as you load them and returning the number of words loaded when size is called.



### Get Started
The assignment is <a href="http://cdn.cs50.net/2015/fall/psets/5/pset5/pset5.html" target="_blank">here</a>. Go get em tiger!

### How to submit 
(TODO Jesse or someone: quick instructions.)

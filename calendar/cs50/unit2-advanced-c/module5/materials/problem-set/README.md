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

##### `load`
- **Important**:
  * Create your own test dictionary and story files. This will be much, much easier to test with than the files CS50 provides!
  * Make sure your test files don't contain many words.
  * Make sure the test dictionary file's words are all in lowercase (as CS50's files will be). CS50's files will also be in alphabetical order – your choice here for testing.
  * Make sure your story file contains a few extra words beyond what's in the dictionary file, some mixed case words (eg, ThE), and some apostrophes (eg, cat's).
  * Make sure both files have a blank line at the bottom (as CS50's files will have).

- On to it: first, you want to set up an array that will act as the “head” of your linked lists. As noted previously, that array should be set up as a global variable – in your .c file, above any functions appearing in the file.

- You also want to set up a variable to hold the number of words you end up loading into your hashtable – the "size" of the table. This should also be a global variable because you'll use it in two functions: load and size.

- Once you've got those global variables set up, just save and compile. Yes – **each time you complete a change, save and compile**. One of the most important things about programming is to work on the smallest pieces you can at one time!

- Next step, start your actual `load` function: the parameter of this function, `const char* dictionary`, represents the dictionary file name you entered on the command line of speller. This is the file you need to open and load. Look back at `recover.c` to find how to open a file, if you need an example. Make sure to include the check for the file being NULL – but this time, return `false`, rather than the number 1 (the signature for `load` says `bool load`, right, not `int`!)

- You'll want to go ahead and close the file at the end of the function, now while you're thinking about it. Then, save and compile again! Fix any little problems that come up.

- You'll need to `malloc` some space to hold a `node` variable now. Make sure to free the `node` variable just before closing your file – then save and compile again.

- Now the meat of this function! You need to loop:
  * Read a word from the file variable you set up (using Zamyla's example of `fscanf` – more on this later) - save, compile, and test!
  * Retrieve the word's hash value (using the function Lauren showed you in her pset video) - save, compile, and test!
  * Load the word into your array/linked list (your "hashtable"; using Zamyla's code for swapping `node` and `head` – again, more on this later) - save, compile, and test!
  * And, re-`malloc` your `node` for the next round – save, compile, and test!

Note: again – **only work on one step at a time!!!** Once you've figured out how to read the words in, enter a `printf` to see whether the word actually gets read into `new_node->word`.

Run speller. If you get the words you expected, then remove the `printf`, and begin the next step.

Once you have figured out how to retrieve the word's hash value, enter a `printf` to show what hash value you've gotten. (If you're using Lauren's hash function correctly, you should get a zero for each word starting with 'a', a 1 for each word starting with 'b', and so on.)

Etc, etc, etc.!

Once everything's working in `load` as you would like it to, change the return value from `false` to `true` – and you're done with `load`!

Some additional details:  
`fscanf`: Zamyla's example just kind of hangs out there – how are you supposed to use it? Well, you have two options. `fscanf` works something like `fread` – which you used in `recover.c`. Looking at the man page (or the CS50 references page), you'll find that `fscanf` gives a return value when it successfully reads an item. You can use that return value to determine when you've reached the end of the dictionary word file, like this:

- as the condition of your while loop:
````
while (fscanf(yourdictfilevariable, "%s", new_node->word) == 1)
{
   // process the word
}
````

- or, on its own within the while loop:
````
while (true)
{
   int yourendoffilecheckervariable = fscanf(yourdictfilevariable, "%s", new_node->word) == 1);
   if (yourendoffilecheckervariable != 1)
   {
     // do something to break out of the loop
   }
   // continue processing the word
}
````

Zamyla's code for swapping `node` and `head`: Zamyla's example looks something like this –
````
 new_node->next = head;
 head = new->node;
````

The note here is that "head", in our case, actually refers to the array location determined by your hash function. So, anywhere you see `head` in that code, replace it with something like `hashtable[hash_location]` – or whatever you called your array, with whatever you called the variable you created to hold your hash result for the current word inside the square brackets.


### Get Started
The assignment is <a href="http://cdn.cs50.net/2015/fall/psets/5/pset5/pset5.html" target="_blank">here</a>. Go get em tiger!

### How to submit 
(TODO Jesse or someone: quick instructions.)

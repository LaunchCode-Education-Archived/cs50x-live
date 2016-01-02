[Module 5](../..)

# Problem Set: Pset 5

### Synopsis
In this problem set, you'll do (TODO someone: a few sentences, just a quick overview.)

### Guidance
##### General Tips
This guidance primarily refers to the hashtable structure. However, you can select whichever structure you'd prefer. The instructions remain basically the same:

- Skip anything in the probem set specification and videos that has to do with structures other than the one you've selected to code.

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

##### `check`
`check` is tricky because speller is sending us a `const char* word`. CS50 is doing that to save memory – `const char*` variable values get stored in the "stack" part of memory, which gets cleaned out as soon as your function is done running. You have to free memory in the "heap" (where normal pointer-type variables are stored) in order to get rid of the variable.

Because our dictionary is loaded with all lowercase words, and the words speller sends us to check might be mixed- or uppercase, we have to make sure to compare the words in the same case. Since our loaded dictionary is lower, it probably makes sense to compare in lower – but we can't change a `const`, so what now???

We'll have to create a new variable to hold the same length word as `check` sent us (mm, plus the nul terminator!). The format to set up this variable should look something like the word variable defined in our `node` typedef – except, instead of LENGTH + 1, we probably should use the length of the word speller gave us + 1. We've often used a function for getting the length of a string. Remember what that is???

Next, we'll have to load that new variable with the word's characters, using `tolower` in the process. (Where have we read the characters of a word, one by one, before? `vigenere.c`, perhaps???

Once you've filled in the new variable with matching lowercase letters from this function's "word" parameter, we'll have to add the nul terminator at the end. How 'bout something like:
`lowercaseword[wordlength] = '\0';` - using your variable names, of course!

Save, compile, and test!!! (eg, use `printf` to display both the word that speller gave us and the new, lowercase word that you just created)

Now, we have to use our hash function again! Why? To make sure we're looking in the same place the word would appear in our loaded dictionary – assuming it's there, of course.

Again, save, compile, and test – are you getting the hash result you expect for each word speller sends you?

Now, the meat of the check function: traversing to see if the word from speller is present in your loaded hashtable. Zamyla gave us the following code for traversing a list: `node* cursor = head;` - remember that "head" here represents our hashtable's array location where our hash told us to start looking for the current word
````
while (cursor != NULL)
{
    // do stuff (like comparing whether cursor->word is the same as your new lowercase version of speller's word???
    //   then returning true to tell speller we found it???)
    //   strcmp might be handy here...
    cursor = cursor->next;
}
````

or, you can look at src5w.pdf. This is the source code under the 2nd lecture for week 5. In it, you'll find two samples of doing stuff with `node` structs. list-0 is very similar to our problem set. The only difference is that it uses an `int` variable, `n`, while we use a character array called `word`. The part of the example search function we need to use looks like this:
````
node* ptr = first;     // - here, "first" would represent the location in our hashtable array where our hash told us to begin
                       //   looking for the current word (like "head" in Zamyla's example)
while (ptr != NULL)
{
    if (ptr->n == n)   // - oops, we're not using an int! What should ours look like??? How about using strcmp here to check
    {                  //   whether speller's word matches our lowercase one???
        // stuff the example does that we don't need for ours – we need instead to return true, telling speller that we found the word!
    }
    ptr = ptr->next;
}
````

Gosh, these two examples look a whole lot like each other. Hmmm!!! Oh, and be sure to code in there to return `false` if the word wasn't found in your while loop!

Once you've coded what you think will work – yep! Save, compile, test! Did the words in your story file that were not in your dictionary file get found? Again, some `printf` statements could be handy here! (Of course, please note, this could be also a very good way to practice your GDB skills!)

Oh, also a note: we're not freeing any memory in check. We're not malloc'ing any new words, and we're not removing any words, so we're good to go. Wait – what about that new lowercase word variable we created? We didn’t use malloc, so we're good to go. C will clear that memory whenever `check` is done.

##### `unload`
Guess what Zamyla gave us in her unload video? The answer - almost!
````
node* cursor = head;
while (cursor != NULL)
{
    node* temp = cursor;
    cursor = cursor->next;
    free(temp);
}
````

There are only 2 things missing:
* Remember, first, that "head" represents the start location in our hashtable array. Well, it turns out that we don't even need to use our hash function here! Simply loop through each element (`node` box) in the array. The `while` loop above, then, will clear out that location's linked nodes. How do we loop through an array? Hmm... We already know the size of the array... And, we've done this before a bunch of times now...

* Finally, we need to tell speller we finished unloading the array and its associated linked lists, er, the hashtable. What should we return?

Again, save, compile, and test. In this one, maybe you can `printf` the words while you're unloading them (just before you free temp, maybe?).

When this one's done, you'll need to run valgrind (pronounced like "Val grinned" ;-) Try something like the following:
````
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./speller ~cs50/pset5/texts/austinpowers.txt
````

If all is well, you should see: `All heap blocks were freed -- no leaks are possible`

Then, congratulations! You're done with this pset!

### Get Started
The assignment is <a href="http://cdn.cs50.net/2015/fall/psets/5/pset5/pset5.html" target="_blank">here</a>. Go get em tiger!

### How to submit 
(TODO Jesse or someone: quick instructions.)

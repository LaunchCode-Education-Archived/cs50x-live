[Module 4](../..)

# Problem Set: Pset 4

### Synopsis
In this problem set, you'll do (TODO someone: a few sentences, just a quick overview.)

### Guidance
**For Whodunit** - If you are color vision deficient (for example, "red-green color blind"): have someone else review your results each time you try something new! The results of this problem set are often very faint. Therefore, even “trichromats” will likely have difficulty discerning the results.

Don't spend hours trying to get this image PERFECT! If you can see enough to figure out what the results are supposed to be, STOP THERE! Later, if you get frustrated with something else, or need a break from a different problem set, come back to this one for fun. You can do really interesting stuff with this problem, and it's easy to get way too deep into it.

**Whodunit, Resize, and Recover:**
Become an expert on the `xxd` command! This can be very helpful in troubleshooting all three assignments in this problem set. *Play, play, play* with this command's options! Use them to see the byte contents "RGBTriple" values for the sample images given, such as smiley.bmp and small.bmp. Different size files will need different options in order to view the contents easily. And, notice there's an option that allows you to specify the number of lines to view, so the whole file doesn't scroll on by when you're trying to view its contents!

As always, Zamyla is your friend - AND break your coding into the smallest pieces possible!
* Use Zamyla’s TODO lists as a guide to the parts you need to complete.
* Use the code she shows you! Pay attention to the bits `copy.c` provides for you, noting the parts Zamyla says you need to alter or add to complete a particular item. Zamyla shows you more than `copy.c`! You might need to tweak an item for your use, but any actual code she shows you will be useful in solving the problem.
* 
Finally, a note on `fread()` and `fwrite()`: make sure you understand the parameters - especially the middle two. For the details, read on:  
Your "man" page shows this:
````c
    size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
````
Notice the `size_t`. It appears in four places in each function: before the function name, in the 2nd parameter position, and in the 3rd parameter position.

This implies that you can switch those middle two parameters freely. True, but know what's happening there!

The 2nd parameter represents the **size, in bytes**, of the data chunk you want to read or write. You might use a `sizeof` function here, say, to describe how big a data chunk you want to use.

The 3rd parameter represents **how many** of the specified chunks you want to read or write at a time.

So, if you say `fread(&mem_var, 512, 1, in_file)`, you're telling the computer to:
* read from `in_file`
* the data you read should be in **512 byte** chunks
* grab **1** of these 512 byte chunks of data with each read
* store that chunk in `mem_var`

Now, what if you say `fread(&mem_var, 1, 512, in_file)`, reversing the middle parameters? You're telling the computer to:
* read from `in_file`
* the data you read should be in **1 byte** chunks
* grab **512** of these 1 byte chunks of data with each read
* store those chunks in `mem_var`

It looks like this could work both ways - and it can. So, where does this become important?
* You want to be certain you're reading/writing the right data chunks for the job. If you're processing 512 bytes at a time, why would you read in 1 byte 512 times, rather than the whole 512 bytes at once? If you're working with a struct, you can read in a struct size all at once (as done in `copy.c`). Of course, the same applies if you're writing to a file.
* **These functions' return value is the number of chunks grabbed in the current read**. If the value matches the number of chunks specified in your 3rd parameter, then you've read/written an entire set of data successfully. However, if the return value is less than the number of chunks you specified, then either an error occurred, or the function reached the end of the file before completing. For example:

`fread(&mem_var, 512, 1, in_file) == 1` means one 512-byte chunk was successfully read.  
`fread(&mem_var, 512, 1, in_file) == 0` means that the file has ended (or an error has occurred), as a 512-byte chunk couldn't be read.

`fread(&mem_var, 1, 512, in_file) == 512` means 512 1-byte chunks were successfully read.  
`fread(&mem_var, 1, 512, in_file) < 512` means that the file has ended (or an error has occurred) before all 512 chunks were read.  

### Get Started
The assignment is <a href="http://cdn.cs50.net/2015/fall/psets/4/pset4/pset4.html" target="_blank">here</a>. Go get em tiger!

### How to submit 
(TODO Jesse or someone: quick instructions.)

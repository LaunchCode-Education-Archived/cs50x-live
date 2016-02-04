#####[Module 4](../..)

# Problem Set 4

### Synopsis
This problem set is difficult but very fun! There are three main components:
* Whodunit: Here you will manipulate the pixels in an image in order to solve a murder mystery!
* Resize: This component asks you to write a program that scales an image by a certain factor, making it 2, 3, or n times as large.
* Recover: It turns out that when you "delete" data from a computer, the data doesn't necessarily go away. More often, it merely means that the computer will allow that chunk of memory to be overwritten in the future. In this assignment, you will search through the raw bytes of a digital camera's memory to recover a bunch of "deleted" images.

Before you start coding, you will be asked to do some reading on image file formats (BMP, JPEG, etc) and answer some questions. Don't spend forever on this, but do make sure you have read enough that you can answer the questions. We do ask you to submit your answers on Vocareum.

### How to submit 
On Vocareum, you will see four assignments:
* **Problem Set: Questions**. For this assignment submit a TXT file called questions.txt
* **Problem Set: Whodunit**. For this assignment submit a file called whodunit.c
* **Problem Set: Resize**. For this assignment submit a file called resize.c
* **Problem Set: Recover**. For this assignmnet submit a file called recover.c

After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly! Remember, you can ignore the instructions on the Harvard spec on how to submit; we only care about your submission on Vocareum. 

You can also use check50 to check the correctness of your code before submitting. Unfortunately, you won't be able to use check50 on whodunit.c, but you should know when your image is clear enough to see the picture. Obviously, check50 won't work for questions.txt either, but please submit your answers to the questions specified in the problem set spec. 

If you forget how to use Vocaruem, please refer to the <a href="https://docs.google.com/document/d/19HIMxU_RtVV0PcGpuL71KmAoQh-KTgyPGpWWLcmwo58/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocaruem.

### Get Started
Start working on the <a href="http://cdn.cs50.net/2015/fall/psets/4/pset4/pset4.html#getting_ready" target="_blank">Problem Set 4 Spec</a>. You may have seen some of these videos already, but feel free to review them if you want a refresher. Go get em jaguar!

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
Notice the `size_t`. It appears in two places in each function: before the function name, in the 2nd parameter position, and in the 3rd parameter position.

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


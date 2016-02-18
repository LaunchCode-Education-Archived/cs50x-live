##### Module 4

[Back to Class 2 Prep](../../class2-prep#files-hex)

#Resource: Functions with Files

We were just introduced to some new functions that allow us to work with external files. Pretty cool stuff, if you ask us. But in the process, we were just shown a bunch of new terms and types of arguments. You might have been like, "whoa, <a href="https://www.youtube.com/watch?v=Y5qKNlcUwKs" target="_blank">Nelly</a>, buffer? block? file pointer?! What is all this?" 

Not to worry! We're going to go through this more slowly to better understand each of these functions and how to use them. 
***
###`fopen`

The `fopen` function is used to open a file, and provides us with a file pointer we can use to access that file. Here is the generic way we use `fopen`:

**FILE*** <_name of our file pointer_> __fopen__( <_file name_> , <_operation_>)

To be clear, you don't actually include the angle brackets (< >) when implementing the function; we just included those to clearly separate the different pieces.

Let's walk through each of these:
* **FILE*** is the way we declare a file pointer (just like using `int` to declare an integer variable)
* <_name of our file pointer_> is, you guessed it, the name we give to the file pointer. We can use this later when we actually want to access that file. 
* <_file name_> is the name of the file we are trying to access. This must be a string (or a char*). So, one example would be to open a file called "output.txt". Notice that because this must be a string, we include quotes around the name. Alternatively, you could pass in a string variable that you declared earlier. For example:
  ```c
  char* filename = "output.txt";
  fopen(filename, "w");
  ```
* <_operation_> signifies what we are going to do with the file. For now, you only need to worry about 3 types of operations:
  * "w" allows you to write to the file
  * "r" allows you to read to the file
  * "a" allows you to append to the file. This means instead of overwriting everything saved in the file, you just add on to the end.

Notice again that you must include quotes around the operation you are choosing.

You must always `fopen` a file before you can do anything with it, so get used to using this function!

***

###`fgets` and `fputs`

These two functions complement each other and are used in similar ways. `fgets` is used to read (or "get") a string from a file, while `fputs` is used to write (or "put") a string into a file. It can be thought of "file get string" and "file put string". To use `fgets`, you'll need to make sure the file you are accessing has been opened for reading purposes (using the "r" operation); likewise, to use `fputs`, you need to make sure the file has been opened for writing purposes (using the "w" operation). 

Here is the generic way we use `fgets` and `fputs`:

__fgets__(<_buffer_> , <_max number of characters to get_>, <_file pointer_>)
  
__fputs__(<_string to put_>, <_file pointer_>)

Again, let's walk through what each of these mean. For `fgets`:
* <_buffer_> is just a fancy term referring to the place where we want to store the data we're getting. Before we ask `fgets` to go "get" some data from the file, we have to have a place where the information can be stored locally. It is kind of like if you ask your mom to go pick blueberries for you (I don't know, just go with it), you have to give her a basket where she will put the blueberries. To create "the basket", we can declare an array of chars (or declare a char* by `malloc`ing some memory) that will store the characters we're reading in. When you declare this variable you'll want to make sure you specify a size that will be able to store at least the maximum number of characters you're reading in. 
* <_max number of characters to get_> is an `int` value that tells the function the maximum number of characters to read in. Conveniently, `fgets` will automatically stop anytime it sees a new line, as long as the new line is reached before the max number of characters specified in this argument. For now, the number you choose here will be somewhat arbitrary. You'll just want to make sure it's at least as long as you need it to be before getting to a new line. There are creative ways to dynamically reallocate memory so we don't have to use an arbitrary integer value, but we don't need to worry about that now.
* <_file pointer_> is the pointer we previously opened using `fopen`. Remember, we can only use `fgets` on a file that we opened with "r" to read.

It is also relevant to note that `fgets` will return `NULL` when it gets to the end of the file. So, if you are looping through a file, reading in strings along the way, you can tell it to stop when it returns `NULL` (or to keep going as long as it doesn't return `NULL`). 


For `fputs`:
* <_string to put_> is the string of characters that you want to put in the file. This can come in the form of text you write out in quotes (for example, "hello"), or in the form of a string variable, or array of strings.
* <_file pointer_> is the pointer we previously opened using `fopen`. We can only use `fputs` on a file that we opened with "w" to write.

Alternatively, we can also use `fgetc` and `fputc`, which are similar, but only read and write one character at a time (can be thought of as "f get char" and "f put char"). For `fgetc` you only need to specify the file pointer you want to use, and it will automatically return the next character in the file, keeping track of where you are. For example: __fgetc(input)__ would get the next character from the file pointed to by "input". Unlike `fgets`, `fgetc` actually returns a character to you. This means you don't have to pass in "a basket": instead you can grab the character by simply assigning the result of the function directly into a variable, like this:

```c
// this is how you do it
char c = fgetc(filepointer);

// you don't have to do this "basket" thing:
char c;
fgetc(&c, filepointer);
```

To write a character to a file, use `fputc`. To use `fputc` you need to specify from where the char you want to write is coming from (maybe a char variable, or an array of chars) and the file pointer you want to use, like so:

__fputc__(<_char to put_> , <_file pointer_>)

This will also write in one char at a time to the file you point to. 

***

###`fread` and `fwrite`

These functions are more flexible in that they allow us to read in any kind of data, not just strings of text. To use these functions, we must tell `fread` (and also `fwrite`) exactly how much we want it to read (or write). The arugments for these can be confusing, so let's go through these as well:

__fread__ (<_pointer to buffer_> , <_size_> , <_block_> , <_file pointer_>)

__fwrite__ (<_pointer to buffer_> , <_size_> , <_block_> , <_file pointer_>)

Let's go through these terms:
* <_pointer to buffer_> is essentially a buffer just like used in `fgets`. Here, we are just being very specific that this must be a pointer. This is where you are storing the information you're reading from / writing to the file. If you are reading in int, you can store it in an array of ints, or a int*; you can do the same for chars and for strings. 
* <_size_> tells the function the size of information you want to read / write. Often, you'll use the `sizeof` function on the data type you want, and multiply that by the amount of those pieces of data you want. So, for example, if we want to read in just one character at a time, we could simply put "__sizeof(char)__" into that argument. Or, if we wanted to write in a string of chars from a string variable called 'name', we could say "__sizeof(char) * strlen(name)__"
* <_block_> is also sometimes shown as <_quantity_>. This will tell the function how many times to grab the amount of information specified in <size>. If you just want to read in one char at a time, you would put in "sizeof(char)" to the <size> argument, and "1" into the <block> argument. 

 `fread` has a return value of the number of "chunks" that were successfully read in (where "chunks" might be ints or chars or something else, which should correspond to the <block> argument). So, if you are using `fread` in a loop, you can tell the loop to keep going as long as `fread` is greater than 0.

These are a bit confusing, so let's go over an example:

```
string class = "CS50x"
fwrite (class, sizeof(char) * strlen(class), 1, output)
```
Here, we declare a string varible called _class_ and put "CS50x" into it. Then we tell the `fwrite` function to get the information from _class_, that is the size of memory taken up by one char multipled by the length of the string in _class_ (in this case, "CS50x", so strlen would be 5), to write that 1 time (as specified by the '1' in the <block> argument), and write that to the file pointed to by _output_. If _output_ pointed to a file called "output.txt", when we opened that file, we should now see "CS50x". If we changed the <block> value to 2, we would see "CS50xCS50x". 
***
Phew. That was a lot of information. Don't expect to remember all of this for now. You can always refer back here if you need a refresher on the arguments required for all of these functions. Also, be sure to check out the documentation for these using Reference50. These can be a little technical, but it is good to get in the habit of looking here when trying to understand how to use a function. 

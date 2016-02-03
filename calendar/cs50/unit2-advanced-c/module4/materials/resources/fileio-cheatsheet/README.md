##### Module 4

# Resource: File I/O Cheatsheet

There are a lot of different functions associated with file i/o. It can be hard to keep track of them all. So here, we have compiled them all in one place.

Function | Return Type | Side Effects | Inputs | Example | Notes
|--------|-------------|--------------|--------|---------|------|
`fopen` | `FILE*` -- a pointer to a file | the file is now open and ready for you to use | `char*` a string representing the name of the file you want to open, `char*` a string to indicate what you want to do with this file (choices are `"r"`, `"w"`, `"a"`) | `FILE* ptr = fopen("recipe.txt", "r");` | This is always the first function you will call. Be careful because it might return a pointer to `NULL`
`fclose` | `void` | Closes the file you pass in | `FILE*` -- a pointer to the file you want to close | `fclose(ptr);` | This is always the last function you will call.
`fgetc` | `char` -- the next character in the file | (none) | `FILE*` -- a pointer to the file you want to read from | `char c = fgetc(ptr);` | This function simply reads in and returns one character from the file. Each time you call it, the "cursor" moves, so you can read each character one by one, simply by calling again and again |

TODO
fputc, fgets, fputs, fread, fwrite, fseek, ftell

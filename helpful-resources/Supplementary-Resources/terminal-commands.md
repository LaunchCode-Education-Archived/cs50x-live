#Commands in Terminal Window
|Command | Explanation|
| :------- | :-------- |
| **`make` `program_name`** | Compiles the program. [IE: **`make hello`**] |
| **`./program_name`** | Executes the program.  [IE: **`./hello`**] |
| **`help`** |  Displays a list of commands that are defined internally |
| **`cd`** **`<directory>`** | "change directory" Changes your current directory to the given **`<directory>`** |
| **`.`** | Shorthand for the current directory (IE: **`cd .`** ) |
| **`..`** | Shorthand for the parent directory (IE: **`cd ..`** ) |
| **`pwd`** | "present working directory" Lists the current directory you are in. |
| **`~`** | “tilde” This is the home directory. To get back to your home directory just type the command **`cd`** |
| **`touch` `<filename.c>`** |  Creates a new file called **`<filename.c>`** located in the current directory. |
| **`mkdir` `<directory>`** | “make directory” Creates a new subdirectory called **`<directory>`** located in the current directory. |
| **`cp` `<source>` `<destination>`** | Creates a copy of the file you specify as **`<source>`**, which will be saved in **`<destination>`** |
| **`cp` `-r` `<source_directory>` `<destination_directory>`** | Creates a copy of the directory you specify as **`<source_directory>`**, which will be saved in **`<destination_directory>`** The **`–r`** stands for recursive and will copy everything in the directory, including subdirectories. (IE: **`cp pset0 pset3`** ) |
| **`rm` `<file>`** | “remove” Deletes the **`<file>`** but asks you whether or not you want to delete.  You answer with y (yes) or n (no). |
| **`rm` `-f` `<file>`** | Deletes the **`<file>`** but DOES NOT ask you whether or not you want to delete. :heavy_exclamation_mark:  Be Careful, this will automatically delete the file! |
| **`rm` `-r` `<directory>`** | Deletes the **`<directory>`** and all of its content but asks you whether or not you want to delete.  You answer with y (yes) or n (no). |
| **`rm` `-rf` `<directory>`** | Deletes the **`<directory>`** but DOES NOT ask you whether or not you want to delete. :heavy_exclamation_mark: Be Careful, this will automatically delete the directory and all of its contents! |
| **`mv` `<source>` `<destination>`** | “move” renames the file, moving it from **`<source>`** to **`<destination>`**  |
| **`man` `<page argument>`** | This command will bring up a page or section in the on-line reference manuals.<br> As per the manual: <br> **man**  is  the  system's  manual  pager. Each **page argument** given to **man** is normally the name of a **program**, **utility** or **function**.  The manual page associated with each of these arguments  is  then  found  and  displayed.  <br> <br>To get to the manual home page use the command<br> `man man`<br><br> To get to a function use man and the function name <br> `man printf`<br><br>To exit you can press `q` or to get help press `h`<br><br>Note: You will not find any information about non-standard libraries in C like the CS50 library `cs50.h`.  You can find it <a href="https://reference.cs50.net/" target="_blank">here</a>.    |

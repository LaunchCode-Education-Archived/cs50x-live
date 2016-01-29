[Module 3](../..)

# Problem Set 3

### Synopsis
In this problem set, you will put those sorting algorithms to good use, and get a lot of practice with arrays. There are two components to this assignment:
* Find
* Game of Fifteen

In Find, your job will be to write a program that searches for a particular number inside a very large list. To do this efficiently, you will use Binary Search (aka ripping the phone book in half). But Binary Search only works if your list is sorted! So first you'll need to sort it, using a sorting algorithm (whichever one you like best).

In Game of Fifteen, you will turn <a href="https://en.wikipedia.org/wiki/15_puzzle" target="_blank">this classic</a> into a program that users can play live in the terminal window. Doing so will require working with a 2-dimensional array, in other words, an array of arrays.

### How to submit 
FILE NAMES: helpers.c, fifteen.c

INSTRUCTIONS: Submit your assignments on Vocareum. After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly! Remember, you can ignore the instructions on the Harvard spec on how to submit; we only care about your submission on Vocareum.

If you forget how to use Vocaruem, please refer to the <a href="https://docs.google.com/document/d/19HIMxU_RtVV0PcGpuL71KmAoQh-KTgyPGpWWLcmwo58/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocaruem.

For general guidance on problem sets, you may also find it useful to review the <a  href="../../../../../module0/materials/problem-set/README.html" target="_blank">Problem Set Page Overview from Problem Set 0</a>.

### Get Started
Start working on the <a href="http://cdn.cs50.net/2015/fall/psets/3/pset3/pset3.html#getting_ready" target="_blank">Problem Set 3 Spec</a>. There will be some videos you've already seen, so feel free to skip over those if you feel comfortable with the concepts. If not, now's a good time for review!

### Guidance

##### Find 

While searching and sorting, you will be getting more experienced with arrays. You're also gaining experience reading and figuring out how someone else's code works! (This is a good example of why something like `style50` standards are a good thing to use with your own code. You can find more information about using `style50` <a href="http://cs50.stackexchange.com/questions/4270/what-is-style50-and-how-to-access-it" target="_blank">here</a> and a CS50 guide to stylize your code <a href="https://manual.cs50.net/style/" target="_blank">here</a>.)

Make sure you *break your work into the smallest pieces you possibly can*! Do *one thing at a time*, and *make sure it's working before going on to something else*.

CS50 pre-codes a bunch of function prototypes for you in this pset. You are given some blank functions with `//TODOs` inside. So, start by doing a `printf()`, or using a breakpoint in the debugger, to see what values are being provided to a function you're currently working on. Once you see the values and understand what you're getting, then you can create your search/sort plan. Similarly:
* When you have a `for` loop, use a debugging technique (`printf()` or breakpoint) to inspect the values of your loop variables before you actually write any code trying to make use of them. 
* When you have an `if` statement, use a debugging technique to determine whether the `if` is being processed (or its companion `else`, if there is one). 
Once you make sure the tiniest thing works, only then should you write the next little step in your plan.

##### Game of Fifteen
This assignment is heavy on arrays. You will be using a multi-dimensional array, so instead of just one row of data, you'll have both rows and columns. Some tips:
* Use meaningful names for your loop variables! Which represents a row versus a column, `i` or `j`? Use `row` and `col` instead (or `col` and `row`), and you won’t have to wonder while you're troubleshooting.
* Use the trusty "swap" code you've learned for arrays to move your tiles about.

Finally, checkout the following Walkthrough videos listed below. They are a few years old, but still pertinent to the Game of Fifteen assignment:

1. <a href="https://www.youtube.com/watch?v=CvmHt-IDhbs" target="_blank">fifteen</a>
2. <a href="https://www.youtube.com/watch?v=k4P0SojW9oM" target="_blank">fifteen / draw</a>
3. <a href="https://www.youtube.com/watch?v=xPa4Wb5Uyhc" target="_blank">fifteen / init</a>
4. <a href="https://www.youtube.com/watch?v=gxMHcoBMiq4" target="_blank">fifteen / move</a>
5. <a href="https://www.youtube.com/watch?v=6KSq4JUfhIk" target="_blank">fifteen / won</a>


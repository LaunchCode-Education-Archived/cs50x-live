[Module 3](../..)

# Problem Set: Pset 3

### Synopsis
In this problem set, you will put those sorting algorithms to good use, and get a lot of practice with arrays. There are two components to this assignment:
* Find
* Game of Fifteen

In Find, your job will be to write a program that searches for a particular number inside a very large list. To do this efficiently, you will use Binary Search (aka ripping the phone book in half). But Binary Search only works if your list is sorted! So first you'll need to sort it, using a sorting algorithm (whichever one you like best).

In Game of Fifteen, you will turn <a href="https://en.wikipedia.org/wiki/15_puzzle" target="_blank">this classic</a> into a program that users can play live in the terminal window. Doing so will require working with a 2-dimensional array, in other words, an array of arrays.

### Get Started
The assignment is <a href="http://cdn.cs50.net/2015/fall/psets/3/pset3/pset3.html" target="_blank">here</a>. Go get em tiger!

### Guidance

##### Find 

While searching and sorting, you will be getting more experienced with arrays. You're also gaining experience reading and figuring out how someone else's code works! (This is a good example of why something like `style50` standards are a good thing to use with your own code. You can find more information about it <a href="https://manual.cs50.net/style/" target="_blank">here</a>)

Make sure you *break your work into the smallest pieces you possibly can*! Do *one thing at a time*, and *make sure it's working before going on to something else*.

CS50 pre-codes a bunch of function prototypes for you in this pset. You are given some blank functions with `//TODOs` inside. So, start by doing a `printf()` to see what values are being provided to a function you're currently working on. Once you see the values and understand what you're getting, then you can create your search/sort plan. If you have a `for` loop, `printf()` the values of your loop variables before writing code to use them. When you have an `if` statement, `printf()` to determine whether the `if` is being processed (or its companion `else`, if there is one). Once you make sure the tiniest thing works, remove that bit of test code, and write the next little step in your plan.

##### Game of Fifteen
Here you will have array overload! You will be using a multi-dimensional array, so instead of just one row of data, you'll have rows and columns.
* Use meaningful names for your loop variables! Which represents a row versus a column, `i` or `j`? Use `row` and `col` instead (or `col` and `row`), and you won’t have to wonder while you're troubleshooting.
* Use the trusty "swap" code you've learned for arrays to move your tiles about.

### How to submit 
FILE NAMES: helpers.c, fifteen.c

INSTRUCTIONS: Submit your assignments on Vocareum. After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly!

If you forget how to use Vocaruem, please refer to the <a href="https://docs.google.com/document/d/19HIMxU_RtVV0PcGpuL71KmAoQh-KTgyPGpWWLcmwo58/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocaruem.

For general guidance on problem sets, you may also find it useful to review the <a  href="../../../../../module0/materials/problem-set/README.html" target="_blank">Problem Set Page Overview from Problem Set 0</a>.

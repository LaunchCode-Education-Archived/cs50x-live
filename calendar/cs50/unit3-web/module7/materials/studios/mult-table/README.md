##### Module 7

[Go back to Class 1](../../class1)

# Studio: Mult Table

For today's studio, we are going to borrow an exercise that Doug Lloyd suggested in his *PHP for Web Development* video. Thanks Doug!

<a href="https://youtu.be/l5O-HKElXPc?list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&t=1311" target="_blank">Watch here</a> for the instructions.

### Starter Code

As Doug says, your assignment is to create a pair of PHP files, `mult_form.php` and `mult_table.php`. The form should contain one field for the user to enter a number. When the form is submitted, the user should be taken to the other page, which displays an `n by n` mulitplication table.

We've already started both files. Copy <a href="./mult_form.html" target="_blank">mult_form.php</a> and <a href="./mult_table.html" target="_blank">mult_table.php</a> into your IDE.

### Assignment

The form is almost done. There is one crucial piece that we forgot! If you don't spot it right away, it should become clear later after you get started.

Over in `mult_table.php`, you have some TODOs. We have placed some basic skeleten code to create the `<table>`, but currently the result is simply 10 rows of `#` characters.

For a refresher on how the `<table>` tag works, here is a good reference with some examples: http://www.w3schools.com/html/html_tables.asp

Good luck!


### Rectangularize

Once you have a basic n by n grid, your next step is to extend the site to be more hip and less square. Add a second field to the form for another number. This new number should represent the height of the resulting table, and the old one should represent the width. When rendering the table now, make sure it is a rectangle with the dimensions specified on the form.

### How to Submit

When you're done, submit both **mult_form.php** *and* **mult_table.php** to Vocareum.


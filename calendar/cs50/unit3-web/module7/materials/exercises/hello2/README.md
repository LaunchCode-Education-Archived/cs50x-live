##### Module 7

[Back to Class 1 Prep](../class1-prep)

# Exercise: Hello 2

Let's improve our Hello site by providing some guidance if the user fails to fill out their form correctly, just like David does in the <a href="https://www.youtube.com/watch?v=csboq6ZtqkI&index=6&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd">froshims-2</a> walkthrough.

### Starter Code

As usual, copy over [hello-form.php](./hello-form.html) and [hello-response.php](./hello-response.html) into your IDE in a new folder for this exercise. 

### Assignment

Just like last time, the form is already done, but `hello-response.php` has 3 TODOs. 

In our previous version, if the user failed to provide one of the fields we were looking for, we simply redirected them back to the form page. This time we want to keep the user on the current page, and explain to them that they messed up, and provide a link back to the form which they can click after reading our message.

Of course the above should only happen if the user actually did mess up. Otherwise, we should still greet them as normal. You'll notice that in this version, we do the `if / endif` logic mixed inside with the HTML, rather than getting it out of the way first at the top of the file. That's because, as mentioned, we are definitely returning some HTML content either way (unlike last time, when we potentially wanted to exit the script prematurely).

The TODOs should be pretty self explanatory here. Just fill them in, using the walkthrough video above as guidance.

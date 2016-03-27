##### Module 7

[Back to Class 1 Prep](../../class1-prep)

# Exercise: Hello Sessions

Let's make another Hello site. 

This time, we will (almost) never have to worry about the user leaving a form field blank, because if they do, we will just use Sessions to remember what they said last time! 

### Starter Code

As usual, [hello-form.php](./hello-form.html) is already done. It simply contains a form asking the user for their name (We don't care about customizing the greeting this time).

And as usual [hello-response](./hello-response.html) is partially done, but contains 3 TODOs! 

### Assignment

As mentioned above, your aim is to implement the back end such that, even if the user did not provide a name, your site will remember whatever they said previously, and say Hello to that previous name instead.

If there is no "whatever they said previously", because this is their first time submitting the form, then you should simply redirect them back to the form (you don't have to give a helpful error message).

Let's walk through an example. Suppose David Malan visits your site:

1. The first thing he does is submit the form without entering anything. Your site should redirect him back to the form.
2. After arriving back at the form, David types his name and clicks Submit. He should now see a message with his name inserted into it.
3. Next time, David again neglects to type anything. But nevertheless, upon submitting, he still sees a message with his name inserted into it.
4. Finally, David goes back and types "Zamyla" into the form. This time, upon submission, he sees a message with "Zamyla" inserted into it.


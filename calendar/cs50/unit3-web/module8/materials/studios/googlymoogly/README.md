##### Module 8

[Back to Class 1](../../class1)

# Studio: Googly Moogly

Today you will get some practice using JavaScript to manipulate the DOM. Your JS script will perform client-side validation on an HTML form, kind of like these <a href="https://www.youtube.com/watch?v=eViManaIKkQ&index=9&list=PLhQjrBD2T382FjybRNOXyEdsjP9CNKJgb" target="_blank">Walkthroughs</a>, but instead of reporting feedback with an annoying `alert()` message, you will provide a nice user experience by modifying the HTML content to include a helpful annotation on whichever field(s) the user messed up.

### The Goal

You have a brilliant idea for a new search engine, the Googly Moogly. It's kinda like Google, but better. With Googly Moogly, users are only allowed to search for things using letters from their own name. 

Your patent lawyer is drafting the paperwork as we speak, but in the mean time, let's build this thing. It should look like this:

<img src="screenshots/blank.png"/>

If the user tries to submit the form without typing anything in at all, you should yell at them for failing to provide their name:

<img src="screenshots/invalid-noname.png"/>

If they do provide a name, then they are free to submit the form, provided, of course, that their search query matches teh Golden Googly Moogly Rule. 

<img src="screenshots/invalid-chars.png"/>

Crazy Steve got rejected because his search term contained characters that were not part of his name. Notice also that you should inform the user about which specific characters were not allowed.

Now let's say Crazy Steve tries this:

<img src="screenshots/invalid-casesensitive.png"/>

What's wrong with "raves"? Well, turns out Googly Moogly is a case-sensitive beast. (This was all your idea, we're just reminding you of the details). So anyway `"S"` is allowed, but not `"s"`. This should actually make it easier for you to implement.

When Steve finally gets it right, like this:

<img src="screenshots/valid.png"/>

he should be whisked away to learn about raveS:

<img src="screenshots/google.png"/>

### Starter Code

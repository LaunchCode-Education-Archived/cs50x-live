##### Module 8

[Back to Class 2](../../class2)

# Studio: AJAXson 5

One of the classic problems in computer science is the question of how to optimally implement a web page that displays GIFs of the Jackson 5. Today we'll take a stab at it.

### The Giphy API



### The Goal

Your site should provide the user with a form where she can type a search query:

<img src="screenshots/blank.png"/>

Upon submitting the form, the user should briefly see an indication that something awesome is about to happen:

<img src="screenshots/loading.png"/>

After a quick second, a GIF should appear!

<img src="screenshots/moonwalk.png"/>

If the user clicks the button again, even with the same search term, she should see a new GIF:

<img src="screenshots/cowboy.png"/>

The gif should ideally be relevant to both the search term and the Jackson 5 (or at least Michael), but depending on the search term you might find that only one or the other could be satisfied. For example, a third click might yield this:

<img src="screenshots/mariodance.png"/>

Dance: check. Jackson: not so much. That's OK if the results don't quite work out, as long as you put in the effort and heart and soul (where "effort and heart and soul" means your form submitted a request that looks like "https://api.giphy.com/v1/gifs/random?api_key=dc6zaTOxFJmzC&tag=jackson+5+dance").

Finally, it is possible that something might go wrong in the proccess of making the request. If so, you should report an error to the user, like so:

<img src="screenshots/error.png" />


### Starter Code

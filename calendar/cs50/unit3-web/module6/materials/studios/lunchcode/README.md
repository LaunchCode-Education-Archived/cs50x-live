##### Module 6 

[Back to Class 2](../../class2)
 
# Studio: LunchCode

Today we are going to be working once again with CS50's API, specifically the Food API.

Your assignment for today is to build a front end page for users to query the API. In the previous studio, you used this page from the cs50 docs:

<img src="lunchcode3.png"/>

Today your job is to build a very similar page. Here is a mockup:

<img src=lunchcode1.png/>

As you can see, our page contains three `<form>` elements, one for each of the three "endpoints" of the food API: `/facts`, `/menus`, and `/recipes`.

Upon filling out one of the forms and clicking its `SEND REQUEST` button, a user should be whisked away to the page displaying the response from the API, like this:

<img src="lunchcode2.png"/>

(The url in the screenshot above is: http://api.cs50.net/food/3/menus?key=123456789&output=json&meal=LUNCH)

### Getting Started

We've given you a little starter code in <a href="lunchcode.html" target="_blank">lunchcode.html</a>. Click that link, and you should see, in a new browser tab, a very plain form that says "Menus". OK, so that's what the page looks like, but where is the actual starter code?? Well, here's the thing: we sent you a link to an HTML file, so your browser went ahead and did what it always does when opening an HTML file: it rendered the page! 

But no matter, this is a good opportunity to remind you that you can always view the *source* code for any HTML page by <a href="" target="_blank">using your browser's developer tools</a>.

Go ahead and copy the source over into a new file in your IDE.

### Action

You may have noticed that the form currently does not *go* anywhere. Clicking on the `SEND REQUEST` button simply causes the page to refresh. Your first step is to fix that. You want users to be taken to somewhere upon submitting the form. Where they should go, and how to implement that feature, we will leave for you to figure out! For a refresher on form submission, see the <a href="http://cdn.cs50.net/2015/fall/lectures/7/m/src7m/search-0.html.src" target="_blank">search-0 source code<a> from the <a href="https://www.youtube.com/watch?v=RQ2_TIXBo00&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=14" target="_blank">Walkthrough video</a> in which David wrote a front-end to Google's search service. 

### Authentication

### The Other Forms

### The Page Heading

### Styles


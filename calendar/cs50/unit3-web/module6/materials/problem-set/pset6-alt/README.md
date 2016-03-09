##### [Module 6](../../../)

# Problem Set 6 (Alternative)

This assignment is gong to be very similar to the [LunchCode]() studio. You will create an HTML page with a form that allows the user to interact with an API.

This time we will use the API to Slack, a chatroom service. By filling out the form, users will be able to post messages to a group conversation.

### Slack

Slack, if you're not familiar, is a chatroom service. The easiest way to see is to check it out! 

Help them join LaunchCode Community or another team.

type something in the channel


### Graffiti

Slack has a vast API for doing all kinds of fancy cool stuff. We're going to use one particular feature, their <a>Incoming Web Hooks</a>, which simply allows external programs to post messages to a channel. For example, you might 

Go take a look at the <a href="https://launchcodecommunity.slack.com/messages/pset6-graffitiwall/" target="_blank">#pset6-graffitiwall</a> channel, which we have set up specifically for the assignment. This channel will serve as a big shared "graffiti wall" on which you and hundreds of other CS50xers will come together and share pearls of wisdom such as:

* "Testing 123..."
* "asdf"
* "malan wuz hear"
* "Why is this not working?"
* "omg it actually worked jk lol"
* "malan rulez!"

It's gonna be wild.

### The Slack API

Before we start building the page, let's take a few minutes to get comfortable with this API.



Go to Vocareum to get the key

Try posting with the curl request and see the result.


### Your Mission

Your job is to create an HTML page with a form that will post messages to the #GraffitWall channel. Your page should look something like this:

<img src="screenshots/graffiti.png"/>

When the user clicks the orange "Scrawl on the Wall" button, the form should submit a "POST" request to the Slack API, and receive a response like this:

<img src="screenshots/response.png"/>

That's not super interesting, but over in our #pset6-graffitiwall channel on Slack, we should now see this:

<img src="screenshots/eatyourveg.png"/>


### Starter code

We have given you some starter code in <a href="graffiti.html" target="_blank">graffiti.html</a>. Copy this code into a new file in your IDE, and take a look.

Up in the `<head>`, we have a `<title>`, followed by a `<link>` to a css stylesheet, which we have also gotten started for you in <a href="styles.html" target="_blank">styles.css</a>.

Next, in the `<body>`, we have a `<div>` with the page heading and tagline. Below that is the heart of the matter, another `<div>` inside of which is the `<form>` where all the action will happen. Currently there is nothing inside the form other than an `id` attribute, and a strange `<input type="hidden" .../>`. More on that in a minute. 

The last thing in our page is a handful of `<script>` tags to run some Javascript code.

### Javascript

What's the deal with this Javascript stuff? Javascript is a programming language that can be run inside a browser. You will learn much more about Javascript in Module 8, and if you go on to do more web development work, especially on the front-end, you will spend lots of time writing JS. 

Of course you have not yet learned any JS, so we have provided you with all of the necessary code, in a file called <a href="constructRequest.html">constructRequest.js</a>. But let's briefly go over what the script does and why we need it in the first place.

The `constructRequest.js` script is performing one particular, crucial task. Our overall goal in this project is send over to Slack an HTTP request containing a few pieces of information, like the name of the channel we want to post to, the username of the poster, and the text content of their message. But recall that the *format* in which the API is expecting to receive that information is very particular. Namely, Slack is expecting an HTTP request with just *one* additional field, called "payload", *inside of which* are the key value pairs describing the information above. 

This is not what an HTML form, left to its own devices, is going to give us. The form wants to create a *separate* field for each of its `<input>` elements. So our script's job is to remedy the situation. The script establishes a function that will be called as soon as the form's submit button is clicked. That function will be executed right before the request is sent out. What the function does is, it combs through each of the `<input>` elements in the form and collects their data, and compiles all that data into a JSON string. Finally, it inserts into the form a *new* `<input>` whose `name` is `"payload"` and whose `value` is that JSON string. Now, when the request is sent, it will contain the "pyload" field that Slack is looking for.



### Select

talk about `<select>`


### Debugging

If you're having trouble, the developer tools are a nice place to do some debugging. 

Show network tabs screenshots


### Adding Styles

css joke gif

http://www.w3schools.com/css/css_form.asp

google stuff


### How to Submit


### 







***

TODO

Something involving cURL and HTML!

Should reinforce the material covered in the 
<a href="../../class1-prep" target="_blank">prep</a>
<a href="../../class2-prep" target="_blank">work</a>.

Should require 5+ hours of work for most students.

## The Notes for the cURL part

#### The Workflow

The flow for the curl part of the PSET should be this:

1. Intro the part of the HTTP protocol that we want to talk about
2. Translate that to curl invocation
3. Execute the command, and have students look at stdout from terminal and from browser

#### The Activities

I have a couple of suggestions of possible APIs to interact with, here are a few:

- [SWAPI](swapi.co) GET only, no auth
- [GitHub](https://developer.github.com/v3/)
- [WikiMedia](https://en.wikipedia.org/w/api.php)
- Google Search
- Slack??
- Twitter??

Because we are going to focus on HTML and CSS in this PSET, I suggest that we focus on
the services that return HTML instead of JSON. 

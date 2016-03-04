##### Module 6

[Back to Class 2 Prep](../class2-prep)

# Resource: HTML Forms

In the [search-0]() walkthrough, David Malan uses an HTML `<form>` to create his own "front end" for Google's search service.

Here is the source code of his HTML page:

```html
```

Let's take a miute to break this down. 

### It's just HTTP 

First things first. It is important to understand is that "searching for something on Google", no matter how you slice it, really just amounts to sending out an HTTP request like this:

```nohighlight
GET /search HTTP/1.1
Host: https://www.google.com
```

An HTML form is simply a nice, user-friendly way of constructing and sending that HTTP request.


### Constructing the Request

There are a handful of ingredients we need in order to create the request:

HTTP Ingredient | Description | Example Value | HTML Form Example | Resulting Query String
|----|----|----|----|----|
`Host` | Where is the request being sent? | `https://www.google.com` | `<form action="https://www.google.com" ... />` | `https://www.google.com`
`Endpoint` or `Path` | Which part of the host site do you want to talk to? | `/search` | `<form action="https://www.google.com/search" ... />` <br> notice we tacked `/search` onto the end | `https://www.google.com/search`
`Method` | What type HTTP request is this? | `GET` | `<form ... method="GET" />` | N/A
additional `Field`s | Anything other info that you need to send, as a key, value pair | What do we want to search for? How about pandas! <br> `q`, `pandas` | `<input name="q" value="panda"/>` | `https://www.google.com/search?q=pandas`

When the user clicks the `<input type="submit" />` button, the request will constructed and sent! 

### Query String

A lot of the info from the request also ends up making an appearance in the resulting URL that the user visits:

`https://www.google.com/search?q=pandas`



to <a href="google.com" target="_blank">google.com</a> right now.

### Use a Form to Construct an HTTP Request


https://www.google.com/search?q=pandas&site=imghp

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

The user's browser, when sending the request, will update the URL in its address bar at the top of the page, indicating that the user has "left" the previous page is now "visiting" the page at this URL:

`https://www.google.com/search?q=pandas`

Notice that most of the information from the request is in fact present in the url (also known as the request's "query string").

HTTP Ingredient | HTML Form Example | Resulting Query String
|----|----|----|
`Host` | `<form action="https://www.google.com" ... />` | `https://www.google.com`
`Endpoint` or `Path` | `<form action="https://www.google.com/search" ... />` <br> notice we tacked `/search` onto the end | `https://www.google.com/search`
additional `Field`s | `<input name="q" value="panda"/>` | `https://www.google.com/search?q=pandas`
`Method` | `<form ... method="GET" />` | N/A. The `method` does nto show up in the query string, but it does have an effect on it. If you use `POST`, then the additonal fields (such as `"q=pandas"`) will not show up in the resulting query string. This is for security purposes.



to <a href="google.com" target="_blank">google.com</a> right now.

### Use a Form to Construct an HTTP Request


https://www.google.com/search?q=pandas&site=imghp

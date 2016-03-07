##### Module 6

[Back to Class 2 Prep](../class2-prep)

# Resource: HTML Forms

In the [search-0](https://www.youtube.com/watch?v=RQ2_TIXBo00&list=PLhQjrBD2T381f7IlC090UL9JN-PJfGoLd&index=14) walkthrough, David Malan uses an HTML `<form>` to create his own "front end" for Google's search service.

Here is the source code of his HTML form:

```html
<form action="https://www.google.com/search" method="get">
    <input name="q" type="text"/>
    <br/>
    <input type="submit" value="CS50 Search"/>
</form>
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

HTTP Ingredient | Description | Example Value | HTML Form Example
|----|----|----|----|
`Host` | Where is the request being sent? | `https://www.google.com` | `<form action="https://www.google.com" ... />` |
`Endpoint` or `Path` | Which part of the host site do you want to talk to? | `/search` | `<form action="https://www.google.com/search" ... />` <br> notice we tacked `/search` onto the end |
`Method` | What type of HTTP request is this? | `GET` | `<form ... method="get" />` |
additional `Field`s | Any other info that you need to send, as a name + value pair | What do we want to search for? <br> How about pandas! <br> `q` + `pandas` | `<input name="q" value="pandas"/>` |

### Sending the Request

When the user clicks the `<input type="submit" />` button, the request will constructed and sent! 

### Query String

The user's browser, when sending the request, will also update the URL in its address bar at the top of the window, to indicate that the user has "left" the previous page and is now visiting this new page:

`https://www.google.com/search?q=pandas`

Notice that the resulting URL (also known as the "query string" for our request) contains a lot of the request's info.

HTTP Ingredient | HTML Form Example | Resulting Query String
|----|----|----|
`Host` | `<form action="https://www.google.com" ... />` | `https://www.google.com`
`Endpoint` or `Path` | `<form action="https://www.google.com/search" ... />` <br> notice we tacked `/search` onto the end | `https://www.google.com/search`
additional `Field`s | `<input name="q" value="panda"/>` | `https://www.google.com/search?q=pandas`
`Method` | `<form ... method="get" />` | N/A. The `Method` will does show up in the query string, but it does have an important effect on it: If your `method` is `POST` rather than `GET`, then the additional `Field`s like (`q=panda`) will not show up in the resulting query string. This is for security purposes if you don't want sensitive information visible in the URL.






to <a href="google.com" target="_blank">google.com</a> right now.

### Use a Form to Construct an HTTP Request


https://www.google.com/search?q=pandas&site=imghp

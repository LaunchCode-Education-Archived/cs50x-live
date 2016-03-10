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

A `<form>` is simply a nice, user-friendly way of constructing and sending that HTTP request.


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

The user's browser, when sending the request, will also update the URL in its address bar at the top of the window, to indicate that the user has "left" the previous page and is now "visiting" this new page:

`https://www.google.com/search?q=pandas`

Notice that the resulting URL (also known as the "query string" for our request) contains a lot of the request's info.

Specifically, notice that the host and endpoint make up the beginning of the url, followed by a `?` mark, followed by the additional field(s). 

If there is more than one additional field, they will be separated with a `&` symbol:

`https://www.google.com/search?q=pandas&fruit=banana`

Host | Endpoint | (`?`) | Field 1 | (`&`) | Field 2 
|----|----|----|----|----|----
`https://www.google.com` | `/search` | `?` | `q=pandas` | `&` | `fruit=banana` 


As an aside, what about the HTTP `method` (ours was `GET`) -- is that refleted in the URL? It is not. But although the query string does not display the method, it is affected by it. If your `method` is `POST` rather than `GET`, then the additional `Field`s like (`q=panda`) will not show up in the string. This is for security purposes in situations where you don't want sensitive information visible in the URL.


### Adding More Fields

If we want to add additional fields to our request, we simply need to add more `<input>` elements to our form. 

For instance, let's say we wanted to do an *image* search. It turns out that the way to specify a google image search is to include another field in your request: the `"tbm"` field should have a value of `"isch"` (I have no idea what those keywords mean, I just know it works). We want our url to look like this https://www.google.com/search?q=pandas&tbm=isch. So we simply need to add another input:

```html
<form action="https://www.google.com/search" method="get">
    <input name="q" type="text"/>
    <br/>
    <input name="tbm" value="isch" type="text"/>
    <br/>
    <input type="submit" value="CS50 Search"/>
</form>
```

Check out <a href="./image-search-0.html" target="_blank"l>image-search-0.html</a> to see this in action.

### Hidden Inputs

In <a href="./image-search-0.html" target="_blank"l>image-search-0.html</a>, the resulting form looks kind of silly because we added that extra input, so the user now sees a text field with `"isch"` inside it.

We don't actually want the user to see this field, or to be able to change it. There is a special input type, `"hidden"`, which allows us to fix this problem by including additional fields to our request, but without actually rendering anything visible to the screen:

```html
<input name="tbm" value="isch" type="hidden"/>
```

Check out <a href="./image-search-1.html" target="_blank"l>image-search-1.html</a> to see the result. The extra `<input>` is no longer visible, but we still are able to do an image search and look at pictures of pandas.


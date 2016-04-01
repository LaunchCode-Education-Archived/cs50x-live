##### Module 8

[Back to Class 2](../../class2)

# Studio: AJAXson 5

One of the classic problems in computer science is the question of how to optimally implement a web page that displays GIFs of the Jackson 5. Today you'll take a stab at it.

### The Giphy API

You are going to use the <a href="https://github.com/Giphy/GiphyAPI" target="_blank">Giphy API</a>, whose purpose, as you can probably guess, is to serve up GIFs to developers. The basic goal of your site will be to fetch a GIF from Giphy, and then insert it into your page. We'll get into the details shortly, but first, let's play with Giphy for a minute.

The host url we want is `http://api.giphy.com/v1/gifs/`. Try typing the following into your terminal:

```nohighlight
$ curl http://api.giphy.com/v1/gifs/
{"meta":{"status":404,"msg":"Not Found!"}}
```

We recieved a 404 Not Found response from Giphy. Maybe they ran out of GIFs?

Actually, the problem is that we need to choose an "endpoint" to indicate which specific service we want. The endpoints are all listed in the documentation linked above, if you want to check them out. For this assignment, we will use the Random endpoint, which responds to every request with randomly chosen GIF related to a particular topic (unless you don't provide a specific topic, in which case you might get anything at all). 

The url for the Random endpoint is simply `/random`, so let's try this:

```nohighight
$ curl http://api.giphy.com/v1/gifs/random
{"meta":{"status":403,"msg":"Forbidden"}}
```

This time we got a different error, 403 Forbidden. Like most APIs, Giphy requires us to authorize ourselves with a key. Luckily, they make a public "Beta" key available for people like us who are just testing, playing around, or doing Studios. The key is "dc6zaTOxFJmzC". 

Let's try adding the this magic string as a parameter to url, along with the key name "api_key":

```nohighlight
$ curl http://api.giphy.com/v1/gifs/random?api_key=dc6zaTOxFJmzC
{"data":{"type":"gif","id":"2sRsQBlp32UCI","url":"http:\/\/giphy.com\/gifs\/no-i-dont-approve-2sRsQBlp32UCI","image_original_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif","image_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif","image_mp4_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.mp4","image_frames":"12","image_width":"500","image_height":"282","fixed_height_downsampled_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/200_d.gif","fixed_height_downsampled_width":"355","fixed_height_downsampled_height":"200","fixed_width_downsampled_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/200w_d.gif","fixed_width_downsampled_width":"200","fixed_width_downsampled_height":"113","fixed_height_small_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/100.gif","fixed_height_small_still_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/100_s.gif","fixed_height_small_width":"177","fixed_height_small_height":"100","fixed_width_small_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/100w.gif","fixed_width_small_still_url":"http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/100w_s.gif","fixed_width_small_width":"100","fixed_width_small_height":"56","username":"","caption":""},"meta":{"status":200,"msg":"OK"}}
```

We got some stuff! It's not very readable, but if we paste it into a <a href="http://jsonprettyprint.com" target="_blank">json prettifyer</a>, we can see the structure very clearly:

```json
{
  "data": {
    "type": "gif",
    "id": "2sRsQBlp32UCI",
    "url": "http:\/\/giphy.com\/gifs\/no-i-dont-approve-2sRsQBlp32UCI",
    "image_original_url": "http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif",
    "image_url": "http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif",
    "image_mp4_url": "http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.mp4",
    "image_frames": "12",
    "image_width": "500",
    "image_height": "282",
    ...
  },
  "meta": {
    "status": 200,
    "msg": "OK"
  }
}
```

That's a lot of data for just one GIF. For our purposes, the only thing we care about is the value of the `"image_url"` key, which is inside of the `"data"` key.

http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif

If we set this url to the `"src"` attribute of an `<img>` tag in HTML, like so:

```html
<img src="http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif"/>
```

the result will be a GIF on our page!

<img src="http:\/\/media3.giphy.com\/media\/2sRsQBlp32UCI\/giphy.gif"/>

* host
* random endpoint
* params
  * key
  * tag
* the response json, which aprts do we care about?


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

* get it
* brief tour
* no css

### Guidance
 
* stuff they'll use
  * `$.ajax()`
  * `$().attr()`
  * `$().html()`
  * `$().submit()`
  * `$().find()`
  * making a js object
  * anonymous functions

### How to Submit

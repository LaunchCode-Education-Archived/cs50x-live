##### Module 6 
[Back to Class 1 Prep](../../class1-prep)

# Follow Along: cURL

There's a really cool program called `cURL` that allows us to make HTTP requests on the command line.

Follow along as we use curl to practice speaking HTTP-ese with the machines.

In your IDE, make a directory as usual, at `module6/followalongs/curl/`, and then navigate to that spot.

Then type the following into your terminal:

```nohighlight
curl google.com
```

You should see the following response:

```nohighlight
$ curl google.com
<HTML><HEAD><meta http-equiv="content-type" content="text/html;charset=utf-8">
<TITLE>301 Moved</TITLE></HEAD><BODY>
<H1>301 Moved</H1>
The document has moved
<A HREF="http://www.google.com/">here</A>.
</BODY></HTML>
```

Cool! We just sent an HTTP request to Google, and got back some HTML from them.

Using the `-v` option will allow us to see the HTTP headers that were passed back and forth. Run the same command again with `-v` inserted:

```nohighlight
$ curl -v google.com                                                                               
```

and you should see a response like this:

```nohighlight
* Rebuilt URL to: google.com/
* Hostname was NOT found in DNS cache
*   Trying 209.85.146.113...
* Connected to google.com (209.85.146.113) port 80 (#0)
> GET / HTTP/1.1
> User-Agent: curl/7.35.0
> Host: google.com
> Accept: */*
> 
< HTTP/1.1 301 Moved Permanently
< Location: http://www.google.com/
< Content-Type: text/html; charset=UTF-8
< Date: Mon, 29 Feb 2016 17:42:30 GMT
< Expires: Wed, 30 Mar 2016 17:42:30 GMT
< Cache-Control: public, max-age=2592000
* Server gws is not blacklisted
< Server: gws
< Content-Length: 219
< X-XSS-Protection: 1; mode=block
< X-Frame-Options: SAMEORIGIN
< 
<HTML><HEAD><meta http-equiv="content-type" content="text/html;charset=utf-8">
<TITLE>301 Moved</TITLE></HEAD><BODY>
<H1>301 Moved</H1>
The document has moved
<A HREF="http://www.google.com/">here</A>.
</BODY></HTML>
* Connection #0 to host google.com left intact
```

Above, we can see the HTTP *request* that we sent, and the *response* that we received back. 

The request was:

```nohighlight
> GET / HTTP/1.1
> User-Agent: curl/7.35.0
> Host: google.com
> Accept: */*
```

We made a `GET` request to `/` (the root page) of the host `google.com` using `HTTP` version `1.1`, via `curl`, and we said that we were able to accept a response in any format.

The remainder of what is shown is the response we received back. 

The response is broken into two parts: the headers, and the body. You can think of the response as an envelope with a letter inside. The headers are various pieces of "meta-data", the stuff you would write on the outside of the envelope, and the body is the actual letter itself.

For now we can ignore most of the headers we received, but let's take a look at the first two lines:
```nohighlight
< HTTP/1.1 301 Moved Permanently
< Location: http://www.google.com/
```

As you can see, we received a response code of `301`, representing `Moved Permanently`. Essentially, 


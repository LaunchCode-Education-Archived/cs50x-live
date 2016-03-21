##### Module 7

[Back to Class 1 Prep](../class1-prep)

# Resource: Hello Server

Let's get some PHP working on the web! Follow along with this tutorial.

### Setting Up

As usual, make a new folder:

```nohighlight
$ cd module7/followalongs
$ mkdir helloserver
```

### Writing the Code

Next, inside that folder, make a new file called `helloserver.php`.

```nohighlight
$ touch helloserver/helloserver.php
```

Now open up that new file, and add the following line:

```php
<?php print("Hello!\n"); ?>
```

### Run it

If we run this file from the command line, we should see "Hello!" echoed out to the console:

```nohighlight
$ php helloserver/helloserver.php
$ Hello!
```

But that's boring. You came here to see some server action, didn't you?

### Serve it up

Let's serve this file up on the internet so that anyone can visit it! Run the following command:

```nohighlight
$ apache50 start helloserver/
Setting Apache's document root to /home/ubuntu/workspace/module7/followalongs/helloserver ...
 * Starting web server apache2
 * 
Apache started successfully!
Your site is now available at https://ide50-jharvard.c9users.io
```

This starts up an Apache server. The server will listen for incoming requests at `https://ide50-jharvard.c9users.io` (but with your username instead of `jharvard`), and respond with the output of files inside the `/helloserver/` directory (or one of its subfolders, if we make some subfolders). 

At this point you normally would be able to visit `https://ide50-jharvard.c9users.io` in any internet browser window, but in our case there is an extra hurdle in the way: you have to log in to Cloud9. You can see this for yourself if you try visiting that url-- you will hit a wall with a login prompt. We don't have Cloud9 usernames (you used your edX credentials to sign up), so you will not be able to log in here.

Luckily, CS50 has provisioned a different url to which we can send requests to our Cloud9 server. In the url above, replace the word `c9users` with `cs50`, yielding `https://ide50-jharvard.cs50.io`, and you should be in!

Specifically, you should see an ugly page that says *Index of /* at the top, and a list of files underneath, which should contain just one file, our `helloserver.php`.

Visit the file by clicking the link (or by typing `https://ide50-jharvard.cs50.io/helloserver.php` in the address bar). You should see a page that says "Hello!" !

### Recap

So what's happening here?

When we visit `https://ide50-jharvard.cs50.io/helloserver.php`, our browser sends an HTTP request like this:

```nohighlight
GET /helloserver.php HTTP/1.1
https://ide50-jharvard.cs50.io
```

Our server (`apache50`) is listening for requests just like this. When the request comes in, the server looks for a file called `helloserver.php` inside of its working directory (which we told it should be `~/workspace/module7/followalongs/helloserver` back when we ran the command to start it).

Once the server succeeds in finding a `helloserver.php` file, what happens next? The server sends the file back to the browser, right? Almost, but not quite. The server does not send file itself, but rather it responds with an HTTP request, the body of which contains *the result of running the file*. 

In our case, the result of running the `helloserver.php` file is simply the string `"Hello!"`. So the server responds with an HTTP response like this:

```nohighlight
200 OK

Hello!
```

### Outputting HTML

In a more realistic case, the PHP file will probably spit out a bunch of HTML code. The HTTP response might look like this:

```nohighlight
200 OK

<!DOCTYPE html>
<html>
<head>
  <title>Facebook - Log In or Sign Up</title>
</head>
<body>
  <h1>This is Facebook</h1>
  ...
```

So how do we spit that hot HTML fire? It's actually very easy. Recall that PHP is designed specifically for this purpose, to intermingled with HTML. All you have to do is write HTML code directly into your PHP file. Any text that is not placed between those special `<?php` `?>` delimiters (such as your HTML), will automatically be included in the resulting output when the file runs. 

Let's see an example. Copy [facebook.php](./facebook.html) into your IDE, and then run it in the terminal:

```nohighlight
php helloserver/facebook.php
<!DOCTYPE html>
<html>
<head>
  <title>Facebook - Log In or Sign Up</title>
</head>
<body>
  <h1>This is Facebook</h1>
  <p>You have 3000 friends!</p>
</body>
</head>
</html>
```

And if you visit `https://ide50-jharvard.cs50.io/facebook.php` in a browser, you should see that HTML rendered as a web page.

### Inserting PHP

But we didn't come all this way just to return static HTML. After all, if we wanted that, we might as well just use a `.html` file. The beauty of returning HTML content from within a programming language like PHP is that we can dynamically decide exactly what content we want to respond with.

How do we make those dynamic manipulations to our content? It's just a matter of switching over to PHP mode by using those magic `<?php` `?>` delimiters. 

Here's an example: in `facebook.php`, replace this line:

```html
<p>You have 3000 friends!</p>
```

with this:

```php
<p> 
  You have
  <?php 
    $casualAcquaintances = 3000;
    $bffs = 5;
    print(casualAcquaintances + bffs);
  ?>
  friends!
</p>
```

Re-running the program on the command-line should now result in the following:

```nohighlight
php helloserver/facebook.php
<!DOCTYPE html>
<html>
<head>
  <title>Facebook - Log In or Sign Up</title>
</head>
<body>
  <h1>This is Facebook</h1>
  <p>You have 3005 friends!</p>
</body>
</head>
</html>
```

Using PHP we were able to do a some math and dynamically generate our output based on the result of the math. Heyo!

This example is still very over-simplified and contrived, but in the next few follow alongs and exercises you will see some much more realistic scenarios where you will have to generate your response by taking into account some input from the user.





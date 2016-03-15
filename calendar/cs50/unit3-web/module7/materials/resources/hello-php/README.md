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
<?php echo "Hello!\n" ?>
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

This starts up an Apache server. The server will listen for incoming requests at `https://ide50-jharvard.c9users.io` (but with your username instead of `jharvard`), and respond the output of files inside the `/helloserver/` directory (or one of its subfolders, if we make some subfolders). 

At this point you normally would be able to visit `https://ide50-jharvard.c9users.io` in any internet browser window, but in our case there is an extra hurdle in the way: you have to log in to Cloud9. Go ahead and try visiting that url, and you should see a login prompt. We don't have Cloud9 usernames (you used your edX credentials to sign up), so you will not be able to login here.

Luckily, CS50 has provisioned a different place we can go to visit our Cloud9 server. In the url above, replace the word `c9users` with `cs50`, yielding `https://ide50-jharvard.cs50.io`, and you should be in!

Specifically, you should see an ugly page that says *Index of /* at the top, and a list of files underneath, which should contain just one file, our `helloserver.php`.

Visit the file by clicking the link (or by typing `https://ide50-jharvard.cs50.io/helloserver.php` in the address bar). You should see a page that says "Hello!" !








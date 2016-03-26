##### Module 7

[Back to Class 2](../class2)

# Studio: Greetings

Today you will use your new SQL skills to build a full website with a PHP back end and a database that persists user data!

### The Goal

TODO

### Starter Code

We have provided you with some starter code. Download it using the `wget` command:

```nohighlight
$ cd ~/workspace/module7/studios/
$ wget education.launchcode.org/calendar/cs50/unit3-web/module7/materials/studios/greetings/greetings.zip
```

Unzip the `.zip` archive, confirm that you now have a `greetings` directory, and then delete the archive:

```nohighlight
$ unzip greetings.zip
$ ls 
greetings/ greetings.zip mult_table/
$ rm -f greetings.zip
```

### A Brief Tour

Let's see what the project looks like so far.

```nohighlight
$ cd greetings
$ ls 
config.json  greetings.sql  includes/  public/  vendor/  views/
```

A lot of stuff in there!

``` nohighlight
.
├── config.json
├── public
    ├── greet.php
    └── index.php
├── includes
    └── helpers.php
└── views
    ├── footer.php
    ├── greeting_display.php
    ├── greeting_form.php
    └── header.php
├── vendor
    └── library50-php-5
        └── CS50
            ├── CS50.php
            └── share
                └── [a bunch of stuff we don't care about]
                └── ...
```



##### Module 7

[Back to Class 2](../class2)

# Studio: Greetings

Today you will use your new SQL skills to build a full website with a PHP back end and a database that persists user data!

Your site will also follow good MVC conventions.

### The Goal

Here is what we are trying to accomplish:

TODO screenshots and explanation

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
config.json includes/  public/  vendor/  views/
```

A lot of stuff in there! If we expand it, it looks like this:

``` nohighlight
├── config.json
├── public
    ├── greet.php
    └── index.php
└── views
    ├── greeting_form.php
    ├── greeting_display.php
    └── header.php
    ├── footer.php
├── includes
    └── helpers.php
├── vendor
    └── library50-php-5
        └── CS50
            ├── CS50.php
            └── share
                └── [a bunch of stuff we don't care about]
                └── ...
```

##### `public/`

The `public/` directory contains our Controllers, the pages that our site makes publicly available for users to visit. You should be pretty familiar by now with the following 2-page form/reponse dynamic:
* `index.php`, our "home page", displays a form where the user can submit her name and choose a greeting
* `greet.php` is the file that receives and handles the submission of the form.

##### `includes/`

Over in the `includes/` folder is just one file, `helpers.php`, which contains a few helper functions:
* `render()` receives the name of a "template" file, and optionally some extra data that the template file will need. This function should check to see if the template file actually exists, and if so, render it by simply calling `require()` on it
* `create_new_greeting()` receives a string representing a new custom greeting fom the user (e.g. "I like lizards"). It should add a new row to the database for that string, but only after checking to make sure the database does not *already* have a greeting whose text is this string.


##### `views/`

If you glance through the source code for the two public pages, `index.php` and `greet.php`, you might notice that neither contains any HTML. That's because, as per MVC, we want these Controller files to handle our core "business logic" only-- we do not want the Controllers to worry about the details of how stuff looks on screen. Any code specifying how stuff looks should be factored out into separate "template" View files, which our Controllers can combine together to assemble the overall response that ultimately gets returned back to the client. 

For example, notice that the bottom of each of those Controller files is a section where we "render stuff", by calling the `render()` function in `helpers.php`



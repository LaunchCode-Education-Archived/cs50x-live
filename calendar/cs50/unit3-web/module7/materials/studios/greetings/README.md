##### Module 7

[Back to Class 2](../class2)

# Studio: Greetings

Today you will use your new SQL skills to build a full website with a PHP back end and a database that persists user data!

Your site will also follow good MVC conventions.

This is a big, hearty studio, with lots of work to do. Oh boy!

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
├── views
    ├── greeting_form.php
    ├── greeting_display.php
    └── header.php
    ├── footer.php
├── includes
    └── helpers.php
└── vendor
    └── library50-php-5
        └── CS50
            ├── CS50.php
            └── (a bunch of other things we don't need to care about)
                ├── ... 
```

##### The `public/` Folder

The `public/` directory contains our Controllers, the pages that our site makes publicly available for users to visit. You should be pretty familiar by now with the following 2-page form/reponse dynamic:
* `index.php`, our "home page", displays a form where the user can submit her name and choose a greeting
* `greet.php` is the file that receives and handles the submission of the form.

##### The `includes/` Folder

Over in the `includes/` folder is just one file, `helpers.php`, which contains a few helper functions:
* `render()` receives the name of a "template" file, and optionally some extra data that the template file will need. This function should check to see if the template file actually exists, and if so, render it by simply calling `require()` on it.
* `create_new_greeting()` receives a string representing a new custom greeting fom the user (e.g. "I like lizards"). It should add a new row to the database for that string, but only after checking to make sure the database does not *already* contain a greeting with identical text.

##### The `views/` Folder

If you glance through the source code for the two public pages, `index.php` and `greet.php`, you might notice that neither contains any HTML. That's because, as per MVC, we want those Controller files to handle our core "business logic" only-- we do not want the Controllers to worry about the details of how stuff looks on screen. Any code specifying how stuff looks should be factored out into separate "template" View files, which our Controllers simply combine together to assemble the overall response that ultimately gets returned back to the client. 

For example, notice that at the bottom of each of those Controller files is a section where we "render stuff", by passing various template files to the the `render()` function from `helpers.php`. There are 4 such templates in the `views/` folder:
* `header.php` is some basic boilerplate HTML that goes at the top of a page
* `footer.php` is similar basic HTML for the bottom of a page
* `greeting_form.php` is the form that users fill out when they visit the home page
* `greeting_display.php` is the greeting that users see after submitting the form

Both Controllers follow a similar pattern of rendering the `header.php` and `footer.php` Views first and last respectively, with a more interesting piece of content sandwiched in between.

##### The `vendor/` folder

The `vendor` folder is where we have placed all 3rd-party code that other people wrote that we would like to use in our project. 

There is really only one 3rd-party library that we are using directly, and that is a small library written by the CS50 folks in a file called `CS50.php`. This library simplifies the process of connecting to and interacting with a database, freeing us to focus our SQL queries instead of the grunt work required to set up a connection, authenticate ourselves, and so on.

Incidentally, there are a bunch more libraries in this folder, because the CS50 library itself is dependent on them. But we don't have to care about that for the purposes of this project.

### Getting Started

Here we go!

The first thing to do is to create your database. Follow along as we walk you though how to do that. 

First, start up your apache server:

```nohighlight
$ apache50 start public/
Setting Apache's document root to /home/ubuntu/workspace/module7/studios/greetings/public ...
 * Starting web server apache2
 * 
Apache started successfully!
Your site is now available at https://ide50-jharvard.c9users.io
```

Next, start up another separate server for the database:

```nohighlight
$ mysql50 start
 * Starting MySQL database server mysqld
   ...done.
 * Checking for tables which need an upgrade, are corrupt or were 
not closed cleanly.
```

This server establishes a communication channel between our back end and our database, so that we can read from and write to the database.

But we don't yet have a database! Let's create one.

If you head over `https://ide50-jharvard.cs50.io` (with your username instead of "jharvard"), you will see a big orange error on the screen. This is because we don't have a database yet. Go to the address bar and add `/phpmyadmin` onto the end of your url, yielding `https://ide50-jharvard.cs50.io/phpmyadmin`, and hit Enter.

You should now arrive at a login screen for something called phpMyAdmin. phpMyAdmin is a tool that allows you to manage your MySQL database. Let's log in. You can find your username and password by running some magic commands in the terminal:

```nohighlight
$ username50 
jharvard
$ password50
123456789
```

Once you log in, click on the `SQL` tab in the menu at the top (towards the left). This tool allows you to write SQL code to create and edit databases.

Paste the following code into the textbox:

```SQL
--
-- Database: `module7studio`
--

CREATE DATABASE IF NOT EXISTS module7studio;
USE module7studio;

-- --------------------------------------------------------

--
-- Create a table `greetings`
--

CREATE TABLE IF NOT EXISTS `greetings` (
  id int(10) unsigned NOT NULL AUTO_INCREMENT,
  text varchar(255) NOT NULL,
  num_times int(10) unsigned NOT NULL,
  PRIMARY KEY (id),
  UNIQUE KEY text (text)
) ENGINE=InnoDB;

--
-- Add some data to table `greetings`
--

INSERT INTO greetings (text) VALUES('Hello');
INSERT INTO greetings (text) VALUES('Cheers');
INSERT INTO greetings (text) VALUES('What is up');

```

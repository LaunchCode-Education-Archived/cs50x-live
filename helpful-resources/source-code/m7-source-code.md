# Module 7 Source Code
You will find the source code for the follow-alongs that you will complete during Module 7.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/7/w/src7w/" target="_blank"><b>Lecture: Week 7, Continued Source Code</b></a>

<a href="http://cdn.cs50.net/2015/fall/lectures/8/m/src8m/" target="_blank"><b>Lecture: Week 8 Source Code</b></a>

## Prep for Class 1

### Froshims Instructions
There will be multiple files for these follow-alongs and you can download the official source code to get all of the files.  Class 1 Prep will only need the froshims directory so you will copy the entire zip file and then delete the other files / folders that are not needed by running the following commands in your terminal:

Download the source code zip file in the `module7/followalongs` directory.
```
$ cd ~/workspace/module7/followalongs
$ wget http://cdn.cs50.net/2015/fall/lectures/7/w/src7w.zip
```
Unzip and delete the file
```
$ unzip src7w.zip 
$ rm -f src7w.zip 
```
Change into the `src7w` directory and list the contents.  You should have 3 directories `froshims/`, ` mispellings/`, and `text/` as well as 3 files named `conditions`, `hello` and `return`.  You will delete all of the folders / files except for `froshims/`.
```
$ cd src7w
$ ls
conditions-1  froshims/  hello  mispellings/  return  text/
$ rm -f -r mispellings -r text conditions-1 hello return
```
Now you can copy froshims to the directory `~/workspace/module7/followalongs`, because it is currently located in `~/workspace/module7/followalongs/src7w` directory.  After copying it go to the parent directory `~/workspace/module7/followalongs` and list the files to show the `src7w` and `froshims` directories.  
```
$ cp -r froshims ~/workspace/module7/followalongs/froshims
$ cd ..
$ ls
froshims/  src7w/
```
Delete the `src7w` directory. You should now have only the `froshims` directory.
```
$ rm -f -r src7w
$ ls
froshims/
```
  
#### froshims-0

```html
<?php

    /**
     * froshims-0.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Implements a registration form for Frosh IMs.
     * Submits to register-0.php.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Frosh IMs</title>
    </head>
    <body style="text-align: center;">
        <h1>Register for Frosh IMs</h1>
        <form action="register-0.php" method="post">
            Name: <input name="name" type="text"/>
            <br/>
            <input name="captain" type="checkbox"/> Captain?
            <br/>
            <input name="comfort" type="radio" value="less"/> Less Comfortable
            <input name="comfort" type="radio" value="more"/> More Comfortable
            <br/>
            Dorm:
            <select name="dorm">
                <option value=""></option>
                <option value="Apley Court">Apley Court</option>
                <option value="Canaday">Canaday</option>
                <option value="Grays">Grays</option>
                <option value="Greenough">Greenough</option>
                <option value="Hollis">Hollis</option>
                <option value="Holworthy">Holworthy</option>
                <option value="Hurlbut">Hurlbut</option>
                <option value="Lionel">Lionel</option>
                <option value="Matthews">Matthews</option>
                <option value="Mower">Mower</option>
                <option value="Pennypacker">Pennypacker</option>
                <option value="Stoughton">Stoughton</option>
                <option value="Straus">Straus</option>
                <option value="Thayer">Thayer</option>
                <option value="Weld">Weld</option>
                <option value="Wigglesworth">Wigglesworth</option>
            </select>
            <br/>
            <input type="submit" value="Register"/>
        </form>
    </body>
</html>
```
#### froshims-1
You will need the `bootstrap.min.css` stylesheet located <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/src7w/froshims/bootstrap/css/" target="_blank">here</a>. You should already have it, but if you did not download all of the source code you can follow the [instructions](#froshims-instructions) above.
```html
<?php

    /**
     * froshims-1.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Implements a registration form for Frosh IMs.
     * Submits to register-1.php.
     *
     * Demonstrates Bootstrap (http://getbootstrap.com/).
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <link href="bootstrap/css/bootstrap.min.css" rel="stylesheet"/>
        <title>Frosh IMs</title>
    </head>
    <body style="margin: 20px;">
        <h1>Register for Frosh IMs</h1>
        <form action="register-1.php" method="post">
            <fieldset>
                <label>Name</label>
                <input name="name" type="text"/>
                <label class="checkbox">
                    <input name="captain" type="checkbox"/> Captain?
                </label>
                <label class="radio">
                    <input name="comfort" type="radio" value="less"/> Less Comfortable
                </label>
                <label class="radio">
                    <input name="comfort" type="radio" value="more"/> More Comfortable
                </label>
                <label>
                    <select name="dorm">
                        <option value=""></option>
                        <option value="Apley Court">Apley Court</option>
                        <option value="Canaday">Canaday</option>
                        <option value="Grays">Grays</option>
                        <option value="Greenough">Greenough</option>
                        <option value="Hollis">Hollis</option>
                        <option value="Holworthy">Holworthy</option>
                        <option value="Hurlbut">Hurlbut</option>
                        <option value="Lionel">Lionel</option>
                        <option value="Matthews">Matthews</option>
                        <option value="Mower">Mower</option>
                        <option value="Pennypacker">Pennypacker</option>
                        <option value="Stoughton">Stoughton</option>
                        <option value="Straus">Straus</option>
                        <option value="Thayer">Thayer</option>
                        <option value="Weld">Weld</option>
                        <option value="Wigglesworth">Wigglesworth</option>
                    </select>
                </label>
                <button class="btn btn-default" type="submit">Register</button>
            </fieldset>
        </form>
    </body>
</html>
```
#### froshims-2

```html
<?php

    /**
     * froshims-2.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Implements a registration form for Frosh IMs.
     * Submits to register-2.php.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Frosh IMs</title>
    </head>
    <body style="text-align: center;">
        <h1>Register for Frosh IMs</h1>
        <form action="register-2.php" method="post">
            Name: <input name="name" type="text"/>
            <br/>
            <input name="captain" type="checkbox"/> Captain?
            <br/>
            <input name="comfort" type="radio" value="less"/> Less Comfortable
            <input name="comfort" type="radio" value="more"/> More Comfortable
            <br/>
            Dorm:
            <select name="dorm">
                <option value=""></option>
                <option value="Apley Court">Apley Court</option>
                <option value="Canaday">Canaday</option>
                <option value="Grays">Grays</option>
                <option value="Greenough">Greenough</option>
                <option value="Hollis">Hollis</option>
                <option value="Holworthy">Holworthy</option>
                <option value="Hurlbut">Hurlbut</option>
                <option value="Lionel">Lionel</option>
                <option value="Matthews">Matthews</option>
                <option value="Mower">Mower</option>
                <option value="Pennypacker">Pennypacker</option>
                <option value="Stoughton">Stoughton</option>
                <option value="Straus">Straus</option>
                <option value="Thayer">Thayer</option>
                <option value="Weld">Weld</option>
                <option value="Wigglesworth">Wigglesworth</option>
            </select>
            <br/>
            <input type="submit" value="Register"/>
        </form>
    </body>
</html>
```
#### froshims-3

```html
<?php

    /**
     * froshims-3.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Implements a registration form for Frosh IMs.
     * Submits to register-3.php.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Frosh IMs</title>
    </head>
    <body style="text-align: center;">
        <h1>Register for Frosh IMs</h1>
        <form action="register-3.php" method="post">
            Name: <input name="name" type="text"/>
            <br/>
            <input name="captain" type="checkbox"/> Captain?
            <br/>
            <input name="comfort" type="radio" value="less"/> Less Comfortable
            <input name="comfort" type="radio" value="more"/> More Comfortable
            <br/>
            Dorm:
            <select name="dorm">
                <option value=""></option>
                <option value="Apley Court">Apley Court</option>
                <option value="Canaday">Canaday</option>
                <option value="Grays">Grays</option>
                <option value="Greenough">Greenough</option>
                <option value="Hollis">Hollis</option>
                <option value="Holworthy">Holworthy</option>
                <option value="Hurlbut">Hurlbut</option>
                <option value="Lionel">Lionel</option>
                <option value="Matthews">Matthews</option>
                <option value="Mower">Mower</option>
                <option value="Pennypacker">Pennypacker</option>
                <option value="Stoughton">Stoughton</option>
                <option value="Straus">Straus</option>
                <option value="Thayer">Thayer</option>
                <option value="Weld">Weld</option>
                <option value="Wigglesworth">Wigglesworth</option>
            </select>
            <br/>
            <input type="submit" value="Register"/>
        </form>
    </body>
</html>
```

## Prep for Class 2

### MVC Instructions
There will be multiple files for these follow-alongs and you can download the official source code to get all of the files.  Class 2 Prep will only need the `mvc` directory so you will copy the entire zip file and then delete the other files / folders that are not needed by running the following commands in your terminal:

Download the source code zip file in the `module7/followalongs` directory.
```
$ cd ~/workspace/module7/followalongs
$ wget http://cdn.cs50.net/2015/fall/lectures/8/m/src8m.zip
```
Unzip and delete the file
```
$ unzip src8m.zip 
$ rm -f src8m.zip 
```
Change into the `src8m` directory and list the contents.  You should have 2 directories ` mvc/`, and `quote/` as well as 1 php file named `counter.php`.  You will delete all of the folders / files except for `mvc/`.
```
$ cd src8m
$ ls
counter.php  mvc/  quote/
$ rm -f -r quote counter.php
```
Now you can copy `mvc` to the directory `~/workspace/module7/followalongs`, because it is currently located in `~/workspace/module7/followalongs/src8m` directory.  After copying it, go to the parent directory `~/workspace/module7/followalongs` and list the files to show the `src8m` and `mvc` directories. (You should also see the `froshims` directory from Prep for Class 1.)
```
$ cp -r mvc ~/workspace/module7/followalongs/mvc
$ cd ..
$ ls
froshims/ mvc/ src8m/
```
Delete the `src8m` directory. You should now have only the `mvc` (and `froshims`) directory.
```
$ rm -f -r src8m
$ ls
froshims/ mvc/
```

#### mvc-0
###### 0/index.php
```html
<?php 

    /**
     * index.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * A home page for the course.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>CS50</title>
    </head>
    <body>
        <h1>CS50</h1>
        <ul>
            <li><a href="lectures.php">Lectures</a></li>
            <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
        </ul>
    </body>
</html>
```

###### 0/lectures.php
```html
<?php 

    /**
     * lectures.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Links to lectures.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Lectures</title>
    </head>
    <body>
        <h1>Lectures</h1>
        <ul>
            <li><a href="week0.php">Week 0</a></li>
            <li><a href="week1.php">Week 1</a></li>
        </ul>
    </body>
</html>
```

###### 0/week0.php
```html
<?php 

    /**
     * week0.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Represents Week 0.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Week 0</title>
    </head>
    <body>
        <h1>Week 0</h1>
        <ul>
            <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wednesday</a></li>
            <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
        </ul>
    </body>
</html>
```

###### 0/week1.php
```html
<?php 

    /**
     * week1.php
     *
     * David J. Malan
     * malan@harvard.edu
     *
     * Represents Week 1.
     */

?>

<!DOCTYPE html>

<html>
    <head>
        <title>Week 1</title>
    </head>
    <body>
        <h1>Week 1</h1>
        <ul>
            <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf">Monday</a></li>
            <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf">Wednesday</a></li>
        </ul>
    </body>
</html>
```
#### mvc-1

###### 1/footer.php
```html

    </body>
</html>
```

###### 1/header.php
```html
<!DOCTYPE html>

<html>
    <head>
        <title>CS50</title>
    </head>
    <body>
        <h1>CS50</h1>
```

###### 1/index.php
```php
<?php require("header.php"); ?>

<ul>
    <li><a href="lectures.php">Lectures</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
</ul>

<?php require("footer.php"); ?>
```

###### 1/lectures.php
```php
<?php require("header.php"); ?>

<ul>
    <li><a href="week0.php">Week 0</a></li>
    <li><a href="week1.php">Week 1</a></li>
</ul>

<?php require("footer.php"); ?>
```

###### 1/week0.php
```php
<?php require("header.php"); ?>

<ul>
  <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wednesday</a></li>
  <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
</ul>

<?php require("footer.php"); ?>
```

###### 1/week1.php
```php
<?php /* week1.php */ ?>

<?php require("header.php"); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf">Monday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf">Wednesday</a></li>
</ul>

<?php require("footer.php"); ?>
```

#### mvc-2

###### 2/footer.php
```html
    </body>
</html>
```

###### 2/header.php
```php
<!DOCTYPE html>

<html>
    <head>
        <title><?= htmlspecialchars($title) ?></title>
    </head>
    <body>
        <h1><?= htmlspecialchars($title) ?></h1>
```

###### 2/helpers.php
```php
<?php

    /**
     * Renders footer.
     */
    function renderFooter($data = [])
    {
        extract($data);
        require("footer.php");
    }

    /**
     * Renders header.
     */
    function renderHeader($data = [])
    {
        extract($data);
        require("header.php");
    }

?>
```

###### 2/index.php
```php
<?php require("helpers.php"); ?>

<?php renderHeader(["title" => "CS50"]); ?>

<ul>
    <li><a href="lectures.php">Lectures</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
</ul>

<?php renderFooter(); ?>
```

###### 2/lectures.php
```php
<?php require("helpers.php"); ?>

<?php renderHeader(["title" => "Lectures"]); ?>

<ul>
    <li><a href="week0.php">Week 0</a></li>
    <li><a href="week1.php">Week 1</a></li>
</ul>

<?php renderFooter(); ?>
```

###### 2/week0.php
```php
<?php require("helpers.php"); ?>

<?php renderHeader(["title" => "Week 0"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wednesday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
</ul>

<?php renderFooter(); ?>
```

###### 2/week1.php
```php
<?php require("helpers.php"); ?>

<?php renderHeader("title" => "Week 1"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf">Monday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf">Wednesday</a></li>
</ul>

<?php renderFooter(); ?>
```
#### mvc-3

###### 3/footer.php
```html

    </body>
</html>
```

###### 3/header.php
```php
<!DOCTYPE html>

<html>
    <head>
        <title><?= htmlspecialchars($title) ?></title>
    </head>
    <body>
        <h1><?= htmlspecialchars($title) ?></h1>
```

###### 3/helpers.php
```php
<?php

    /**
     * Renders template.
     */
    function render($template, $data = [])
    {
        $path = $template . ".php";
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }

?>
```

###### 3/index.php
```php
<?php require("helpers.php"); ?>

<?php render("header", ["title" => "CS50"]); ?>

<ul>
    <li><a href="lectures.php">Lectures</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
</ul>

<?php render("footer"); ?>
```

###### 3/lectures.php
```php
<?php require("helpers.php"); ?>

<?php render("header", ["title" => "Lectures"]); ?>

<ul>
    <li><a href="week0.php">Week 0</a></li>
    <li><a href="week1.php">Week 1</a></li>
</ul>

<?php render("footer"); ?>
```

###### 3/week0.php
```php
<?php require("helpers.php"); ?>

<?php render("header", ["title" => "Week 0"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wednesday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
</ul>

<?php render("footer"); ?>
```

###### 3/week1.php
```php
<?php require("helpers.php"); ?>

<?php render("header", ["title" => "Week 1"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/week1m.pdf">Monday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/week1w.pdf">Wednesday</a></li>
</ul>

<?php render("footer"); ?>
```
#### mvc-4

###### 4/templates/footer.php
```html
    </body>
</html>
```

###### 4/templates/header.php
```php
<!DOCTYPE html>

<html>
    <head>
        <title><?= htmlspecialchars($title) ?></title>
    </head>
    <body>
        <h1><?= htmlspecialchars($title) ?></h1>

```

###### 4/includes/helpers.php
```php
<?php

    /**
     * Renders template.
     */
    function render($template, $data = [])
    {
        $path = __DIR__ . "/../templates/" . $template . ".php";
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }

?>
```

###### 4/index.php
```php
<?php require("includes/helpers.php"); ?>

<?php render("header", ["title" => "CS50"]); ?>

<ul>
    <li><a href="lectures.php">Lectures</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
</ul>

<?php render("footer"); ?>
```

###### 4/lectures.php
```php
<?php require("includes/helpers.php"); ?>

<?php render("header", ["title" => "Lectures"]); ?>

<ul>
    <li><a href="week0.php">Week 0</a></li>
    <li><a href="week1.php">Week 1</a></li>
</ul>

<?php render("footer"); ?>

```

###### 4/week0.php
```php
<?php require("includes/helpers.php"); ?>

<?php render("header", ["title" => "Week 0"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wendesday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
</ul>

<?php render("footer"); ?>
```

###### 4/week1.php
```php
<?php require("includes/helpers.php"); ?>

<?php render("header", ["title" => "Week 1"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/week1m.pdf">Monday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/week1w.pdf">Wednedsay</a></li>
</ul>

<?php render("footer"); ?>

```

#### mvc-5

###### 5/templates/footer.php
```html
    </body>
</html>
```

###### 4/templates/header.php
```php
<!DOCTYPE html>

<html>
    <head>
        <title><?= htmlspecialchars($title) ?></title>
    </head>
    <body>
        <h1><?= htmlspecialchars($title) ?></h1>

```

###### 4/includes/helpers.php
```php
<?php

    /**
     * Renders template.
     */
    function render($template, $data = [])
    {
        $path = __DIR__ . "/../templates/" . $template . ".php";
        if (file_exists($path))
        {
            extract($data);
            require($path);
        }
    }

?>

```

###### 4/public/index.php
```php
<?php require("../includes/helpers.php"); ?>

<?php render("header", ["title" => "CS50"]); ?>

<ul>
    <li><a href="lectures.php">Lectures</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html">Syllabus</a></li>
</ul>

<?php render("footer"); ?>

```

###### 4/public/lectures.php
```php
<?php require("../includes/helpers.php"); ?>

<?php render("header", ["title" => "Lectures"]); ?>

<ul>
    <li><a href="week0.php">Week 0</a></li>
    <li><a href="week1.php">Week 1</a></li>
</ul>

<?php render("footer"); ?>
```

###### 4/public/week0.php
```php
<?php require("../includes/helpers.php"); ?>

<?php render("header", ["title" => "Week 0"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf">Wednesday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf">Friday</a></li>
</ul>

<?php render("footer"); ?>
```

###### 4/public/week1.php
```php
<?php require("../includes/helpers.php"); ?>

<?php render("header", ["title" => "Week 1"]); ?>

<ul>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf">Monday</a></li>
    <li><a href="http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf">Wednesday</a></li>
</ul>

<?php render("footer"); ?>


```




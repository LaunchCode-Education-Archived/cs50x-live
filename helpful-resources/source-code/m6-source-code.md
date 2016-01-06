# Source Code
You will find the source code for the follow-alongs that you will complete during Module 6.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/6/m/src6m/" target="_blank"><b>Lecture: Week 6 Source Code</b></a>

## Prep for Class 2

#### headings

```html
<!DOCTYPE html>

<!--

css-2.html

David J. Malan
malan@harvard.edu

Implements a (simple) home page for John Harvard.

Demonstrates external stylesheets.

-->

<html>
    <head>
        <link href="css-2.css" rel="stylesheet"/>
        <title>css-2</title>
    </head>
    <body>
        <div id="top">
            John Harvard
        </div>
        <div id="middle">
            Welcome to my home page!
        </div>
        <div id="bottom">
            Copyright &#169; John Harvard
        </div>
    </body>
</html>
```
#### hello, HTML

```html
<!DOCTYPE html>

<!--

hello.html

David J. Malan
malan@harvard.edu

Says hello to the world (wide web).

-->

<html>
    <head>
        <title>hello</title>
    </head>
    <body>
        hello, world
    </body>
</html>
```
#### image

```html
<!DOCTYPE html>

<!--

image.html

David J. Malan
malan@harvard.edu

This is Grumpy Cat.

Demonstrates images.

-->

<html>
    <head>
        <title>image</title>
    </head>
    <body>
        <!-- http://knowyourmeme.com/memes/grumpy-cat -->
        <img alt="Grumpy Cat" src="cat.jpg"/>
    </body>
</html>
```
#### link

```html
<!DOCTYPE html>

<!--

link.html

David J. Malan
malan@harvard.edu

This is CS50.

Demonstrates hyperlinks.

-->

<html>
    <head>
        <title>link</title>
    </head>
    <body>
        This is <a href="https://www.cs50.net/">CS50</a>.
    </body>
</html>
```
#### list

```html
<!DOCTYPE html>

<!--

list.html

David J. Malan
malan@harvard.edu

Displays houses in the Quad.

Demonstrates (unordered) lists.

-->

<html>
    <head>
        <title>list</title>
    </head>
    <body>
        <ul>
            <li>Cabot</li>
            <li>Currier</li>
            <li>Pforzheimer</li>
        </ul>
    </body>
</html>
```
#### paragraphs

```html
<!DOCTYPE html>

<!--

paragraphs.html

David J. Malan
malan@harvard.edu

Displays some text.

Demonstrates paragraphs.

-->

<html>
    <head>
        <title>paragraphs</title>
    </head>
    <body>
        <p>
            Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam in tincidunt augue. Duis imperdiet, justo ac iaculis rhoncus, erat elit dignissim mi, eu interdum velit sapien nec risus. Praesent ullamcorper nibh at volutpat aliquam. Nam sed aliquam risus. Nulla rutrum nunc augue, in varius lacus commodo in. Ut tincidunt nisi a convallis consequat. Fusce sed pulvinar nulla.
        </p>
        <p>
            Ut tempus rutrum arcu eget condimentum. Morbi elit ipsum, gravida faucibus sodales quis, varius at mi. Suspendisse id viverra lectus. Etiam dignissim interdum felis quis faucibus. Integer et vestibulum eros, non malesuada felis. Pellentesque porttitor eleifend laoreet. Duis sit amet pellentesque nisi. Aenean ligula mauris, volutpat sed luctus in, consectetur id turpis. Phasellus mattis dui ac metus blandit volutpat. Donec lorem arcu, sollicitudin in risus a, imperdiet condimentum augue. Ut at facilisis mauris. Curabitur sagittis augue in dictum gravida. Integer sed sem sed justo tempus ultrices eu non magna. Phasellus semper eros erat, a posuere nisi auctor et. Praesent dignissim orci aliquam laoreet scelerisque.
        </p>
        <p>
            Mauris eget erat arcu. Maecenas ac ante vel ipsum bibendum varius. Nunc tristique nulla eget tincidunt molestie. Morbi sed mauris eu lectus vehicula iaculis ac id lacus. Etiam sit amet magna massa. In pulvinar sapien ac mi ultrices, quis consequat nisl hendrerit. Aliquam pharetra nec sem non vehicula. In et risus leo. Ut tristique ornare nisl et lacinia.
        </p>
    </body>
</html>
```
#### search-0

```html
<!DOCTYPE html>

<!--

search-0.html

David J. Malan
malan@harvard.edu

Demonstrates form submission.

-->

<html>
    <head>
        <title>CS50 Search</title>
    </head>
    <body>
        <h1>CS50 Search</h1>
        <form action="https://www.google.com/search" method="get">
            <input name="q" type="text"/>
            <br/>
            <input type="submit" value="CS50 Search"/>
        </form>
    </body>
</html>
```
#### search-1

```html
<!DOCTYPE html>

<!--

search-1.html

David J. Malan
malan@harvard.edu

Demonstrates style attribute.

-->

<html>
    <head>
        <title>CS50 Search</title>
    </head>
    <body style="text-align: center">
        <h1>CS50 Search</h1>
        <form action="https://www.google.com/search" method="get">
            <input name="q" type="text"/>
            <br/>
            <input type="submit" value="CS50 Search"/>
        </form>
    </body>
</html>
```
#### search-2

```html
<!DOCTYPE html>

<!--

search-2.html

David J. Malan
malan@harvard.edu

Demonstrates style tag.

-->

<html>
    <head>
        <style>

            body
            {
                text-align: center;
            }

        </style>
        <title>CS50 Search</title>
    </head>
    <body>
        <h1>CS50 Search</h1>
        <form action="https://www.google.com/search" method="get">
            <input name="q" type="text"/>
            <br/>
            <input type="submit" value="CS50 Search"/>
        </form>
    </body>
</html>
```
#### search-3

###### search/search-3.css
```css
/* 
search-3.css
*/

body
{
    text-align: center;
}
```

###### search/search-3.html
```html
<!DOCTYPE html>

<!--

search-3.html

David J. Malan
malan@harvard.edu

Demonstrates link tag.

-->

<html>
    <head>
        <link href="search-3.css" rel="stylesheet"/>
        <title>CS50 Search</title>
    </head>
    <body>
        <h1>CS50 Search</h1>
        <form action="https://www.google.com/search" method="get">
            <input name="q" type="text"/>
            <br/>
            <input type="submit" value="CS50 Search"/>
        </form>
    </body>
</html>
```
#### search-4

```html
<!--

search-4.html

David J. Malan
malan@harvard.edu

Demonstrates img tag (and block-level elements).

-->

<!DOCTYPE html>

<html>
    <head>
        <style>

            #header
            {
                text-align: center;
            }

            #content
            {
                text-align: center;
            }

            #content input
            {
                margin: 5px;
            }

            #footer
            {
                font-size: smaller;
                font-weight: bold;
                margin: 20px;
                text-align: center;
            }

        </style>
        <title>CS50 Search</title>
    </head>
    <body>
        <div id="header">
            <img alt="CS50 Search" src="logo.gif"/>
        </div>
        <div id="content">
            <form action="https://www.google.com/search" method="get">
                <input name="q" type="text"/>
                <br/>
                <input type="submit" value="CS50 Search"/>
            </form>
        </div>
        <div id="footer">
            Copyright &#169; CS50
        </div>
    </body>
</html>
```
#### table

```html
<!DOCTYPE html>

<!--

table.html

David J. Malan
malan@harvard.edu

Resembles a phone.

Demonstrates tables.

-->

<html>
    <head>
        <title>table</title>
    </head>
    <body>
        <table border="1">
            <tr>
                <td>1</td>
                <td>2</td>
                <td>3</td>
            </tr>
            <tr>
                <td>4</td>
                <td>5</td>
                <td>6</td>
            </tr>
            <tr>
                <td>7</td>
                <td>8</td>
                <td>9</td>
            </tr>
            <tr>
                <td>*</td>
                <td>0</td>
                <td>#</td>
            </tr>
        </table>
    </body>
</html>
```
#### css-0

```html
<!DOCTYPE html>

<!--

css-0.html

David J. Malan
malan@harvard.edu

Implements a (simple) home page for John Harvard.

Demonstrates inline CSS.

-->

<html>
    <head>
        <title>css-0</title>
    </head>
    <body>
        <div style="text-align: center;">
            <div style="font-size: 36px; font-weight: bold;">
                John Harvard
            </div>
            <div style="font-size: 24px;">
                Welcome to my home page!
            </div>
            <div style="font-size: 12px;">
                Copyright &#169; John Harvard
            </div>
        </div>
    </body>
</html>
```
#### css-1

```html
<!DOCTYPE html>

<!--

css-1.html

David J. Malan
malan@harvard.edu

Implements a (simple) home page for John Harvard.

Demonstrates CSS selectors.

-->

<html>
    <head>
        <style>

            body
            {
                text-align: center;
            }

            #top
            {
                font-size: 36px;
                font-weight: bold;
            }

            #middle
            {
                font-size: 24px;
            }

            #bottom
            {
                font-size: 12px;
            }

        </style>
        <title>css-1</title>
    </head>
    <body>
        <div id="top">
            John Harvard
        </div>
        <div id="middle">
            Welcome to my home page!
        </div>
        <div id="bottom">
            Copyright &#169; John Harvard
        </div>
    </body>
</html>
```

#### css-2

###### css/css-2.css
```css
/* css-2.css */
body
{
    text-align: center;
}

#top
{
    font-size: 36px;
    font-weight: bold;
}

#middle
{
    font-size: 24px;
}

#bottom
{
    font-size: 12px;
}
```

###### css/css-2.css
```html
<!DOCTYPE html>

<!--

css-2.html

David J. Malan
malan@harvard.edu

Implements a (simple) home page for John Harvard.

Demonstrates external stylesheets.

-->

<html>
    <head>
        <link href="css-2.css" rel="stylesheet"/>
        <title>css-2</title>
    </head>
    <body>
        <div id="top">
            John Harvard
        </div>
        <div id="middle">
            Welcome to my home page!
        </div>
        <div id="bottom">
            Copyright &#169; John Harvard
        </div>
    </body>
</html>
```








# Module 8 Source Code
You will find the source code for the follow-alongs that you will complete during Module 8.  We have provided links to all of the files for CS50, so you will have access to some other files that we have not included in our curriculum. We highly recommend that you try to complete them on your own before you look at the code.  

<a href="http://cdn.cs50.net/2015/fall/lectures/9/m/src9m/" target="_blank"><b>Lecture: Week 9 Source Code</b></a>

<a href="http://cdn.cs50.net/2015/fall/lectures/9/w/src9w/" target="_blank"><b>Lecture: Week 9, continued Source Code</b></a>

## Prep for Class 1

#### dom-0

```html
<!DOCTYPE html>

<html>
    <head>
        <script>

            function greet()
            {
                alert('hello, ' + document.getElementById('name').value + '!');
            }

        </script>
        <title>dom-0</title>
    </head>
    <body>
        <form id="demo" onsubmit="greet(); return false;">
            <input id="name" placeholder="Name" type="text"/>
            <input type="submit"/>
        </form>
    </body>
</html>
```
#### dom-1

```html
<!DOCTYPE html>

<html>
    <head>
        <title>dom-1</title>
    </head>
    <body>
        <form id="demo">
            <input id="name" placeholder="Name" type="text"/>
            <input type="submit"/>
        </form>
        <script>

            document.getElementById('demo').onsubmit = function() {
                alert('hello, ' + document.getElementById('name').value + '!');
                return false;
            };

        </script>
    </body>
</html>
```
#### dom-2

```html
<!DOCTYPE html>

<html>
    <head>
        <script src="https://code.jquery.com/jquery-latest.min.js"></script>
        <script>

            $(document).ready(function() {
                $('#demo').submit(function(event) {
                    alert('hello, ' + $('#name').val() + '!');
                    event.preventDefault();
                });
            });

        </script>
        <title>dom-2</title>
    </head>
    <body>
        <form id="demo">
            <input id="name" placeholder="Name" type="text"/>
            <input type="submit"/>
        </form>
  </body>
</html>
```

#### form-0

```html
<!--

form-0.html

A form without client-side validation.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <title>form-0</title>
    </head>
    <body>
        <form action="register.php" method="get">
            Email: <input name="email" type="text"/>
            <br/>
            Password: <input name="password" type="password"/>
            <br/>
            Password (again): <input name="confirmation" type="password"/>
            <br/>
            I agree to the terms and conditions: <input name="agreement" type="checkbox"/>
            <br/><br/>
            <input type="submit" value="Register"/>
        </form>
    </body>
</html>
```
#### form-1

```html
<!--

form-1.html

A form with client-side validation.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <title>form-1</title>
    </head>
    <body>
        <form action="register.php" id="registration" method="get">
            Email: <input name="email" type="text"/>
            <br/>
            Password: <input name="password" type="password"/>
            <br/>
            Password (again): <input name="confirmation" type="password"/>
            <br/>
            I agree to the terms and conditions: <input name="agreement" type="checkbox"/>
            <br/><br/>
            <input type="submit" value="Register"/>
        </form>
        <script>

            var form = document.getElementById('registration');

            // onsubmit
            form.onsubmit = function() {

                // validate email
                if (form.email.value == '')
                {
                    alert('You must provide your email address!');
                    return false;
                }

                // validate password
                else if (form.password.value == '')
                {
                    alert('You must provide a password!');
                    return false;
                }

                // validate confirmation
                else if (form.password.value != form.confirmation.value)
                {
                    alert('Passwords do not match!');
                    return false;
                }

                // validate agreement
                else if (!form.agreement.checked)
                {
                    alert('You must agree to the terms and conditions!');
                    return false;
                }

                // valid!
                return true;

            };

        </script>
   </body>
</html>
```
#### form-2

```html
<!--

form-2.html

A form with client-side validation using jQuery.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <script src="https://code.jquery.com/jquery-latest.min.js"></script>
        <script>

            // onready
            $(document).ready(function() {

                // onsubmit
                $('#registration').submit(function() {

                    // validate email
                    if ($('#registration input[name=email]').val() == '')
                    {
                        alert('You must provide your email address!');
                        return false;
                    }

                    // validate password
                    else if ($('#registration input[name=password]').val() == '')
                    {
                        alert('You must provide a password!');
                        return false;
                    }

                    // validate confirmation
                    else if ($('#registration input[name=password]').val() != $('#registration input[name=confirmation]').val()) 
                    {
                        alert('Passwords do not match!');
                        return false;
                    }

                    // validate agreement
                    else if (!$('#registration input[name=agreement]').is(':checked')) 
                    {
                        alert('You must agree to the terms and conditions!');
                        return false;
                    }

                    // valid!
                    return true;

                });

            });

        </script>
        <title>form-2</title>
    </head>
    <body>
        <form action="register.php" id="registration" method="get">
            Email: <input name="email" type="text"/>
            <br/>
            Password: <input name="password" type="password"/>
            <br/>
            Password (again): <input name="confirmation" type="password"/>
            <br/>
            I agree to the terms and conditions: <input name="agreement" type="checkbox"/>
            <br/><br/>
            <input type="submit" value="Register"/>
        </form>
    </body>
</html>
```

## Prep for Class 2


#### ajax-0

```html
<!--

ajax-0.html

Gets stock quote from quote.php via Ajax with jQuery, displaying price with alert.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <script src="https://code.jquery.com/jquery-latest.min.js"></script>
        <script>

            /**
             * Gets a quote via JSON.
             */
            function quote()
            {
                var url = 'quote.php?symbol=' + $('#symbol').val();
                $.getJSON(url, function(data) {
                    alert(data.price);
                });
            }

        </script>
        <title>ajax-0</title>
    </head>
    <body>
        <form onsubmit="quote(); return false;">
            Symbol: <input autocomplete="off" autofocus id="symbol" type="text"/>
            <br/><br/>
            <input type="submit" value="Get Quote"/>
        </form>
    </body>
</html>
```

#### ajax-1

```html
<!--

ajax-1.html

Gets stock quote from quote.php via Ajax with jQuery, displaying price with alert.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <script src="https://code.jquery.com/jquery-latest.min.js"></script>
        <script>

            $(function() {

                $('#quote').submit(function() {

                    var url = 'quote.php?symbol=' + $('#symbol').val();
                    $.getJSON(url, function(data) {
                        alert(data.price);
                    });
                    return false;

                });

            });

        </script>
        <title>ajax-1</title>
    </head>
    <body>
        <form id="quote">
            Symbol: <input autocomplete="off" autofocus id="symbol" type="text"/>
            <br/><br/>
            <input type="submit" value="Get Quote"/>
        </form>
    </body>
</html>
```

#### ajax-2

```html
<!--

ajax-2.html

Gets stock quote from quote.php via Ajax with jQuery, embedding result in page itself.

David J. Malan
malan@harvard.edu

-->

<!DOCTYPE html>

<html>
    <head>
        <script src="https://code.jquery.com/jquery-latest.min.js"></script>
        <script>

            /**
             * Gets a quote via JSON.
             */
            function quote()
            {
                var url = 'quote.php?symbol=' + $('#symbol').val();
                $.getJSON(url, function(data) {
                    $('#price').html(data.price);
                });
            }

        </script>
        <title>ajax-2</title>
    </head>
    <body>
        <form onsubmit="quote(); return false;">
            Symbol: <input autocomplete="off" autofocus id="symbol" type="text"/>
            <br/>
            Price: <span id="price">to be determined</span>
            <br/><br/>
            <input type="submit" value="Get Quote"/>
        </form>
    </body>
</html>
```











`hello-response.php`

```php
<?php 

$username = $_GET["username"]; 
// TODO we also need to grab the greeting field that the user typed into the form


if (empty($username)): // TODO we also want to check if the greeting is an empty value

    // redirect the user back to the index page
    header("Location: ./hello-form.php"); // notice we can use a "relative" link here
    
    // stop running this script
    exit;
endif

?>

<!DOCTYPE html>
<head>
</head>
<body>
    Hello, <?php print($username); ?>!
    <!-- TODO replace the hard-coded "Hello" above with the user-supplied greeting -->
</body>
```

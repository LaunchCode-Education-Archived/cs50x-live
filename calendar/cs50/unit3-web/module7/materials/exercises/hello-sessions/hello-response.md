`response.php`

```php
<?php

// TODO start a session


// TODO if the user provided a "username" field, set the session's "username" key to the value they provided


// TODO if the session still does not have a value for the "username" key, then redirect the user back to the form


?>

<!DOCTYPE html>
<head>
</head>
<body>
    Last time I checked, your name is <?= $_SESSION["username"] ?>
</body>
```

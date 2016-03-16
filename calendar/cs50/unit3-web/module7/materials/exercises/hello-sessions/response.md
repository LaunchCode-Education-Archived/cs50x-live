`response.php`

```php
<?php

session_start();

if (!empty($_GET["username"]))
{
    $_SESSION["username"] = $_GET["username"];
}


if (empty($_SESSION["username"]))
{
    header("Location: ./form.php");
    exit;
}

?>

<!DOCTYPE html>
<head>
</head>
<body>
    Last time I checked, your name is <?= $_SESSION["username"] ?>
</body>
```

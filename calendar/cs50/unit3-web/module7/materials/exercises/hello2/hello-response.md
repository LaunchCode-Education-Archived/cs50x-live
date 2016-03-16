`hello-response.php`

```php
<?php 

$username = $_GET["username"]; 
$greeting = $_GET["greeting"]; 

?>

<!DOCTYPE html>
<head>
</head>
<body>
    <!-- TODO replace "false" below with a condition to check if either value is empty (same condition as last time) -->
    <?php if(false): ?> 
        <!-- TODO Yell at the user and provide a link back to the form -->
    <?php else: ?>
        <!-- TODO greet the user just like last time -->
    <?php endif ?>
</body>
```

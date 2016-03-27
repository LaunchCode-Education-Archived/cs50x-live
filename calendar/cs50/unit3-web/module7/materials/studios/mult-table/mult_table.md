`mult_table.php`

```php
<?php

$n = 10; // TODO what should $n really be? Replace the 10 with the user-supplied value from the form


// if we don't have a number, redirect back to the form page
if (empty($n)) {
    header("Location: ./mult_form.php");
    exit;
}

?>

<!DOCTYPE html>
<html>
    <head>
        <title>Your Table is Ready</title>
    </head>
    <body>
        <table>
            <?php for ($i = 0; $i < $n; $i++): ?>
                <!-- TODO this multiplication table needs some work! -->
                <tr>
                    <td>#</td> 
                </tr>
            <?php endfor ?>
        </table>
    </body>
</html>

```

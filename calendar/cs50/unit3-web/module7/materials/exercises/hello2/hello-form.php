`hello-form.php`

```php
<!DOCTYPE html>
<html>
    <head>
        <title>Hello 2</title>
    </head>
    <body>
        <form action="hello-response.php" method="GET">
            <label>Say</label>
            <select name="greeting">
                <option value="">*[Select a greeting]</option>
                <option value="Hello">Hello</option>
                <option value="Hi">Hi</option>
                <option value="Top o' the mornin">Top o' the mornin</option>
            </select>
            <label>to</label>
            <input type="text" name="username"/>
            <input type="submit" value="Submit"/>
        </form>
    </body>
</html>
```

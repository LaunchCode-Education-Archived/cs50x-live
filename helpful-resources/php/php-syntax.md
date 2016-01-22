# PHP Syntax

| Type | Syntax | Description |
| :----: | :------ | :---------  |
| Delimiters  | `<?php`<br><br>`?>` | All PHP code inside of that file must be enclosed inside of the delimiters. |
| Variable | `$variablename` | There is no type specifier and all variable names start with `$`|
| Conditionals | `if ($x < 3 || $y == 1)`<br>`{ }`<br>`elseif`<br>`{ }`<br>`else`<br>`{ }` | All of the old favorites from `C` are still available for you to use.<br>Remember that your variables must start with `$` and you do not have to specify a type such as `int`, etc.   |
| Loops | `for($counter = 1; $counter <= 100; $counter++)`<br>&nbsp;&nbsp;`print($counter);` | All of the old favorites from `C` are still available for you to use.<br>Remember that your variables must start with `$` and you do not have to specify a type such as `int`, etc. |
| Arrays | `$nums = [1, true, 3, 4];`<br>`$nums = array(1, 2, 3, 4);` | Arrays are **not** fixed in size (They can grow or shrink as needed and you can always tack extra elements onto your array and splice things in and out easily.)<br>Because PHP is **loosely typed**, your arrays can mix different data types together. |
| Associative Arrays | `$array = [`<br>&nbsp;&nbsp;&nbsp;&nbsp;`key1 => value 1,`<br>&nbsp;&nbsp;&nbsp;&nbsp;`key2 => value2,`<br>&nbsp;&nbsp;&nbsp;&nbsp;`key3 => value3`<br>`];` | You can specify array indices with workds or phrases (_keys_), instead of integers, unlike `C`. |
| Foreach Loop<br>_(Values)_ | `foreach($array as $key)`<br>`{`<br>&nbsp;&nbsp;`//use $key in here as a stand-in for the value of $array[i]`<br>`}` | Used to iterate across any array, but particularly useful for associative arrays.<br> |
| Foreach Loop<br> _(Keys & Values)_ | `foreach($array as $key => $value)`<br>`{`<br>&nbsp;&nbsp;`// You are able to access both key and value pairs`<br>`}` | Used to iterate across any array, but particularly useful for associative arrays. |
| Print | `print()`<br>`echo()` | PHP has a lot of ways to print, including ways to print out substituted variables in the middle of strings, or variable interpolation. | 
| Functions | `funtion function_name($x)`<br>`{ }`<br>You can also supply a default value<br>`funtion function_name($x = 10)`<br>`{ }` | Similar to variables, you do not have to specify return type for functions, nor the data types of any parameters.<br>You must use the `function` keyword preceding the function.  If the user does not provide an input the default value will be used.<br>There is no need for a `main()`, since the interpreter reads from top to bottom. | 
| Including Files | `require_once("PathToFile.php");` | Just like C, PHP programs can consist of multiple files. | 
| Running Programs | `php <file>` | Use this command to run your PHP program through the PHP interpreter at the command-line, and your program will run through the interpreter, which will execute everything inside of the PHP delimiters and simply print out the rest.  |

## Examples

### Variables 
```php
<?php

// Variables
##### variables.php
$string = "David";
$boolean = true; // Prints 1 for true, "" for false
$int = 1;
$double = 0.2;
$float = 0.02;
$char = 'c';

printf("String: ". $string . "\n");
printf("Boolean: ". $boolean . "\n");
printf("Int: ". $int . "\n");
printf("Double: ". $double . "\n");
printf("Float: ". $float . "\n");
printf("Char: ". $char . "\n");

?>
```
##### output
```nohighlight
$ php variables.php
String: David
Boolean: 1
Int: 1
Double: 0.2
Float: 0.02
Char: c
```

### Conditionals 
##### conditionals.php
```php
<?php

// Conditionals
$x = 9;
if ($x > 0  &&  $x <= 3)
{
    print("x is little!\n" );   
}
elseif ($x > 4 && $x < 6)
{
    print("x is 5\n");
}
else
{
    print("x is big!\n\n"); // this line will print
}

$var = 'A';
$letter = ctype_alpha($var) ? "It's a letter" : "It's not a letter";
print("Answer: " . $letter . "\n");

$state = readline("Your state please: ");
switch($state)
{
    case "MA" : case "Mass." : case "Massachusetts" :
        print("Yeah " . $state . "!");
        break;
    default: 
        echo("I don't understand your input!");
}

?>
```
##### output
```nohighlight
$ php conditionals.php
x is big!

Answer: It's a letter

Your state please: MA
Yeah MA!
```

### Loops 
##### loops.php
```php
<?php

// for loop
for($counter = 0; $counter < 3; $counter++)
{
    print( $counter . " " );
}
print("\n");

// while loop
$num = 3;
while($num > 0)
{
    print($num . " ");
    $num--;
}
print("\n");   

// do while loop
$new_num = 0;
do
{
    print($new_num . " ");
    $new_num++;
}while($new_num < 3)

?>
```
##### output
```nohighlight
$ php loops.php
0 1 2 
3 2 1 
0 1 2 
```

### Associative Arrays  
##### assoc_arrays.php
```php

// Associative Arrays and Printing
$pizzas = [
            "cheese" => 8.99,
            "pepperoni" => 9.99,
            "vegetable" => 10.99,
            "buffalo chicken" => 11.99,
            ];

print("Printing values only:\n");
foreach($pizzas as $pizza) 
{
    print($pizza);
    print("\n");
}

print("\nPrinting keys and values:\n");
foreach($pizzas as $topping => $price) 
{
    print("A whole ");
    print($topping);
    print(" pizza costs $");
    print($price);
    print("\n");
}

// Other Ways to Print
print("\nPrint using printf: \n");
foreach($pizzas as $topping => $price) 
{
    printf("A whole %s pizza costs $%s\n", $topping, $price);

}

print("\nPrint using echo and variable names \n");
foreach($pizzas as $topping => $price) 
{
    echo("A whole {$topping} pizza costs \${$price}\n"); // print will work as well

}

print("\nPrint using variable names and the dot operator \n");
foreach($pizzas as $topping => $price) 
{
    echo("A whole " . $topping . " pizza costs $" . $price . "\n"); // print will work as well

}

```
##### output
```nohighlight
$ php assoc_arrays.php
Printing values only:
8.99
9.99
10.99
11.99

Printing keys and values:
A whole cheese pizza costs $8.99
A whole pepperoni pizza costs $9.99
A whole vegetable pizza costs $10.99
A whole buffalo chicken pizza costs $11.99

Print using printf: 
A whole cheese pizza costs $8.99
A whole pepperoni pizza costs $9.99
A whole vegetable pizza costs $10.99
A whole buffalo chicken pizza costs $11.99

Print using echo and variable names 
A whole cheese pizza costs $8.99
A whole pepperoni pizza costs $9.99
A whole vegetable pizza costs $10.99
A whole buffalo chicken pizza costs $11.99

Print using variable names and the dot operator 
A whole cheese pizza costs $8.99
A whole pepperoni pizza costs $9.99
A whole vegetable pizza costs $10.99
A whole buffalo chicken pizza costs $11.99
```

### Functions
##### function.php
```php
<?php
$x = readline("Give me a number to square: ");
echo(hard_square($x) . "\n");

//No input provided
echo(hard_square() . "\n");

function hard_square($x = 10)
{
    $result = 0;
    for($i = 0; $i < $x; $i++)
        $result += $x;
    return $result;
}

?>
```
```nohighlight
$ php function.php
Give me a number to square: 2
4
100
```







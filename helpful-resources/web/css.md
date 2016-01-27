# CSS 

## Common CSS Properties
There are many CSS properties and a more comprehensive list can be found <a href="http://www.w3schools.com/cssref/default.asp" target="_blank">here</a>, or if you are looking for some tutorials you can check the Helpful Resources section <a href="../web/cs50-resources.html#css" target="_blank">here</a>.

| Property | Example | Description | 
| :----------------- | :---------  | :--------- |
| `border: style color width;`  | `border: dotted black 2px` | Applies a border with the specified style,<br>color and width style: <br>dotted, dashed, solid, ridge, ... |
| `background-color: [keyword |`<br>`#<6-digit hex> | rgb value];`  | `background-color: red;`<br>`background-color: #ff0000;`<br>`background-color: rgb(255,0,0);` | Sets the background color.  <br>Some colors are predefined in CSS. <br>(IE: red, blue, yellow, etc. |
| `color: [keyword |`<br>`#<6-digit hex> | rgb value];`  | `color: red;`<br>`color: #ff0000;`<br>`color: rgb(255,0,0);` | Sets the foreground color, usually text. | 
| `font-size: [absolute size |`<br>`relative size];`  |  `font-size: medium;`<br>`font-size: 16px;`<br>`font-size: 80%;`<br>`font-size: smaller;` | Can use keywords (xx-small, medium, ...),<br>fixed points (10pt, 12pt,...)<br>percentage (80%, 120%, ...)<br>or base off the most recent<br>font size (smaller, larger) |
| `font-family: [font name |`<br>`generic name];`  | `font-family: times;` | Certain "web sage" fonts are pre-defined in CSS |
| `text-align: [left |`<br>`right | center | justify];`  | `text-align: left;` | For aligning text.<br>There are two other values that can be used:<br>`initial`	The property is set to its default value.<br>`inherit`	The property will be inherited from<br>its parent element. |

## Common CSS Selectors
There are many CSS selectors and a more comprehensive list can be found <a href="http://www.w3schools.com/cssref/css_selectors.asp" target="_blank">here</a>.

| CSS Selectors | Example | Description |
| :----------:  | :----- | :---------- |
| `#id` | `#unique`<br>`{`<br>&nbsp;&nbsp;&nbsp;`color: blue;`<br>`}`    | An ID selector will apply only to<br>an HTML tag with a unique identifier<br>In CSS files, use a `#` preceding the id selector. | 
| `.class` | `.students`<br>`{`<br>&nbsp;&nbsp;&nbsp;`border: solid red 5px;`<br>`}` | A Class selector will apply only to<br>those HTML tags that have been given<br>identical "class" attributes.<br>In CSS files, use a `.` preceding the class selector.  | 

## Inserting Style Sheets
#### Internal  
CSS properties are placed inside the `head` tags of the HTML page  . You will place the properties inside of `style` tags and assign the properties to the appropriate attribute of a html element.
```html
<!DOCTYPE html>

<!--
internal.html
Demonstrates internal stylesheet.
-->
<html>
    <head>
        <title>Inline</title>
        <!-- CSS properties are added here -->
        <style>
            body
            {
                text-align: left;
            }
            #unique
            {
                color: blue;
            }
        <style
    </head>
    <body>
        <div>
            <div>
                Plain text.
            </div>
            <!-- The id selector will be placed here -->
            <div id="unique">
                Text will be blue.
            </div>
        </div>
    </body>
</html>
```
#### External
CSS properties are placed in a separate `.css` file and "_linked_" in the HTML page.
```css
/* external.css */
body
{
    text-align: left;
}
#unique
{
    color: blue;
}
```
```html
<!DOCTYPE html>

<!--
external.html
Demonstrates inline CSS.
-->
<html>
    <head>
        <!-- Link the stylesheet -->
        <link href="external.css" rel="stylesheet"/>
        <title>Inline</title>
    </head>
    <body>
        <div>
            <div>
                Plain text.
            </div>
            <!-- The id selector will be placed here -->
            <p id="unique">
                Text will be blue.
            </p>
        </div>
    </body>
</html>
```
#### Inline
CSS properties are placed inside of a html element as an attribute.
```html
<!DOCTYPE html>

<!--
inline.html
Demonstrates inline CSS.
-->
<html>
    <head>
        <title>Inline</title>
    </head>
    <body>
        <!-- The CSS properties are placed inside elements using style tag -->
        <div style="text-align: center;">
            All elements inside of this tag will be center aligned.
            <div style="color:red;">
                Text will be red.
            </div>
            <div style="font-size: 24px;">
                Font size will be 24 pixels.
            </div>
        </div>
    </body>
</html>
```

# HTML

| Common HTML Tags | Description | 
| :-----------------: | :---------  |
| `<!DOCTYPE html>` | DOCTYPE Declaration<br>Specific to HTML5, will let the browser know that is the standard you are using. |
| `<html>` `</html>` | All html tags should be contained within opening and closing html tags | 
| `<b>` `</b>` | Bold | 
| `<i>` `</i>` | Italics | 
| `<u>` `</u>` | Underline | 
| `<p>` `</p>` | Paragraph |
| `<hX>` `</hX>` | Heading X = {1, 2, 3, 4, 5, 6} |
| `<ul>` `</ul>` | Unordered List |
| `<ol>` `</ol>` | Ordered List |
| `<li>` `</li>` | List Item (Nested within `ul` or `ol` tags) |
| `<table>` `</table>` | Table Definition  |
| `<tr>` `</tr>` | Table Row  |
| `<td>` `</td>` | Table Column within a Row within a Table, plainly a table cell. |
| `<div>` `</div>` | HTML Page Division |
| `<form>` `</form>` | HTML Form. You can use the attributes `action` and `method`<br>`action` will define what action takes place when the form is submitted.<br>IE: `action="register.php"`<br>`method` will specify what HTTP method to use to submit the form.<br>Use `post` or `get`. IE: `method="post"`<br>You can find more information on these HTTP methods <a href="http://cdn.cs50.net/2015/fall/lectures/6/m/notes6m/notes6m.html#http_requests" target="_blank">here</a>. |
| `<input name="X" type="Y">`  | Define a field within an HTML Form <br> X is a unique identifier for that field <br> Y is what type of data it accepts <br> (Common types: text, password, radio, checkbox, submit) |
| `<a href="" >` `</a>` | Hyperlink <br>You can add the attribute `target` to specify where to open the link.<br> `_blank` - opens link in new window, IE: `<a href="" target="_blank">`<br>If you do not add this attribute the link opens in same window it was clicked. |
| `<img src="X" .../>` | Image <br> You can specify additional attributes such as width and height |

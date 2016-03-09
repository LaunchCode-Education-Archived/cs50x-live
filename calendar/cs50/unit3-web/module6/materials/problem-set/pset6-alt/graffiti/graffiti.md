`graffiti.html`

```html
<!DOCTYPE html>
<html>
<head>	
	<link rel="stylesheet" type="text/css" href="styles.css" />
	<title>Graffiti</title>
</head>
<body>
	<div class="heading">
		<h1>Graffiti</h1>
		<h4>Add your voice to the Pset6-Alt graffiti wall</h4>
	</div>

	<div class="card">
		
		<!-- Don't change the id. Our JS script below is looking for "slackForm". -->
		<form id="slackForm"> 
			
			<!-- TODO: add the necessary fields, action, submit button, etc -->
	
		</form>
	</div>


	<!-- here we include some javascript: first a few libraries... -->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.8.3/jquery.min.js"></script>
	<script src="http://code.jquery.com/ui/1.9.2/jquery-ui.js"></script>
	
	<!-- ...and then our own script -->
	<script type="text/javascript">
	
		// first get a reference to the form
		var slackForm = document.getElementById("slackForm");

		// right before the form submits, execute the function called populatePayloadField
		slackForm.onsubmit = populatePayloadField;
		
		function populatePayloadField() {
			// convert form fields into a JSON string
			var formData = getFormData();
			delete formData.payload;
			jsonString = JSON.stringify(formData);
		
			// create a new hidden input and add it to the form
			var payloadInput = document.createElement("input");
			payloadInput.setAttribute("type", "hidden");
			payloadInput.setAttribute("name", "payload");
			payloadInput.setAttribute("value", jsonString);
			console.log(payloadInput);
			slackForm.appendChild(payloadInput);
			console.log(slackForm);
		}
		
		// a helper function to return a javascript object containing all the form's fields
		function getFormData() {
			var object = {};
			var fields = $("#slackForm").serializeArray();
			for (var i = 0; i < fields.length; i++) {
				var field = fields[i];
				object[field.name] = field.value;
			}
			return object;
		}
	</script>
	
</body>
</html>
```

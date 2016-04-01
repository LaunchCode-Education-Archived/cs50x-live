`constructRequest.js`

```js
var slackForm = document.getElementById("slackForm");

slackForm.onsubmit = populatePayloadField;

function populatePayloadField() {
	var formData = getFormData();
	jsonString = JSON.stringify(formData);
	document.getElementById("payload").value = jsonString;
}

function getFormData() {
	var object = {};
	var fields = $("#slackForm").serializeArray();
	for (var i = 0; i < fields.length; i++) {
		var field = fields[i];
		object[field.name] = field.value;
	}
	return object;
}
```

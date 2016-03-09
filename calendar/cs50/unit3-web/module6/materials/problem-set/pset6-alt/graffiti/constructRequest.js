var slackForm = document.getElementById("slackForm");

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
	slackForm.appendChild(payloadInput);
};

function getFormData() {
	// return a javascript object containing all the form's fields
	var object = {};
	var fields = $("#slackForm").serializeArray();
	for (var i = 0; i < fields.length; i++) {
		var field = fields[i];
		object[field.name] = field.value;
	}
	return object;
}
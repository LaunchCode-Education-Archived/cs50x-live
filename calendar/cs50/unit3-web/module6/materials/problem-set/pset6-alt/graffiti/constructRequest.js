
function getFormData() {
	var obj = {};
	var fields = $("#slackForm").serializeArray();
	console.log(fields);
	for (var i = 0; i < fields.length; i++) {
		var field = fields[i];
		obj[field.name] = field.value;
		console.log(obj);
	}
	return obj;
}

getFormData();

function handleSubmit(event) {
	var formData = getFormData();
	jsonString = JSON.stringify(formData);
	event.preventDefault();
	document.getElementById("payload").value = jsonString
}

$("#slackForm").submit(function(event) {
	var formData = getFormData();
	jsonString = JSON.stringify(formData);
	document.getElementById("payload").value = jsonString
});

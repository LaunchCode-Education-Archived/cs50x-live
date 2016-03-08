`graffiti.html`

```html
<!DOCTYPE html>
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
		
		<!-- Don't change the id. Our JS script is expecting "slackForm". -->
		<form id="slackForm"> 
			
			<!-- TODO: add the necessary fields and a submit button -->
	
	
			<!-- this hidden payload input is here so that our JS script can add the correct fields to our HTTP request -->
			<input type="hidden" name="payload" id="payload"/>
		</form>
	</div>


	<!-- here we include some javascript files: some libraries, and then our own constructRequest script -->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.8.3/jquery.min.js"></script>
	<script src="http://code.jquery.com/ui/1.9.2/jquery-ui.js"></script>
	<script src="constructRequest.js"></script>
</body>
```

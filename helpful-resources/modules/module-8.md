#Module 8

##Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

###Class 1 Studio: AJAXson-5

```nohighlight
/**
 * Filename: XXX.c
 * Save in Folder: ~/workspace/module8/studios/mult-table
 *
 */
```
###Class 2 Studio: Validate

```nohighlight
/**
 * Filename: XXX.c
 * Save in Folder: ~/workspace/module8/studios/simple-site
 *
 */
```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused :confused:  about what to do, you can always refer to the video for help.

###Class 1 Task: DOM-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along. 
#### dom-0.html
```nohighlight
<!--
  Filename: dom-0.html
  Save in Folder: ~/workspace/module8/followalongs/dom
     
  DOCTYPE declaration
    
  HTML 
      Head
          Script
            Function greet()
                Alert `hello, ' 
          Script
          Title dom-0 Title
      Head
      Body 
        Form id="demo" onsubmit="greet(); return false;"
          Input id="name" placeholder="Name" type="text"
          Input type="submit" 
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 1 Task: DOM-1
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along.

#### dom-1.html
```nohighlight
<!--
  Filename: dom-1.html
  Save in Folder: ~/workspace/module8/followalongs/dom
     
  DOCTYPE declaration
    
  HTML 
      Head
          Title dom-2 Title
      Head
      Body 
        Form id="demo"
          Input id="name" placeholder="Name" type="text"
          Input type="submit" 
        Form
        Script
             
        Script
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 1 Task: DOM-2
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along.

#### dom-2.html
```nohighlight
<!--
  Filename: dom-2.html
  Save in Folder: ~/workspace/module8/followalongs/dom
     
  DOCTYPE declaration
    
  HTML 
      Head
          Script src="https://code.jquery.com/jquery-latest.min.js" Script
          Script
            
          Script
          Title dom-2 Title
      Head
      Body 
        Form id="demo"
          Input id="name" placeholder="Name" type="text"
          Input type="submit" 
        Form
        Script
             
        Script
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 1 Task: Form-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along.

#### form-0.html
```nohighlight
<!--
  Filename: form-0.html
  Save in Folder: ~/workspace/module8/followalongs/form
     
  DOCTYPE declaration
    
  HTML 
      Head
          Title form-0 Title
      Head
      Body 
        Form action="register.php" method="get"
          Email: Input name="email" type="text"
          LINEBREAK
          Password: Input name="password" type="password"
          LINEBREAK
          Password (again): Input name="confirmation" type="password"
          LINEBREAK
          I agree to the terms and conditions: Input name="agreement" type="checkbox"
          LINEBREAK LINEBREAK
          Input type="submit" value="Register"
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 1 Task: Form-1
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along.

#### form-1.html
```nohighlight
<!--
  Filename: form-1.html
  Save in Folder: ~/workspace/module8/followalongs/form
     
  DOCTYPE declaration
    
  HTML 
      Head
          Title form-1 Title
      Head
      Body 
        Form action="register.php" id="registration" method="get"
          Email: Input name="email" type="text"
          LINEBREAK
          Password: Input name="password" type="password"
          LINEBREAK
          Password (again): Input name="confirmation" type="password"
          LINEBREAK
          I agree to the terms and conditions: Input name="agreement" type="checkbox"
          LINEBREAK LINEBREAK
          Input type="submit" value="Register"
        Form
        Script
          Declare an object called form and assign the document element with the specified id attribute 'registration'
          
          // onsubmit
          Object.onsubmit = function()
          
            // validate email
            If (Object.email.value == '')
                Alert 'You must provide your email address!'
                Return false
                
            // validate password
            Else If (Object.password.value == '')
                Alert 'You must provide a password!'
                Return false
 
             // validate confirmation
            Else If (Object.password.value != Object.confirmation.value)
                Alert 'Passwords do not match!'
                Return false
                
            // validate agreement
            Else If (!Object.agreement.checked)
                Alert 'You must agree to the terms and conditions!'
                Return false
              
            Return true;  
                               
        Script
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 1 Task: Form-2
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#document_object_model" target="_blank">here</a> for the lecture notes for this follow along.

#### form-2.html
```nohighlight
<!--
  Filename: form-2.html
  Save in Folder: ~/workspace/module8/followalongs/form
     
  DOCTYPE declaration
    
  HTML 
      Head
          Script src="https://code.jquery.com/jquery-latest.min.js" Script
          Script
            // onready
            Document.ready(function()

                // onsubmit
                '#registration'.submit(function() 

                    // validate email
                    If ('#registration input[name=email]'.val() == '')
                        Alert 'You must provide your email address!'
                        Return false;

                    // validate password
                    Else If ('#registration input[name=password]').val() == '')
                        Alert 'You must provide a password!'
                        Return false;

                    // validate confirmation
                    Else If ('#registration input[name=password]').val() != '#registration input[name=confirmation]').val()) 
                        Alert 'Passwords do not match!'
                        Return false;

                    // validate agreement
                    Else If (!('#registration input[name=agreement]').is(':checked')) 
                        Alert 'You must agree to the terms and conditions!'
                        Return false;

                    // valid!
                    Return true;
          Script
          Title form-2 Title
      Head
      Body 
        Form action="register.php" id="registration" method="get"
          Email: Input name="email" type="text"
          LINEBREAK
          Password: Input name="password" type="password"
          LINEBREAK
          Password (again): Input name="confirmation" type="password"
          LINEBREAK
          I agree to the terms and conditions: Input name="agreement" type="checkbox"
          LINEBREAK LINEBREAK
          Input type="submit" value="Register"
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 2 Task: AJAX-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. The ajax follow alongs rely on a file called quote.php that you can find <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/src9w/quote.php.src" target="_blank">here</a> or use the command `wget http://cdn.cs50.net/2015/fall/lectures/9/w/src9w/quote.php.src` and make sure you are in the `~/workspace/module8/followalongs/ajax` directory. David uses the file in the beginning of the video.

Lecture Notes
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#ajax_and_asynchronicity" target="_blank">AJAX and Asyncronicity</a> 
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#anonymous_functions_and_callbacks" target="_blank">Anonymous Functions and Callbacks</a>
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#ajax" target="_blank">AJAX</a> 

#### ajax-0.html
```nohighlight
<!--
  Filename: ajax-0.html
  Save in Folder: ~/workspace/module8/followalongs/ajax
     
  DOCTYPE declaration
    
  HTML 
      Head
         Script src="https://code.jquery.com/jquery-latest.min.js" Script
         Script
            function quote()
                Declare a variable called url and assign 'quote.php?symbol=' to it            
         Script
          Title ajax-1 Title
      Head
      Body 
        Form onsubmit="quote"
          Symbol: Input autocomplete="off" autofocus id="symbol" type="text"
          LINEBREAK LINEBREAK
          Input type="submit" value="Get Quote" 
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

###Class 2 Task: AJAX-1
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. 

Lecture Notes
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#ajax_and_asynchronicity" target="_blank">AJAX and Asyncronicity</a> 
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#anonymous_functions_and_callbacks" target="_blank">Anonymous Functions and Callbacks</a>
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#ajax" target="_blank">AJAX</a>

#### ajax-1.html
```nohighlight
<!--
  Filename: ajax-1.html
  Save in Folder: ~/workspace/module8/followalongs/ajax
     
  DOCTYPE declaration
    
  HTML 
      Head
         Script src="https://code.jquery.com/jquery-latest.min.js" Script
         Script

         Script
          Title ajax-0 Title
      Head
      Body 
        Form onsubmit="quote(); return false;"
          Symbol: Input autocomplete="off" autofocus id="symbol" type="text"
          LINEBREAK LINEBREAK
          Input type="submit" value="Get Quote" 
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```
###Class 2 Task: AJAX-2
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. 

Lecture Notes
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/m/notes9m/notes9m.html#ajax_and_asynchronicity" target="_blank">AJAX and Asyncronicity</a> 
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#anonymous_functions_and_callbacks" target="_blank">Anonymous Functions and Callbacks</a>
* <a href="http://cdn.cs50.net/2015/fall/lectures/9/w/notes9w/notes9w.html#ajax" target="_blank">AJAX</a> 

#### ajax-2.html
```nohighlight
<!--
  Filename: ajax-2.html
  Save in Folder: ~/workspace/module8/followalongs/ajax
     
  DOCTYPE declaration
    
  HTML 
      Head
         Script src="https://code.jquery.com/jquery-latest.min.js" Script
         Script
            function quote()
                Declare a variable called url and assign 'quote.php?symbol=' + $('symbol').val(); to it            
         Script
          Title ajax-1 Title
      Head
      Body 
        Form onsubmit="quote(); return false;"
          Symbol: Input autocomplete="off" autofocus id="symbol" type="text"
          LINEBREAK 
          Price: Span id="price" to be determined Span
          LINEBREAK LINEBREAK
          Input type="submit" value="Get Quote" 
        Form
      Body
   HTML 
   
* You will find instructions to complete this task in the video. 
* You will be modifying this code as you go along.
-->
```

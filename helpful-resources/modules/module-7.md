#Module 7

##Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

###Class 1 Studio: Mult Table 

```nohighlight
/**
 * Filename: XXX.c
 * Save in Folder: ~/workspace/module7/studios/mult-table
 *
 */
```
###Class 2 Studio: Simple Site

```nohighlight
/**
 * Filename: XXX.c
 * Save in Folder: ~/workspace/module7/studios/simple-site
 *
 */
```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused about what to do, you can always refer to the video for help.

###Class 1 Task: Froshims-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_for_web_programming" target="_blank">here</a> for the lecture notes for this follow along. There are two files for this follow along, `froshims-0.php` and `register-0.php`.

#### froshims/froshims-0.php
```nohighlight
<?php
/*
  Filename: froshims-0.php
  Save in Folder: ~/workspace/module7/followalongs/froshims
     
  DOCTYPE declaration
    
  HTML 
      Head
          Title Frosh IMs Title
      Head
      Body style="text-align: center;"
        H1 Register for Frosh IMs H1
        Form action="register-0.php" method="post"
          Name: Input name="name" type="text"
          LINEBREAK
          Input name="name" type="text" Captain?
          LINEBREAK
          Input name="name" type="text" Less Comfortable
          Input name="name" type="text" More Comfortable
          LINEBREAK
          Dorm:
          Select name="dorm"
            Option value="" Option
            Option value="Apley Court" Apley Court Option
            Option value="Canaday" Canaday Option
            Option value="Grays" Grays Option
            Option value="Greenough" Greenough Option
            Option value="Hollis" Hollis Option
            Option value="Holworthy" Holworthy Option
            Option value="Hurlbut" Hurlbut Option
            Option value="Lionel" Lionel Option
            Option value="Matthews" Matthews Option
            Option value="Mower" Mower Option
            Option value="Pennypacker" Pennypacker Option
            Option value="Stoughton" Stoughton Option
            Option value="Straus" Straus Option
            Option value="Thayer" Thayer Option
            Option value="Weld" Weld Option
            Option value="Wigglesworth" Wigglesworth Option
          Select
          LINEBREAK
          Input type="submit" value="Register"
        Form
      Body
   HTML 
*/
?>
```
#### froshims/register-0.php
```nohighlight
<?php
/*
   Filename: register-0.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body 
        Pre PHP print_r($_POST); PHP Pre
      Body
   HTML 
*/
?>
```
 
###Class 1 Task: Froshims-1
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. There are two files for this follow along, `froshims-1.php` and `register-1.php`.  This follow along is very similar to `froshims-0`, but David introduces an external stylesheet that you will place in a new directory as well as some new `HTML` tags.
* <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/src7w/froshims/bootstrap/css/bootstrap.min.css" target="_blank">Bootstrap.min.css</a>
  * Place this file here: `~/workspace/module7/followalongs/froshims/bootstrap/css`
  * You can use the command `wget http://cdn.cs50.net/2015/fall/lectures/7/w/src7w/froshims/bootstrap/css/bootstrap.min.css`

#### froshims/froshims-1.php
```nohighlight
<?php
/*
   Filename: froshims-1.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   DOCTYPE declaration
  
   HTML 
      Head
          Link href="bootstrap/css/bootstrap.min.css" rel="stylesheet"
          Title Frosh IMs Title
      Head
      Body style="margin: 20px;"
        H1 Register for Frosh IMs H1
        Form action="register-1.php" method="post"
          Fieldset
            Label Name Label
            Input name="name" type="text"
            Label class="checkbox"
              Input name="captain" type="checkbox"
            Label
            Label class="radio"
              Input name="comfort" type="radio" value="less" Less Comfortable 
            Label
            Label class="radio"
              Input name="comfort" type="radio" value="more" More Comfortable 
            Label
            Label
              Select name="dorm"
                Option value="" Option
                Option value="Apley Court" Apley Court Option
                Option value="Canaday" Canaday Option
                Option value="Grays" Grays Option
                Option value="Greenough" Greenough Option
                Option value="Hollis" Hollis Option
                Option value="Holworthy" Holworthy Option
                Option value="Hurlbut" Hurlbut Option
                Option value="Lionel" Lionel Option
                Option value="Matthews" Matthews Option
                Option value="Mower" Mower Option
                Option value="Pennypacker" Pennypacker Option
                Option value="Stoughton" Stoughton Option
                Option value="Straus" Straus Option
                Option value="Thayer" Thayer Option
                Option value="Weld" Weld Option
                Option value="Wigglesworth" Wigglesworth Option
              Select
            Label
            Button class="btn-default" type="submit" Register Button
          Fieldset
        Form
      Body
   HTML 
*/
?>
```
#### froshims/register-1.php
```nohighlight
<?php
/*
   Filename: register-1.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   PHP
    If (empty($_POST["name"]) OR empty($_POST["comfort"]) OR empty($_POST["dorm"])
      Header "Location: Froshims-1.php"
    exit
  PHP
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body 
        You are registered! (Well, not really.)
      Body
   HTML 
*/
?>
```
###Class 1 Task: Froshims-2
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_for_web_programming" target="_blank">here</a> for the lecture notes. There are two files for this follow along, `froshims-2.php` and `register-2.php`.

`froshims-2.php` is almost identical to `froshims-0.php`, and if you feel comfortable enough you can copy `froshims-0` using the command `cp froshims-0 froshims-2` and then make the change below. (Make sure you are in the `~/workspace/module7/followalongs/froshims` folder)
* Submit the form to `register-2.php` instead of `register-0.php`
  * `Form action="register-2.php" method="post"`

#### froshims/froshims-2.php
```nohighlight
<?php
/*
   Filename: froshims-2.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body style="text-align: center;"
        H1 Register for Frosh IMs H1
        Form action="register-2.php" method="post"
          Name: Input name="name" type="text"
          LINEBREAK
          Input name="name" type="text" Captain?
          LINEBREAK
          Input name="name" type="text" Less Comfortable
          Input name="name" type="text" More Comfortable
          LINEBREAK
          Dorm:
          Select name="dorm"
            Option value="" Option
            Option value="Apley Court" Apley Court Option
            Option value="Canaday" Canaday Option
            Option value="Grays" Grays Option
            Option value="Greenough" Greenough Option
            Option value="Hollis" Hollis Option
            Option value="Holworthy" Holworthy Option
            Option value="Hurlbut" Hurlbut Option
            Option value="Lionel" Lionel Option
            Option value="Matthews" Matthews Option
            Option value="Mower" Mower Option
            Option value="Pennypacker" Pennypacker Option
            Option value="Stoughton" Stoughton Option
            Option value="Straus" Straus Option
            Option value="Thayer" Thayer Option
            Option value="Weld" Weld Option
            Option value="Wigglesworth" Wigglesworth Option
          Select
          LINEBREAK
          Input type="submit" value="Register"
        Form
      Body
   HTML 
*/
?>
```
#### froshims/register-2.php
```nohighlight
<?php
/*
   Filename: register-2.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body 
        PHP If (empty($_POST["name"]) OR empty($_POST["comfort"]) OR empty($_POST["dorm"])): PHP
          You must provide your name, comfort, and dorm! Go <a href="froshims-2.php">back</a>.
        PHP Else: PHP
          You are registered! (Well, not really.)
        PHP Endif PHP
      Body
   HTML 
*/
?>
```

###Class 1 Task: Froshims-3
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/7/w/notes7w/notes7w.html#using_php_to_send_texts" target="_blank">here</a> for lecture notes or <a href="https://manual.cs50.net/mail/" target="_blank">here</a> for the CS50 manual notes on sending mail. You will be using using a library called PHPMailer, which is pre-installed in the CS50 Appliance.  There are two files for this follow along, `froshims-3.php` and `register-3.php`.

`froshims-3.php` is almost identical to `froshims-0.php`, and if you feel comfortable enough you can copy `froshims-0` using the command `cp froshims-0 froshims-3` and then make the change below. (Make sure you are in the `~/workspace/module7/followalongs/froshims` folder)
* Submit the form to `register-3.php` instead of `register-0.php`
 * `Form action="register-3.php" method="post"`

#### froshims/froshims-3.php
```nohighlight
<?php
/*
   Filename: froshims-3.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body style="text-align: center;"
        H1 Register for Frosh IMs H1
        Form action="register-3.php" method="post"
          Name: Input name="name" type="text"
          LINEBREAK
          Input name="name" type="text" Captain?
          LINEBREAK
          Input name="name" type="text" Less Comfortable
          Input name="name" type="text" More Comfortable
          LINEBREAK
          Dorm:
          Select name="dorm"
            Option value="" Option
            Option value="Apley Court" Apley Court Option
            Option value="Canaday" Canaday Option
            Option value="Grays" Grays Option
            Option value="Greenough" Greenough Option
            Option value="Hollis" Hollis Option
            Option value="Holworthy" Holworthy Option
            Option value="Hurlbut" Hurlbut Option
            Option value="Lionel" Lionel Option
            Option value="Matthews" Matthews Option
            Option value="Mower" Mower Option
            Option value="Pennypacker" Pennypacker Option
            Option value="Stoughton" Stoughton Option
            Option value="Straus" Straus Option
            Option value="Thayer" Thayer Option
            Option value="Weld" Weld Option
            Option value="Wigglesworth" Wigglesworth Option
          Select
          LINEBREAK
          Input type="submit" value="Register"
        Form
      Body
   HTML 
*/
?>
```
#### froshims/register-3.php
```nohighlight
<?php
/*
   Filename: register-3.php
   Save in Folder: ~/workspace/module7/followalongs/froshims
   
   PHP
      // require PHPMailer
      Require "libphp-phpmailer/class.phpmailer.php"

      // validate submission
      If ( !empty($_POST["name"]) AND !empty($_POST["comfort"]) && !empty($_POST["dorm"]))
      {
          // instantiate mailer
          Declare a variable called mail and create an instance of the PHPMailer class  
          // Hint: $instance = new Class();
           
          // configure mailer use SMTP
          Call the method IsSMTP() 
          // Hint: $instance->Method();
          
          Set member variable Host to "smtp.gmail.com"
          // Hint: $instance->Member_Variable = "smtp.gmail.com";
          Set member variable Password to "crimson50"
          Set member variable Port to "587"
          Set member variable SMTPAuth to true
          Set member variable SMTPSecure to "tls"
          Set member variable Username to "jharvard@cs50.net"
         
            
          // set From:
          Call the method SetFrom("jharvard@cs50.net");
            
          // set To:
          Call the method AddAddress("jharvard@cs50.net");
    
          // set Subject:
          Set member variable Subject to "registration"
               
          // set body
          Set member variable Body to  
              "This person just registered:\n\n" .
              "Name: " . $_POST["name"] . "\n" .
              "Captain: " . $_POST["captain"] . "\n" .
              "Comfort: " . $_POST["comfort"] . "\n" .
              "Dorm: " . $_POST["dorm"]
    
          // send mail
          IF ($mail->Send() == false)
          {
              Print $mail->ErrInfo
              exit;
          }
      }
      else
      {
          Header "Location: froshims-3.php"
          exit;
      }
    PHP
   
   DOCTYPE declaration
  
   HTML 
      Head
          Title Frosh IMs Title
      Head
      Body 
        You are registered! (Really.)
      Body
   HTML 
*/
?>
```

### Class 1 Task: Counter
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along.
```nohighlight
<?php
/*
    // enable sessions
    Call the session_start() method

    // check counter
    If (isset($_SESSION["counter"]))
        Declare a variable called counter and assign $_SESSION["counter"] to it
    Else
        counter = 0

    // increment counter
    Increment $_SESSION["counter"] by 1

 DOCTYPE Declaration

 HTML
    Head
        Title counter Title
    Head
    Body
        You have visited this site <?= $counter ?> time(s). 
    Body
  HTML
*/
?>
```


###Class 2 Task: MVC-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 4 files for this follow along, `index.php` , `lectures.php`, `week0.php`, `week1.php`. 

**Before you start this follow along create a new directory in `~/workspace/module7/followalongs/` called `mvc`.  Then create a directory within the `mvc` directory called `0` to hold all of the files.**

#### mvc/0/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/0
   
  DOCTYPE declaration
    
     HTML 
        Head
            Title CS50 Title
        Head
        Body 
          H1 CS50 H1
          UL
            LI Link "lectures.php" Lectures Link LI
            LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
          UL
        Body
     HTML 
*/
?>
```
#### mvc/0/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/0
   
  DOCTYPE declaration
    
     HTML 
        Head
            Title Lectures Title
        Head
        Body 
          H1 Lectures H1
          UL
            LI Link "week0.php" Lectures Link LI
            LI Link "week1.php" Syllabus Link LI
          UL
        Body
     HTML 
*/
?>
```
#### mvc/0/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/0
   
  DOCTYPE declaration
    
     HTML 
        Head
            Title Week 0 Title
        Head
        Body 
          H1 Week 0 H1
          UL
            LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
            LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
          UL
        Body
     HTML 
*/
?>
```
#### mvc/0/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/0
   
  DOCTYPE declaration
    
     HTML 
        Head
            Title Week 1 Title
        Head
        Body 
          H1 Week 1 H1
          UL
            LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
            LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
          UL
        Body
     HTML 
*/
?>
```

###Class 2 Task: MVC-1
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 6 files for this follow along, `index.php`,`header.php`, `footer.php`,  `lectures.php`, `week0.php`, `week1.php`. David is factoring out some of the commonalities between the files.

**Before you start this follow along create a new directory in `~/workspace/module7/followalongs/mvc` called `1` to hold all of the files.**

#### mvc/1/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
   
  PHP Require "header.php" PHP
  
  UL
    LI Link "lectures.php" Lectures Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
  UL
  
  PHP Require "footer.php" PHP
*/
?>
```
#### mvc/1/header.php
```nohighlight
<?php
/*
  Filename: header.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
   
  DOCTYPE declaration
    
     HTML (Opening tag)
        Head
            Title CS50 Title
        Head
        Body (Opening Tag)
          H1 CS50 H1
*/
?>
```
#### mvc/1/footer.php
```nohighlight
<?php
/*
  Filename: footer.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
  
        Body (Closing tag)
     HTML (Closing tag)
*/
?>
```
#### mvc/1/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
   
  PHP Require "header.php" PHP
  
  UL
    LI Link "week0.php" Lectures Link LI
    LI Link "week1.php" Syllabus Link LI
  UL
  
  PHP Require "footer.php" PHP
*/
?>
```
#### mvc/1/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
   
  PHP Require "header.php" PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
  UL
  
  PHP Require "footer.php" PHP
*/
?>
```
#### mvc/1/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/1
   
  PHP Require "header.php" PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
  UL
  
  PHP Require "header.php" PHP 
*/
?>
```

###Class 2 Task: MVC-2
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 7 files for this follow along, `helpers.php`,`header.php`, `footer.php`, `index.php`,  `lectures.php`,`week0.php`, `week1.php`. David will take care of those headings using `helpers.php`.

**Before you start this follow along create a new directory in `~/workspace/module7/followalongs/mvc` called `2` to hold all of the files.**

#### mvc/2/helpers.php
```nohighlight
<?php
/*
  Filename: helpers.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  PHP 
  
    // Renders footer
    Declare a function called renderFooter() with the argument $data = []
      Extract $data
      Require "footer.php"
 
     // Renders header
    Function renderHeader($data = [])
      Extract $data
      Require "header.php"
      
  PHP
*/
?>
```
#### mvc/2/header.php
```nohighlight
<?php
/*
  Filename: header.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  DOCTYPE declaration
    
     HTML (Opening tag)
        Head
            Title <?= htmlspecialchars($title) ?> Title
        Head
        Body (Opening Tag)
          H1 <?= htmlspecialchars($title) ?> H1
*/
?>
```
#### mvc/2/footer.php
```nohighlight
<?php
/*
  Filename: footer.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
  
        Body (Closing tag)
     HTML (Closing tag)
*/
?>
```
#### mvc/2/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  PHP Require "helpers.php" PHP
  
  PHP Call the function renderHeader() using the input ["title" => "CS50"]) PHP
    UL
      LI Link "lectures.php" Lectures Link LI
      LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
    UL
    
  PHP Call the function renderFooter() using the input "footer" PHP
*/
?>
```
#### mvc/2/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  PHP Require "helpers.php" PHP
  
    PHP PHP Call the function renderHeader() using the input ["title" => "CS50"]) PHP PHP

    UL
      LI Link "week0.php" Lectures Link LI
      LI Link "week1.php" Syllabus Link LI
    UL
    
    PHP Call the function renderFooter() using the input "footer" PHP
*/
?>
```
#### mvc/2/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  PHP Require "helpers.php" PHP
  
  PHP PHP Call the function renderHeader() using the input ["title" => "CS50"]) PHP PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
  UL
  
  PHP Call the function renderFooter() using the input "footer" PHP
*/
?>
```
#### mvc/2/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/2
   
  PHP Require "helpers.php" PHP
  
  PHP PHP Call the function renderHeader() using the input ["title" => "CS50"]) PHP PHP
    
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
  UL
  
  PHP Call the function renderFooter() using the input "footer" PHP 
*/
?>
```

###Class 2 Task: MVC-3
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 7 files for this follow along, `helpers.php`,`header.php`, `footer.php`, `index.php`, `lectures.php`,`week0.php`, `week1.php`. 

**Before you start this follow along create a new directory in `~/workspace/module7/followalongs/mvc` called `3` to hold all of the files.**

#### mvc/3/helpers.php
```nohighlight
<?php
/*
  Filename: helpers.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  PHP 
  
    // Renders template
    Declare a function render() with two arguments:  $template and $data = []
    
      Declare a variable called path and assign $template . ".php" to it
      If ( File Existis ($path))
        Extract $data
        Require $path
      
  PHP
*/
?>
```
#### mvc/3/header.php
```nohighlight
<?php
/*
  Filename: header.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  DOCTYPE declaration
    
     HTML (Opening tag)
        Head
            Title <?= htmlspecialchars($title) ?> Title
        Head
        Body (Opening Tag)
          H1 <?= htmlspecialchars($title) ?> H1
*/
?>
```
#### mvc/3/footer.php
```nohighlight
<?php
/*
  Filename: footer.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
  
        Body (Closing tag)
     HTML (Closing tag)
*/
?>
```
#### mvc/3/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  PHP Require "helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "CS50"]  PHP
    UL
      LI Link "lectures.php" Lectures Link LI
      LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
    UL
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/3/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  PHP Require "helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Lectures"]  PHP

    UL
      LI Link "week0.php" Lectures Link LI
      LI Link "week1.php" Syllabus Link LI
    UL
          
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/3/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  PHP Require "helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 0"]  PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/3/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/3
   
  PHP Require "helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 1"]  PHP
    
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP 
*/
?>
```

###Class 2 Task: MVC-4
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 7 files for this follow along, `helpers.php`,`header.php`, `footer.php`, `index.php`, `lectures.php`,`week0.php`, `week1.php`. David will be reorganizing the project by moving some files into subdirectories. You will make a directory called `includes` for `helpers.php` and one called `templates` for `header.php` and `footer.php`.

**Before you start this follow along create a new directory in `~/workspace/module7/followalongs/mvc` called `4` to hold all of the files.**

#### mvc/4/includes/helpers.php
```nohighlight
<?php
/*
  Filename: helpers.php
   Save in Folder: ~/workspace/module7/followalongs/mvc/4/includes
    
  PHP 
  
    // Renders template
    Declare a function render() with two arguments:  $template and $data = []
    
      Declare a variable called path and assign __DIR__ . "/../templates/" . $template . ".php" to it
      If ( File Existis ($path))
        Extract $data
        Require $path
      
  PHP
*/
?>
```
#### mvc/4/templates/header.php
```nohighlight
<?php
/*
  Filename: header.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4/templates
   
  DOCTYPE declaration
    
     HTML (Opening tag)
        Head
            Title <?= htmlspecialchars($title) ?> Title
        Head
        Body (Opening Tag)
          H1 <?= htmlspecialchars($title) ?> H1
*/
?>
```
#### mvc/4/templates/footer.php
```nohighlight
<?php
/*
  Filename: footer.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4/templates
  
        Body (Closing tag)
     HTML (Closing tag)
*/
?>
```
#### mvc/4/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4
   
  PHP Require "includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "CS50"]  PHP
    UL
      LI Link "lectures.php" Lectures Link LI
      LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
    UL
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/4/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4
   
  PHP Require "includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Lectures"]  PHP

    UL
      LI Link "week0.php" Lectures Link LI
      LI Link "week1.php" Syllabus Link LI
    UL
          
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/4/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4
   
  PHP Require "includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 0"]  PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/4/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/4
   
  PHP Require "includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 1"]  PHP
    
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP 
*/
?>
```

###Class 2 Task: MVC-5
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder. Check <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">here</a> for the lecture notes for this follow along. There are 7 files for this follow along, `helpers.php`,`header.php`, `footer.php`, `index.php`, `lectures.php`,`week0.php`, `week1.php`. David will be reorganizing the project again by moving some files into subdirectories. You will make a directory called `public` for `index.php`, `lectures.php`,`week0.php`, and `week1.php`.  You will still have an `includes` folder for `helpers.php` and one called `templates` for `header.php` and `footer.php`.

You can choose to copy `mvc/4` using the command `cp -r 4 5` when you are in the `~/workspace/module7/followalongs/mvc` directory.  You will only have to update the PHP require methods to ensure that the files `index.php`, `lectures.php`,`week0.php`, and `week1.php` have the correct paths. The new statement will be:
```php
<?php require("../includes/helpers.php"); ?>

```

**If you do not copy the directory and use the pseudocode below, before you start this follow along create a new directory in `~/workspace/module7/followalongs/mvc` called `5` to hold all of the files.**

#### mvc/5/includes/helpers.php
```nohighlight
<?php
/*
  Filename: helpers.php
   Save in Folder: ~/workspace/module7/followalongs/mvc/5/includes
    
  PHP 
  
    // Renders template
    Declare a function render() with two arguments:  $template and $data = []
    
      Declare a variable called path and assign __DIR__ . "/../templates/" . $template . ".php" to it
      If ( file_exists($path))
        Extract $data
        Require $path
      
  PHP
*/
?>
```
#### mvc/5/templates/header.php
```nohighlight
<?php
/*
  Filename: header.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/templates
   
  DOCTYPE declaration
    
     HTML (Opening tag)
        Head
            Title <?= htmlspecialchars($title) ?> Title
        Head
        Body (Opening Tag)
          H1 <?= htmlspecialchars($title) ?> H1
*/
?>
```
#### mvc/5/templates/footer.php
```nohighlight
<?php
/*
  Filename: footer.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/templates
  
        Body (Closing tag)
     HTML (Closing tag)
*/
?>
```
#### mvc/5/public/index.php
```nohighlight
<?php
/*
  Filename: index.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/public
   
  PHP Require "../includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "CS50"]  PHP
    UL
      LI Link "lectures.php" Lectures Link LI
      LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/syllabus/cs50/cs50.html" Syllabus Link LI
    UL
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/5/public/lectures.php
```nohighlight
<?php
/*
  Filename: lectures.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/public
   
  PHP Require "../includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Lectures"]  PHP

    UL
      LI Link "week0.php" Lectures Link LI
      LI Link "week1.php" Syllabus Link LI
    UL
          
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/5/public/week0.php
```nohighlight
<?php
/*
  Filename: week0.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/public
   
  PHP Require "../includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 0"]  PHP
  
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/w/week0w.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/0/f/week0f.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP
*/
?>
```
#### mvc/5/public/week1.php
```nohighlight
<?php
/*
  Filename: week1.php
  Save in Folder: ~/workspace/module7/followalongs/mvc/5/public
   
  PHP Require "../includes/helpers.php" PHP
  
  PHP Call the function render() using the inputs "header" and ["title" => "Week 1"]  PHP
    
  UL
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/m/week1m.pdf" Wednesday Link LI
    LI Link "http://cdn.cs50.net/2015/fall/lectures/1/w/week1w.pdf" Friday Link LI
  UL
  
  PHP Call the function render() using the input "footer" PHP 
*/
?>
```











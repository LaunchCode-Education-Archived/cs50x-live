[Module 7](../..)

# Problem Set: Pset 7

### Synopsis

In this problem set, your goal is to implement your own version this site:

https://finance.cs50.net/

aka *C$50 Finance*. Your first step is to play around with it for a couple minutes and get a feel for it. Do that now!

Your site will use a PHP backend with a MySQL database to store user accounts and and their stock portfolios.

### How to submit 

1. When ready to submit, "export" your MySQL database (i.e., save it into a text file) by executing the commands below, where username is your own username, pasting your MySQL password when prompted for a password. (Recall that you can see your MySQL password by clicking the ⓘ icon toward CS50 IDE’s top-right corner.) For security, you won’t see the password as you paste it.

  ```nohighlight
  cd ~/workspace/pset7
  mysqldump -u username -p pset7 > pset7.sql
  ```
  
  If you type ls thereafter, you should see that you have a new file called pset7.sql in ~/workspace/pset7. (If you realize later that you need to make a change to your database and re-export it, you can delete pset7.sql with rm pset7.sql, then re-export as before.)
  
2. On the CS50 IDE's "file browser" menu on the left side of the page (not within a terminal window), control-click or right-click your pset7 folder and then select Download. You should find that your browser has downloaded `pset7.tar`, a "tarball" that’s similar in spirit to a ZIP file.

3. On Vocareum, upload `pset7.tar` into the assignment titled **Problem Set 7: Finance**.

### Guidance

The structure of this project is very similar to the project you created in the [Greetings studio](../studios/greetings), so you should already have some familiarity with the various building blocks of the application. If you have not yet completed Greetings, we recommend you go back and do that first. 

### Get Started

This greedy shark has instructions for you. Click to view:

<a href="http://cdn.cs50.net/2015/fall/psets/7/pset7/pset7.html" target="_blank">
  <img src="http://orig07.deviantart.net/87e1/f/2011/099/7/d/wall_street_shark_by_jjpoatree-d3dl9ba.png" />
</a>

After you look over the Spec, you might also find it helpful to check out <a href="https://study.cs50.net/mvc" target="_blank">CS50 Study / MVC</a> (we didn't include it in the prep work because it makes heavy use of this Problem Set as an example.)


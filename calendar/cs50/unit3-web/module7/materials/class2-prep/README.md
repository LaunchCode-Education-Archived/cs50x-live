[Module 7](../..)

# Class 2 Prep


##### Lecture
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Lecture | <a href="https://youtu.be/rJeP65u84ec?t=1045" target="_blank">Week 8</a> | Starts at 17:25
Watch | Lecture | <a href="https://www.youtube.com/watch?v=yoDrhOZCKWo" target="_blank">Week 8, continued</a>

***

##### MVC
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=XdCxfJki4t4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av&index=3" target="_blank">MVC</a>
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/m/notes8m/notes8m.html#mvc" target="_blank">Week 8 / MVC</a> 
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=3Jy0OIaHviI&index=2&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-0</a> | To start, we make a site with a series of very similar pages of hard-coded HTML. Surely this can be improved!
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=OwY_kl87bxY&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=3" target="_blank">mvc-1</a> | First, we factor out much of the repeated HTML into one "header" and "footer" template.
|||| TODO res and exc: `extract` in PHP (possibly move to class 1 prep)
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=-6FRpI6V788&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO&index=4" target="_blank">mvc-2</a> | Now we write functions to render our header and footer, so that we can specify a different title for each page.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=5juddGp7D9g&index=5&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-3</a> | Here, we condense our two `renderHeader` and `renderFooter` functions into a single `render` function that takes an additional parameter for the file ("header" or "footer").
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=CsmWCvlbXMQ&index=6&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-4</a> | Here, we improve the organization of our project by moving some files into separate subdirectories. Since those files have moved, we must go back and include the full file path to any `require` stateents in our code.
Follow Along | Walkthrough | <a href="https://www.youtube.com/watch?v=IbfPIpPAbf4&index=7&list=PLhQjrBD2T3810Z6sRJdj148H0ANU2jJcO" target="_blank">mvc-5</a> | Finally, we do a bit more re-organization, this time for security purposes. Any files that the user does not directly need to access, we relocate out of the `public/` directory.
Do | Exercise | | TODO exc: refactor something to use MVC (potentially intersperse a bunch of these with the follow-alongs)
Study | CS50 Study | <a href="https://study.cs50.net/mvc?toc=mvc" target="_blank">MVC</a>

***

##### SQL
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=BPOH5WLf3yM&index=4&list=PLhQjrBD2T380EySS3Y9fBANbblTRxT5Av" target="_blank">SQL</a> | Doug talks about databases and SQL, bushing on all these topics: phpmyadmin, the SQL data types, primary keys, the basic SQL query commands: INSERT, SELECT, UPDATE, and DELETE, selecting with JOIN, and the `query` funciton in php
Watch | Short | <a href="https://www.youtube.com/watch?v=G58ujNjWEJY&index=44&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">SQL</a> | Christopher goes over the main SQL commands using delicious cupcakes.
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql" target="_blank">Week 8, continued / SQL</a> | make sure they're comfortable using that cs50 query function
|||| TODO res SQL cheatsheet?
|||| TODO exc: SQL stuff. Maybe use Chris Bay's node workshopper?
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#transactions" target="_blank">Week 8, continued / Transactions</a> | Sometimes you need to "lock" your SQL operations together into transactions, so that multiple operations are guaranteed to happen in sequence without interruption. 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/8/w/notes8w/notes8w.html#sql_injection" target="_blank">Week 8, continued / SQL Injection</a> | You should never interpolate user input directly into the strings that hold your SQL queries. Doing so makes you vulnerable to a SQL injection attack! 

***

##### TBD
Task | Resource Type | Link | Instructions
-----|------|------|------
Watch | Andi's Section | <a href="https://www.youtube.com/watch?v=UuNuJ4Q6b-s&feature=youtu.be" target="_blank">Week 8</a> | TODO Move to Module 8

### Now you're ready for [Class 2](../class2)

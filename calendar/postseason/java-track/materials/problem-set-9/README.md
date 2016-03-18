PSET 1
==========

This problem set will give you some practice with encapsulation in Java, as well as some practice using git.

The following resources will probably be of some use to you:

* [Using github through Intellij](https://www.jetbrains.com/idea/help/using-github-integration.html)
* [Online text about creating data types](http://introcs.cs.princeton.edu/java/32class/)
* [What is an object?](https://docs.oracle.com/javase/tutorial/java/concepts/object.html)
* [What is a class?] (https://docs.oracle.com/javase/tutorial/java/concepts/class.html)
* [Writing jUnit tests] (http://www.vogella.com/tutorials/JUnit/article.html)

If you haven't done so already, create a [github](http://github.com) account. You'll wank to fork this repository, which can be done by clicking the "Fork" button at the top of this page.

Next, open up Intellij. Select the option to check out code from a repository and follow the prompts to create a project, using the above guide if you get stuck. If you see the folders for problem sets in the project explorer, then you have succeeded!

#Using Encapsulation

Your task is to generate two classes: Student and Course

First, take a look at the StudentAndCourseTest.java file. In that file you will see a single unit test. Before you begin creating your classes, create a few more tests, using the first test as a guide.

Next, start crafting a Student class. Students have lots of wonderful properties, but we are primarily interested in these:

* Name (first and last)
* Student ID
* Credits
* GPA

Add these properties to your class, create a constructor, create some accessors, and test!

Now we want to add some functionality to our Student class. Add the following methods:

**`toString()`** - returns the students full name and student ID

**`getClassStanding()`** - returns the students class standing based on how many credits they have:

- Fewer than 30: Freshman
- More than 30 but less than 60: Sophomore
- More than 60 but less than 90: Junior
- More than 90: Senior

**`submitGrade()`** - this method takes in a course grade (as a value between 0 and 4) and the number of credits for a course, and updates the students GPA accordingly. GPA can be computed by the following formula:

Take the number of credits for a course and multiply it by the grade for that course. This is called the quality score. GPA is computed as the sum of all of the quality scores for each course the student has taken, divided by the total number of credits.

**`computeTuition()`** - this method returns the total amount of tuition the student has paid. The average cost of tuition for 1 semester in the United States is roughly $20,000. Assume that there are 15 credit hours per semester, and come up with a strategy to handle any "leftover" credits.

**`createLegacy()`** - it is not unusual for two students to meet at college, get married, start a family, and send their children to the same school. This method should take a Student object as a parameter then create a new Student object based on the following criteria:

- Use one parent's full name as the baby's first name, the other parent's full name as the baby's last name
- Assign the baby a random student ID that has at least six digits.
- The legacy's estimated GPA will be the average of its parents GPA.
- The legacy's estimated number of credits will be the maximum of its parents credits

Hint: it may be useful to create an additional constructor!

Before moving on, make sure you have written at least one test for each method, and that your tests pass!

#Creating a Course class

The Course class should contain the following properties:

* Name
* Credits
* Number of seats
* Roster of Students

Add these properties to your class, create a constructor, create some accessors, and test!

Next, implement the following functionality:

**`toString()`** - should contain the course number and credits

**`addStudent()`** - returns a boolean based on whether or not the student was successfully added to the course. Check to make sure that the student has not already enrolled, and update the number of seats remaining.

**`printRoster()`** - displays a roster with all of the students in the course. Make sure to omit "empty" seats!

**`averageGPA()`** - returns the average GPA of all students enrolled in the course. Make sure to omit "empty" seats!

Once you are finished, make sure you have written at least one test for each method, and that they pass. In addition to your unit tests, you should also have a main() method in your program that creates a few instances of students and courses, and tests their functionality.

Then commit and push your code to your repository (select the files -> right click -> git -> Commit -> Commit and Push), and notify an instructor. You can email Doug at: dsshook@gmail.com.

#Additional Features

This exercise could also be extended to include `Department`, `Instructor`, `University`, and  `Semester` classes. Try designing some of these and incorporating them into this problem set if you have time. Don't forget to test!
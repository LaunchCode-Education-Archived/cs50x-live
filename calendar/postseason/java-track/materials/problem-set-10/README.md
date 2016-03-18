#Creating a Quiz

Your next task will be to create a program that allows the user to take a quiz. This means you will have to create some questions, and get some feedback from the user.

First, the questions. We want to be able to handle multiple types of questions: multiple choice, fill in the blank, and questions with strictly numeric answers.

As usual, consider:

* What do these types of questions have in common?
* What makes these question types different?

Construct a base class that contains the common features, and subclasses as necessary. Don't forget to test!

Make sure that there is functionality included to display the questions, the choices (if necessary) and check to see if the answer is correct.

#Design Change

Now let's add a wrinkle into the design. We want to have two types of multiple choice questions: questions where only one choice is correct, and questions where multiple choices are correct.

Think about how this will affect your design, and make the necessary changes. Test your code to make sure this new design works!

#Putting it all together

You're now ready to present these questions as a Quiz. Create a quiz class that will choose a question, present it to the user, accept the user's response, and then tell them whether their answer was correct or incorrect.

You have two paths for grabbing user input:

* Scanner can read input from the console (quicker, easier): [Scanner API](http://docs.oracle.com/javase/7/docs/api/java/util/Scanner.html)
* Dialogs use windows and buttons to get user feedback (more complex, but flashier): [Dialog Examples](https://docs.oracle.com/javase/tutorial/uiswing/components/dialog.html)

When it comes to testing this portion of the program, be careful: good design states that retrieving input should be kept separate and isolated from the rest of the program. We want to be able to simulate user input in our tests by provided the appropriate values through method calls. We do **not** want to have to sit and type in a bunch of answers to questions just to test our code!

For this problem set, you know that you have a good design if your Quiz class is fairly short. Remember that each of the Questions should be responsible for displaying themselves and checking the answers, so the Quiz class merely needs to utilize this functionality!

When you are finished, make sure that all of your unit tests pass, commit and push your code, and notify an instructor.
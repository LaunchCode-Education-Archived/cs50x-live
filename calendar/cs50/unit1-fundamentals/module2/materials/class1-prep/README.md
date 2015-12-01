##### [Module 2](../../)

# Prep for Class 1

#### Lecture:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
 Watch | Lecture | [Week 2](https://www.youtube.com/watch?v=FgfLXemFoIo) | Watch this week's first lecture. You can skip from 9:00 to the 19:30 minute mark (David makes Harvard-specific announcements, and talks about their academic honesty guidelines). 

#### Typecasting:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Watch| Short |<a href="https://www.youtube.com/watch?v=4XTSxFSs3kI&list=PLhQjrBD2T381NKQHUCTezeyCYzbnN4GjC&index=9)" target="_blank">Typecasting</a>
Read | Supplement |[Typecasting](../resources/typecasting) | TODO this is in Module 1... want to move to Module 2?
Do | Exercise | [Typecasting](../exercises/typecasting) | TODO
Follow-Along | Walkthrough |<a href="https://www.youtube.com/watch?v=Eycgpd_HUIA&index=10&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">floats-0</a> | Following David, write a program that prints out a float.
Follow-Along| Walkthrough| <a href="https://www.youtube.com/watch?v=26JLIimnyyM&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=11" target="_blank">floats-1</a> | Keep following David to solve the problem from the previous video. 
Follow-Along| Walkthrough | <a href="https://www.youtube.com/watch?v=JqKDFhCaWC8&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=12" target="_blank">floats-2</a> | Continue the follow-along with David as he "blows your mind" with floating-points! 

#### Chars, ASCII:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Resource |[Chars](../resources/Chars) | TODO briefly introduce the `char` type, and explain that strings we've seen so far are just a sequences of chars.
Read |Resource| [Three Letter Word](resources/threeletterword) | TODO an exmaple program that asks for three letters, one `char` at a time, and then prints "That spells %c%c%c!"
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html#typecasting" target="_blank">Week 2 / Typecasting</a> | Read the notes for the "Typecasting" section. This will explain typecasting using a program that converts alphabetical letters to their ASCII equivalents. <br> Stop at the *References* header.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=sELkIJyRHWg&index=5&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">ascii-0</a> | Follow David to write the same ASCII program you just read through in the Lecture Notes.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=ifCoAx0r3es&index=6&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">ascii-1</a>| Continue following David. Pay attention to when David talks about equivalence between chars and ints.

#### Functions:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Resource|  [Calling Functions](../resources/callingfunctions) | TODO res: review of how to call a library function. Understanding return value vs side effect.
Do | Exercise | [Exercise: strlen](../exercises/strlen) | TODO exc: make them use the strlen function
Read | Resource | [Creating Functions](../resources/creatingfunctions) | TODO res: explain that in addition to using other people's functions like `printf` and `atoi`, we can also write our own. 
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/1/f/notes1f/notes1f.html#functions_and_arguments" target="_blank">Functions and Arguments</a> | Read the "Functions and Arguments" section of the notes, which reviews how to define your own function. <br> Stop at the *Problem Set 1* header (don't be confused: these notes are from the previous week, but we find them helpful to include here). 
Follow-Along | Walkthrough| <a href="https://www.youtube.com/watch?v=9zoRoz8Pq4E&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=13" target="_blank">functions-0</a> | Follow David to write a program in which you create your own function.
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=7X9KUm5xej0&index=14&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">functions-1</a> | Now you'll implement a function that returns a return value. 
Do | Exercise | [Step Into](../exercises/step-into) | TODO exc: make them step through source code from walkthroughs (cough0-4, functions0-1) in the Debugger, similar to module1/exercises/debug. Introduce the Step Into button.
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=jtuMIHebSu8&list=PLhQjrBD2T383cKxax1sP6rKA3Q1JGrgcE&index=2" target="_blank">Functions</a> | Watch Doug's video where he breaks down functions. Feel free to practice with the problems he gives you.
Do | Exercise | [Next Num](../exercises/nextnum) | TODO exc: have them refactor a program that computes the next number after an input value, by pulling functionality out of main and into a function with signature `int successor(int n)`
Watch | Shorts | <a href="https://www.youtube.com/watch?v=gziiOF0uIX8&index=6&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF" target="_blank">Return Values</a> | TODO: Potentially scrap this. Somewhat confusingly presented-- `void` as "simplest return type", and last example uses file i/o, which will be scary and unfamiliar.
Read | Resource | [Return Values](../resources/returnvalues) | TODO res: give picture of return values as evaluating a statement.

#### Scope:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html#functions" target="_blank">Week 2 / Functions</a>
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=pBqyy8NwzqY&index=3&list=PLhQjrBD2T383cKxax1sP6rKA3Q1JGrgcE" target="_blank">Variables and Scope</a>
Watch | Shorts | <a href="https://www.youtube.com/watch?v=UC5QAokAupo&index=8&list=PLhQjrBD2T381wyZt81eGNZuZ4rzOos-AF" target="_blank">Scope</a> | He mentions "stack frames" and memory towards the end. don't worry about it.
Read | Resource | [Scope](../resources/scope) | TODO res: buggy program with loop, need to pull out the variable to higher scope
Do| Exercise | [Scope](../exercises/scope) | TODO exc: something that follows from resources/scope

#### Strings:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Lecture Notes | <a href="http://cdn.cs50.net/2015/fall/lectures/2/m/notes2m/notes2m.html#representing_strings" target="_blank">Week 2 / Representing Strings</a>)
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=BYbuuUntOZ4&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=15" target="_blank">string-0</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=a2n7vKdRWKE&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=16" target="_blank">string-1</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=p1e_6lkMGDg&index=17&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU" target="_blank">string-2</a>
Read | Resource |[More on For-Loops](../resources/forloops) | TODO res: more explanation on that strlen() thing in the for loop
Do | Exercise | [Indexes](../exercises/indexes) | TODO exc: print each character in a string along with its index
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=wYvnyO2PbT0&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=9" target="_blank">capitalize-0</a>
Follow-Along | Walkthrough | <a href="https://www.youtube.com/watch?v=h0hcz5zCBhU&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=8" target="_blank">capitalize-1</a> 
Follow-Along | Walkthrough| <a href="https://www.youtube.com/watch?v=wYvnyO2PbT0&list=PLhQjrBD2T380sc-fXwl1sviA-twxFduVU&index=9capitalize-2" target="_blank">capitalize-2</a>

#### The Modulo Operator `%`:
 Task | Resource Type| Link | Instructions
------|------|------|-------------
Read | Resource | [Modulo](TODO) | TODO res: introduce `%` and give some examples
Watch | Doug's Playlist | <a href="https://www.youtube.com/watch?v=_FC-8QaaYgs&list=PLhQjrBD2T38117CFyiIB9x4NOR6979YwA&index=3) target="_blank">Operators</a>| (Again. Just watch the <a href="https://youtu.be/_FC-8QaaYgs?list=PLhQjrBD2T38117CFyiIB9x4NOR6979YwA&t=119" target="_blank">part about modulo</a> if you prefer)
Do | Exercise | [Clock](TODO) | TODO exc: write a program that receives an int number of hours and then calculates what time it will be that many horus in the future

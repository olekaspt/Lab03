# Lab03

## Objective:
The objective of this Lab is to understand memory management approaches and implications those approaches.

This game implementation is trying to avoid the copy constructor being called on the Card class, as that could be akin to cheating.   In industry it could be that to create a new instance of a class is expensive, and the copy constructor is also expensive as well.

# Task

## Task 0: Evaluate initial starter implementation, to decide which two implementation to choose from.  You will be required to implement the RAII and std::move approach, but you also get to pick between dumb pointers or smart pointers.

YOu will be doing RAII and std::move, and then either dumb pointers or smart pointers.   

Compare and contrast the approaches towards managing the memory.

Run the code in the debugger to be able to help explain the difference if needed.

* Explain your choice for the project
*	Explain the difference between the copy and move constructor. (https://www.geeksforgeeks.org/move-constructors-in-c-with-examples/)
*	Explain why the unintentional calling of the copy constructor is bad (see the CallGameWithCheating in main.cpp)
*	Compare and contrast the destructors for the classes and approaches.  Which approach feels the one less prone to bugs?


## Task 1:  Consider how to Implement a card game called 13 using chosen implementations.

This will mean you need to modify the CMakeLists.txt file.
The rules are:
1.	The game is played with at least two players, this is recommended, but at most four players.
2.	The Game begins with every player has an empty stack and draws five cards on their first turn.
3.	At the start of their turn, each player must draw a card from the top of the deck
4.	Each player must end their turn with 5 or fewer cards in their hand.
5.	The game is played with a standard playing card deck (Ace = 1, Jack = 11, Queen =12, King = 13). 
6.	The player should create a stack from their hand of each unique card in order from 1 to 13. 
7.	The Player can place different suit cards on each other in the stack.
8.	The player may only add to the stack on their turn.
9.	During their turn, the player may draw additional cards from the top of the pile until they have six cards
10.	When the player cannot place any more cards in their stack and they have 6 cards in their hand, they must discard 1 card to the bottom of the deck.
11.	A player may choose to discard their hand to the bottom of the deck and draw 5 new cards at the beginning of their turn. This action ends their turn without them getting a chance to draw a 6th card or add any cards to their stack.
12.	The Game ends when someone completes their stack. That player is the victor.


## Task 2  Create a Unit Test library to test the classes for the two implementations.
Write and have pass at least 3 tests per class (3 classes, so so min of 9 UnitTests per each implementation).  These tests do not have to be super complicated, but this is where you want to think about your corner cases.

Complete this before moving on to task 3.
 
## Task 3 Now provide implementation for the approachs you chose in Task 0 and implement the card game 13.
Show screen shots of you two games with an initial hand, and a screen shot of the game ending with a player winning.  Do this for both implementations.


# Lab Submission
1.	Write a PDF that has the screenshots or written sections asked for in the Tasks (if applicable)
3.	Include all source code from all tasks, input and output files (if any), and any special instructions to compile and run those programs.
4.	Package all source files in a single tar and submit the file to canvas.  (so submit two files a tar files and pdf file)

# Lab Grading
1.	60% - code has been correctly implemented and meets all requirements.
1.	40% - Code style, Participation Rubric, and Information requested in PDF 

If program fails to compile, 0% will be given for that Task.

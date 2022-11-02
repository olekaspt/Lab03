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

Objective: Be the first player to create a personal stack of cards numerically from Ace to King (1-13). Suits don’t matter!

1.	Two Players 
2.	Player 1 goes first
3.	Each Player is dealt 5 cards from the Community Deck
4.	Player checks their hand and begins creating a Personal Stack of cards starting with Ace (1) first round and following numerical order in subsequent rounds.
	  If they do not have an Ace (or the topmost card’s following number), they have two options:
               1. Draw a 6th card. If card is not needed, then discard (any choice) card to bottom of Community Pile. Turn ends.
               2. Discard entire hand to bottom of Community Pile. Turn ends. Player begins next turn by drawing 5 new cards.
	  If they have an Ace (or the topmost card’s following number):
	              1. Begin stacking cards chronologically in Personal Stack with Ace (1) at the bottom. 
	                 Player can continue drawing cards (but no more than 6 in hand) and stacking cards chronologically until they are no longer able to. 
                  If they have 6 cards in hand, then they must discard 1 (choice) card to bottom of Community Pile. Turn ends.
5.	Next Player’s turn begins at Step 4.
6.	The first player to numerically build their Personal Stack from Ace-1 (bottom) –-> King-13 (top) wins!

Note: It is possible to win the game in 1 turn. Example: Player stacks cards from 1 to 13 without ever exceeding the 6-card limit in hand.

Note: Personal Stacks MUST be completed IN ORDER. Numbers cannot be skipped and returned to later. Example: If Player has a hand with 1,3,4,5,6, then they can ONLY  
      place the 1 on the table and draw again. Their Personal Stack cannot continue to grow until they have a 2.


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

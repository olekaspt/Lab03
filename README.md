# Lab03
See Code and Lab Report Standards - https://github.com/olekaspt/LabStandards
## Objective:
The objective of this Lab is to understand memory management approaches and implications those approaches.

This game implementation is trying to avoid the copy constructor being called on the Card class, as that could be akin to cheating.   In industry it could be that to create a new instance of a class is expensive, and the copy constructor is also expensive as well.

# Task

## Task 0: Evaluate sample implementation, to understand the three approaches to memory allocation.  You will be required to implement a method on each of the implementations to transfer a card from on player to another player.

git clone https://github.com/olekaspt/Lab03.git

YOu will be doing RAII and std::move, dumb pointers, and smart pointers.   

Compare and contrast the approaches towards managing the memory.

## Task 1: Answer questions from inspection of code.
Run the code in the debugger to be able to help explain the differences.

For the lab report answer the following questions:
*	Explain the difference between the copy and move constructor. (https://www.geeksforgeeks.org/move-constructors-in-c-with-examples/)
*	Explain why the unintentional calling of the copy constructor is bad (see the Cheating method as on example in main.cpp)
*	Compare and contrast the destructors for the classes and approaches.  Which approach feels the one less prone to bugs?
*	Inpsect the usage of smart pointers, should we consider chaning the usage to be only unique_ptr instead of shared_ptr.  Can you think of a case in this game where shared_ptr could end up bad scenario?


## Task 2:  Add a method to transfer a card from one player to another player.

The method in question for each version of the game - is XXXXX::PlayersSwapCards()

The goal is for player1 to give a card to player2.  And vice versa.  Any card will do, and you can pass the same card back and forth.


## Task 3  Design a series of classes that have ownwerhip relationship.  For the sandbox example, I made a Game class, a PLayer class, and a Card class.  You will need to introduce these classes with their own header file and implementation file.  Each class will need to be in it's own header file and implementation file.  You can add this to the starter code shared library.

Your example should include at least 3 examples.  And at least one of the classes that owns other clases needs to have mutiple instances of it.  For example, there are two Persons representing players in game.  And the Person owns the cards in its hand.

For you classes, you will need to define the following:
1. Constructor
2. Copy Constructor
3. Copy assignmnet operator
4. Move constructor
5. Move assignnment operator.

Have the initializer's for your class setup the state.  I.e. in the game example, the players are created the deck is populated with cards.

You can choose either dumb pointers, RAII and move operator, or smart pointer for this implementation.

For the lab report answer the following questions:
Explain the object ownership of you classes.
 
## Task 4 Provide an unit test of setting up the top level object and properly destroy this object.
You can choose either dumb pointers, RAII and move operator, or smart pointers for this test.  

For the lab report answer the following questions:
Explain your choice of dumb pointers, RAII and move operator, or Smart pointers.  Why did you choose this implemetation.

# Lab Submission
1.	Write a PDF that has the screenshots or written sections asked for in the Tasks (if applicable)
3.	Include all source code from all tasks, input and output files (if any), and any special instructions to compile and run those programs.
4.	Package all source files in a single tar and submit the file to canvas.  (so submit two files a tar files and pdf file)

# Lab Grading
1.	60% - code has been correctly implemented and meets all requirements.
1.	40% - Code style, Participation Rubric, and Information requested in PDF 

If program fails to compile, 0% will be given for that Task.


# Appendix
This is rules of the game, which is not needed for the assignment.

"13" Is played with a standard deck of players cards.
The Objective of the game is to create a stack of 13 cards in numericle order:
Ace(1),2,3,4,5,6,7,8,9,10,Jack(11),Queen(12),King(13) - Cards must be played in this order to win, suit is irrelevant.

1. There are only two players
1. Each player starts the game by drawing a hand of 5 cards from the community pile. The maximum amount of cards
you can have in one hand is 6, however, you can only end your turn while having five cards in hand. If they do
have six cards and want to end their turn they may discard one of their cards and end their turn.
1. At the start of a players turn they will play cards onto their stack in an attempt to form the win condition,
they can draw as many cards during their turn as long as their hand does not exceed the 6 card limit.
1. If a player desires, they may discard all their cards to the bottom of the community pile and recieve 5 new ones,
this action ends the players turn and does not allow them to take anymore actions, such as drawing an additional card.
1. The Game concludes when one player during their turn completes the stack of 13 cards.


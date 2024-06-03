# CODSOFT
Internship Projects in C++ Development 

Task -> 1 
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.

I have created a number guessing game with 3 levels using random number generator 
A number will generated randomly according levels and range of number.
1st level will let the player to guess between 1-30 numbers with 10 attempts to guess.
2nd level will let the player to guess between 1-50 numbers with 10 attempts to guess.
3rd level will let the player to guess between 1-100 numbers with 10 attempts to guess.
Each level has separate attempt counter if a player can't guess in 10 attempts then game will be over and
player gets a message of game over or play again. similar for 3 levels.
A player will promote to next level if guessed correctly in present level. 3rd level is the final level.

Task-> 2
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.

I have created a simple calculator that can calculate floating-point numbers as well. The calculator is a command-line interface (CUI) program with the following options:

1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
6.Logarithm
7.Square
8.Cube
9.power
10.Sin
11.cos
12.tan
13.square root
14. clear
15. Exit
This program allows the user to enter a choice and then prompts for two numbers to perform calculations. It continues running until the 'Exit' option is chosen. Additionally,


Task->3 (Tic-Tac-Toe Game)

Build a simple console-based Tic-Tac-Toe game that
allows two players to play against each other

Game Board: Create a 3x3 grid as the game board.
Players: Assign "X" and "O" to two players.
Display Board: Show the current state of the board
Player Input: Prompt the current player to enter their move.
Update Board: Update the game Board with the Player's Move.
Check for Win: Check if the Current player has won.
Check for Draw: Determine if the game is a draw.
Switch players: Alternate turns between "X" and "O" players.
Display Results: Show the Results of the Game(win, draw or ongoing).
Play Again: Ask if the players want to play another game.

Outcomes:
I have created a Tic-Tac-Toe CUI game which has two modes to play:

Player vs. Computer: Challenge the computer, which makes strategic moves.
Player vs. Player: Play with a friend, taking turns to mark the board.
The game features:

Simple User Interface: A clear and intuitive display that updates after every move.
Easy-to-Understand Layout: The game board is represented clearly, with cells numbered 1-9 for easy reference.
Real-Time Game Status: The game provides immediate feedback on the current state, including whose turn it is.
Win/Draw Detection: The game automatically checks for win conditions (three in a row horizontally, vertically, or diagonally) and draw conditions (all cells filled with no winner) and displays the result accordingly.
Replayability: After a game ends, players have the option to start a new game without restarting the application.


Task->4 (To-Do-List)
Build a simple console-based to-do list manager that allows users to add,view,and delete tasks.

Task Input: Allow Users to input tasks they want to add to the list
Add Task: Implement a function to add tasks to the List.
View Tasks: Display The List of Tasks with Their status(completed or pending).
Mark Task as Completed: Allow users to mark tasks as completed.
Remove Task: Provide an option to remove tasks from the list.

Outcomes:

I have created a simple console-based To-Do List Manager with a CUI (Console User Interface). It offers five options for users to select from:

1.Add Task
2.View Tasks
3.Mark Task as Completed
4.Delete Task
5.Exit

Users can add tasks, view tasks, mark tasks as completed, and delete tasks. Error handling for invalid entries is also implemented. Additionally, if all tasks are completed and the user wants to exit the program, there is an exit option available.




# Memory Game
Memory Card Matching Game

Overview

The Memory Card Matching Game is a simple terminal-based game implemented using programming logic and arrays. The game consists of a 4 × 4 grid of hidden cards. The objective is to reveal pairs of matching cards by selecting their coordinates.

Each turn, the player flips two cards.
	•	If the cards match, they remain visible.
	•	If the cards do not match, they flip back to the hidden state.

The game continues until all pairs are successfully matched, and the program keeps track of the number of moves taken by the player.  ￼

⸻

Gameplay Instructions
	1.	The game starts with a 4 × 4 grid of cards, where each card is hidden and represented by *.
	2.	During each turn:
	•	Enter the row and column of the first card to flip.
	•	Enter the row and column of the second card to flip.
	3.	If the selected cards match, they remain visible on the board.
	4.	If the selected cards do not match, they flip back to hidden.
	5.	The game continues until all pairs are matched.
	6.	The program tracks and displays the number of moves required to complete the game.  ￼

⸻

Input Format
	•	The player must enter the row and column numbers as integers.
	•	Row and column indexing starts from 1.

Example:

1 1

This represents the top-left corner of the grid.

Input Rules
	•	The player must select two different cards per turn.
	•	If the player selects the same card twice or provides invalid input, the program will display an error message and ask the player to try again.  ￼

⸻

Sample Output

First Move

Enter the coordinates of the first card (row and column): 1 1

Current Board:
2 * * *
* * * *
* * * *
* * * *


⸻

Matching Cards

Current Board:
2 * * *
* * * *
* 2 * *
* * * *

It's a match!


⸻

Non-Matching Cards

Enter the coordinates of the first card (row and column): 1 1
Enter the coordinates of the second card (row and column): 2 2

Current Board:
2 * * *
* 1 * *
* * * *
* * * *

No match, try again.


⸻

Features
	•	4 × 4 card grid
	•	Hidden card representation using *
	•	Card flipping mechanism
	•	Matching pair detection
	•	Move counter
	•	Input validation
	•	Terminal-based board display

⸻

Algorithm
	1.	Initialize a 4 × 4 board with pairs of numbers.
	2.	Shuffle the cards randomly.
	3.	Display the board with hidden cards (*).
	4.	Ask the player to enter the coordinates of two cards.
	5.	Reveal the selected cards.
	6.	Check if the two cards match:
	•	If yes → keep them visible.
	•	If no → hide them again.
	7.	Increase the move counter.
	8.	Repeat the process until all pairs are matched.

⸻

How to Run the Program

Step 1: Compile the program

gcc memory_game.c -o memory_game

Step 2: Run the program

./memory_game

Step 3: Play the game

Follow the instructions displayed in the terminal and enter the coordinates to reveal cards.

⸻

Project Structure

Memory-Card-Game
│
├── memory_game.c
├── README.md


⸻

Author

Girish Polavarapu
Computer Science Student

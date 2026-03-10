# MemoryGame

Memory Card Matching Game

Overview

This project implements a Memory Card Matching Game using a 4 × 4 grid of hidden cards. The objective of the game is to flip two cards at a time and find matching pairs. If the selected cards match, they remain visible; otherwise, they flip back to hidden.

The game continues until all card pairs are successfully matched. The program also tracks the number of moves taken by the player to complete the game.

This implementation is designed to demonstrate basic game logic, input validation, and board display in a terminal-based environment.

⸻

Gameplay Instructions
	1.	The game begins with a 4 × 4 grid of cards, where each card is hidden and displayed as *.
	2.	During each turn:
	•	The player enters the row and column of the first card to flip.
	•	Then enters the row and column of the second card to flip.
	3.	If the two selected cards match, they remain visible on the board.
	4.	If the two cards do not match, they flip back to the hidden state.
	5.	The game continues until all pairs of cards are matched.
	6.	The program tracks and displays the total number of moves taken to complete the game.  ￼

⸻

Input Format
	•	The player must input row and column numbers as integers.
	•	Row and column indexing starts from 1.
	•	For example:

1 1

represents the top-left card on the board.

Input Rules
	•	The player must choose two different cards per turn.
	•	If the same card is selected twice or the input is invalid, the program will display an error message and ask the user to try again.  ￼

⸻

## Sample Output
### First Move

Enter the coordinates of the first card (row and column): 1 1

Current Board:
2 * * *
* * * *
* * * *
* * * *

---

### Matching Cards
Current Board:
2 * * *
* * * *
* 2 * *
* * * *

It's a match!

---

### Non-Matching Cards
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
	•	4 × 4 memory card grid
	•	Hidden card display using *
	•	Card flipping mechanism
	•	Match checking logic
	•	Move counter
	•	Input validation for incorrect selections
	•	Terminal-based board visualization

⸻

How to Run
	1.	Compile the program

gcc memory_game.c -o memory_game

	2.	Run the program

./memory_game

	3.	Follow the on-screen instructions to play the game.

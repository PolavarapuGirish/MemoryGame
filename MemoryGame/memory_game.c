#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4  
#define NUM_CARDS (SIZE * SIZE / 2)

void shuffleCards(int board[SIZE][SIZE], int pairs[NUM_CARDS]);
void displayBoard(int board[SIZE][SIZE], int revealed[SIZE][SIZE]);
int isValidMove(int x, int y, int revealed[SIZE][SIZE]);
int checkMatch(int x1, int y1, int x2, int y2, int board[SIZE][SIZE]);
int getInput(int *x, int *y);

int main() {
    int board[SIZE][SIZE];
    int revealed[SIZE][SIZE] = {0};  
    int pairs[NUM_CARDS];            
    int x1, y1, x2, y2;
    int moves = 0, matches = 0;

    srand(time(NULL)); 

    
    for (int i = 0; i < NUM_CARDS; i++) {
        pairs[i] = i + 1;
    }

    shuffleCards(board, pairs); 

    while (matches < NUM_CARDS) {
        displayBoard(board, revealed);  

        printf("Enter the coordinates of the first card (row and column): ");
        if (!getInput(&x1, &y1)) {
            printf("Invalid input, please enter valid integers for row and column.\n");
            continue;
        }
        x1--; y1--; 

        if (isValidMove(x1, y1, revealed)) {
            revealed[x1][y1] = 1; 
        } else {
            printf("Invalid move, try again.\n");
            continue;
        }

        displayBoard(board, revealed);  

        
        printf("Enter the coordinates of the second card (row and column): ");
        if (!getInput(&x2, &y2)) {
            printf("Invalid input, please enter valid integers for row and column.\n");
            revealed[x1][y1] = 0;  
            continue;
        }
        x2--; y2--; 

        if (isValidMove(x2, y2, revealed)) {
            revealed[x2][y2] = 1;
        } else {
            printf("Invalid move, try again.\n");
            revealed[x1][y1] = 0; 
            continue;
        }

        displayBoard(board, revealed);  

       
        if (checkMatch(x1, y1, x2, y2, board)) {
            printf("It's a match!\n");
            matches++;
        } else {
            printf("No match, try again.\n");
            revealed[x1][y1] = 0;  
            revealed[x2][y2] = 0; 
        }

        moves++;
    }

    printf("Game Over! You found all pairs in %d moves.\n", moves);
    return 0;
}


void shuffleCards(int board[SIZE][SIZE], int pairs[NUM_CARDS]) {
    int cardIndex = 0;
    int temp[NUM_CARDS * 2];

    
    for (int i = 0; i < NUM_CARDS * 2; i++) {
        temp[i] = pairs[cardIndex];
        cardIndex = (cardIndex + 1) % NUM_CARDS;
    }

    
    for (int i = 0; i < NUM_CARDS * 2; i++) {
        int j = rand() % (NUM_CARDS * 2);
        int tmp = temp[i];
        temp[i] = temp[j];
        temp[j] = tmp;
    }

    
    cardIndex = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = temp[cardIndex++];
        }
    }
}


void displayBoard(int board[SIZE][SIZE], int revealed[SIZE][SIZE]) {
    printf("\nCurrent Board:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (revealed[i][j]) {
                printf("%d ", board[i][j]);
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}


int isValidMove(int x, int y, int revealed[SIZE][SIZE]) {
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || revealed[x][y] == 1) {
        return 0;
    }
    return 1;
}


int checkMatch(int x1, int y1, int x2, int y2, int board[SIZE][SIZE]) {
    return board[x1][y1] == board[x2][y2];
}

int getInput(int *x, int *y) {
    if (scanf("%d %d", x, y) != 2) {
        while(getchar() != '\n'); 
        return 0; 
    }
    return 1; 
}
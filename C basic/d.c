#include <stdio.h>
#include <stdlib.h>

// Function to print the game board
void print_board(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if the game is over
int game_over(char board[3][3]) {
    int i, j;

    // Check for horizontal wins
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return 1;
        }
    }

    // Check for vertical wins
    for (j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
            return 1;
        }
    }

    // Check for diagonal wins
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return 1;
    }

    // Check for a tie
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0;
            }
        }
    }
    return 2;
}

int main() 
{
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int player = 1, choice, i, j;

    do {
        print_board(board);
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter your choice: ", player);
        scanf("%d", &choice);

        i = (choice - 1) / 3;
        j = (choice - 1) % 3;

        if (board[i][j] == 'X' || board[i][j] == 'O') 
        {
            printf("Invalid move. Please try again.\n");
            player--;
        } 
        else 
        {
            board[i][j] = (player == 1) ? 'X' : 'O';
        }
    } while (game_over(board) == 

}
#include <iostream>
using namespace std;

int main() {
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char player = 'X';
    int move;
    bool gameOver = false;

    while(!gameOver) {
        // Display board
        cout << "\n";
        for(int i = 0; i < 3; i++) {
            cout << " " << board[i][0] << " | "
                 << board[i][1] << " | "
                 << board[i][2] << endl;
            if(i < 2)
                cout << "---|---|---\n";
        }

        cout << "\nPlayer " << player << ", enter position (1-9): ";
        cin >> move;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if(board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
        } else {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        // Check rows and columns
        for(int i = 0; i < 3; i++) {
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
                gameOver = true;
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
                gameOver = true;
        }

        // Check diagonals
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
            gameOver = true;
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
            gameOver = true;

        // Check draw
        bool draw = true;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] != 'X' && board[i][j] != 'O')
                    draw = false;
            }
        }

        if(gameOver) {
            cout << "\nPlayer " << player << " wins!\n";
            break;
        }

        if(draw) {
            cout << "\nIt's a draw!\n";
            break;
        }

        // Switch player
        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    cout << "\nGame Over.\n";
    return 0;
}
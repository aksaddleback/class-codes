#include<iostream>
using namespace std; 

void printBoard(char b[3][3]) { 
    for(int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << b[i][j];
        }
        cout << endl; 
    }
}

void playerPlay(char board[3][3], char piece) { // X
    int row, col;
    cout << "Player " << piece << " playes!!!!!" << endl; 
    while(true) { 
        cout << "Enter row for the next piece (0,1 or 2):";
        cin >> row; 
        cout << "Enter col for the next piece (0,1 or 2):";
        cin >> col; 
        if (board[row][col] == '#') { 
            break; 
        } else { 
            cout << "Try again!" << endl; 
        }
    }
    board[row][col] = piece; 
    printBoard(board);
}

bool checkWin(char b[3][3], char piece) { 
    bool won = false; 
    for (int r = 0; r < 3; r++) { 
        won = (b[r][0] == b[r][1] and b[r][0] == b[r][2] and b[r][0] == piece);
        if (won) { 
            break;
        }
    }
    if (!won) { 
        for (int c = 0; c < 3; c++) { 
            won = (b[0][c] == b[1][c] and b[0][c] == b[2][c] and b[0][c] == piece);
            if (won) { 
                break;
            }
        }
    }
    if (!won) { 
        won = (b[0][0] == b[1][1] and b[0][0] == b[2][2] and b[0][0] == piece);
    }
    if (!won) { 
        won = (b[0][2] == b[1][1] and b[0][2] == b[2][0] and b[0][2] == piece);
    }
    
    if (won) { 
        cout << piece << " won!" << endl; 
        return true; 
    }
    return false; 
}

int main() { 
    char board[3][3] { 
        {'#', '#', '#'},
        {'#', '#', '#'},
        {'#', '#', '#'},
    };
    printBoard(board); 
    while(true) { // forever, but we are going to break in the loop 
        playerPlay(board, 'X');
        if (checkWin(board, 'X')) { 
            break; 
        }
        playerPlay(board, 'O');
        if (checkWin(board, 'O')) { 
            break; 
        }
    }
}
/*Chessboard Pattern: Create a program to print a chessboard pattern of 'n' rows and 'm' columns, with alternating 'X' and 'O' characters. The user inputs 'n' and 'm'.*/
#include<iostream> 
using namespace std; 
int main() { 
    int i, j; 
    char ch;
    
    i = 0; 
    
    while(i < 16) {
        if (i % 2 == 0) { 
            ch = 'O';
        } else { 
            ch = 'X';
        }
        j = 0;     
        while (j < 16) { 
            if (ch == 'O') { 
                ch = 'X';
            } else { 
                ch = 'O';
            }
            cout << ch; 
            j++; 
        }
        cout << endl; 
        i++; 
    }
}
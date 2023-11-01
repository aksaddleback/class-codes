// Create a C++ program that uses a `for` loop to simulate a guessing game.
// Generate a random number between 1 and 100, and have the user guess the number.
// Provide hints if the guess is too high or too low until they guess correctly.
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int x = rand() % 100 + 1; // rand() generates a number between 0 and a lot. %100, makes it between 0 and 99. +1 makes it between 1 and 100
    cout << x << endl; 
    int y;
    for (int i = 0; i < 5 && x != y; i++) {
        cin >> y;
        if (x < y) {
            cout << "too high!" << endl;
        }
        else if (x > y) {
            cout << "too low!" << endl;
        } 
        // alternative solution to using && x != y in the for loop 
        // else { // implicitly means if x == y
        //     break;
        // } 
    }
    if (x == y) {
        cout << "you guessed it!!! good job!!!" << endl;
    } else { 
        cout << "you didn't guess it!!! not a good job!!!" << endl;
    }
}

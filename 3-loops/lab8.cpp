// Create a C++ program that uses a `while` loop to repeatedly 
// ask the user for a positive integer until they enter a negative
// number. Keep track of how many positive integers were 
// entered and display that count at the end.

#include<iostream>
using namespace std; 

int main() { 
    int c = 0; // counter (how many positive number entered so far)
    int x = 1; // will keep the user entered number
    // while (x > 0) { 
    //     cout << "Enter a number: " << "\n";
    //     cin >> x; 
    //     if (x > 0) { 
    //         c++; 
    //     }
    // }
    // alternaive logic
    while (x > 0) { 
        cout << "Enter a number: " << "\n";
        cin >> x; 
        c++;
    }
    c--;
    cout << "You entered " << c << " positive numbers." << "\n";
}

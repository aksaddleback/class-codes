#include<iostream>
using namespace std; 
//Write a C++ program that uses a `while` loop to 
//print all the multiples of 7 between 50 and 200.

int  main() { 
    int x = 56; 
    while (x <= 200) { 
        cout << x << "\n";
        x += 7; // x = x + 7;
    }

    /*
    int x = 50; 
    while (x <= 200) { 
        if (x % 7 == 0) { 
            cout << x << "\n";
        }
        x++;
    }
    */
}
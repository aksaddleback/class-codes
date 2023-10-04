// Create a C++ program that uses a `while` loop to 
// display the squares of numbers from 1 to 10.

#include<iostream>
using namespace std; 

int main() { 
    int i = 1; 
    while (i <= 10) { 
        cout << i * i << "\n";
        i = i + 1;  // i++; i += 1; ++i;
    }
}
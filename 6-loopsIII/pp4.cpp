// Write a C++ program that calculates the factorial of a number 
// entered by the user. Use a loop for this purpose.

#include<iostream>
using namespace std; 
int main() { 
    int fact = 1; 
    int x; 
    cin >> x; 
    while (x >1) { 
        fact *= x; 
        x--; 
    }
    cout << fact << endl; 
}
    

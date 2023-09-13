// Write a program that checks if a number is even or odd.

#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter a number: "; 
    int x; 
    cin >> x;
    /*
        x = 12; means assign value 12 to memory location x.
        x == 12 means compare x and 12 and see if they are equal or not 
    */ 
    if (x % 2 == 0) { 
        cout << x << " is even!\n";
    } else {
        cout << x << " is odd!\n";
    }

    /* 
    Different way of writing the same logic:
    if (x % 2 == 0) { 
        cout << x << " is even!\n";
    } 
    if (x % 2 == 1) {
        cout << x << " is odd!\n";
    }    
    */
}












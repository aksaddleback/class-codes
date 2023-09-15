//Create a program that checks if a number is positive, negative, or zero.
#include<iostream> 
using namespace std; 

int main() { 
    cout << "Enter a number: ";
    int x; 
    cin >> x; 
    if (x == 0) { 
        cout << "Your number is 0\n";
    }
    if (x > 0) { 
        cout << "Your number is positive.\n";
    }
    if (x < 0) {
        cout << "Your number is negative.\n";
    }
    /*
    if (x == 0) { 
        cout << "Your number is 0\n";
    } else if (x > 0) { 
        cout << "Your number is positive.\n";
    } else if (x < 0) {
        cout << "Your number is negative.\n";
    }
    */
}
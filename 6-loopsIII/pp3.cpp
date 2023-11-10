//Let's consider that January 1st is a Monday. Write a C++ program that receives 
// a day number in January (ranging from 1 to 31) from the user and prints the 
// corresponding day of the week (Mon, Tue, etc) using a switch statement.
#include<iostream>
using namespace std; 
int main() { 
    int d; 
    cin >> d; 
    d = d % 7; 
    switch (d) { 
        case 0: cout << "Sunday\n"; break; 
        case 1: cout << "Monday\n"; break; 
        case 2: cout << "Tuesday\n"; break; 
        case 3: cout << "Wednesday\n"; break; 
        case 4: cout << "Thursday\n"; break; 
        case 5: cout << "Firday\n"; break; 
        case 6: cout << "Satruday\n"; break; 
    }
}
// Write a program that prints the number of days in a given month.

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a month number:";
    int choice; 
    cin >> choice;
    switch (choice) {
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days!\n";
        break;
    case 2: 
        cout << "28 days!\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11: 
        cout << "30 days!\n";
        break;
    default: cout << "Out of range!\n";
    } 
}
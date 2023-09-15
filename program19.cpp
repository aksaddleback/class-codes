/* Create a program that converts a numeric grade to a letter grade 
(A, B, C, D, or F). Letter grade can be based on the ranges we use 
in this class. Grading: A:90+, B:80-90, C:70-80, D:60-70, F:60- */

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter your grade in points:";
    int grade; 
    cin >> grade;
    switch (grade / 10) {
    case 0: 
    case 1: 
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "F\n";
        break;
    case 6: 
        cout << "D\n";
        break;
    case 7:
        cout << "C\n";
        break;
    case 8:
        cout << "B\n";
        break;
    case 9:
    case 10: 
        cout << "A\n";
        break;
    default: cout << "Out of range!\n";
    } 
}
//Develop a C++ program that uses a `while` loop to repeatedly 
//ask the user for a number and adds it to a running total. 
//The loop should continue until the user enters 0. 
//After exiting the loop, display the total.
#include<iostream>
using namespace std; 

int main() { 
    // Alternative solution using do/while 
    int totalSum = 0; 
    int x; 
    do { 
        cout << "Enter a number: ";
        cin >> x; 
        totalSum += x; // totalSum = totalSum + x; 
    } while(x != 0);

    cout << "Sum of all numbers is: " << totalSum << "\n";

    /*
    int totalSum = 0; 
    int x = 1; // user entered number(s)
    while (x != 0) { 
        cout << "Enter a number: ";
        cin >> x; 
        totalSum += x; // totalSum = totalSum + x; 
    }
    cout << "Sum of all numbers is: " << totalSum << "\n";
    */
}
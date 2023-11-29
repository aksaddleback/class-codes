/*
Write a C++ program that defines a function called printNumbers which takes an integer parameter 
n and prints all the numbers from 1 to n. In the main() function, ask the user for a number and 
call the printNumbers function to display the sequence.
*/
#include<iostream> 
using namespace std; 

void printNumbers(int n) { 
    for(int i = 1; i <= n; i++) { 
        cout << i << endl; 
    }
}

int main() { 
    int x; 
    cout << "enter a number:"; 
    cin >> x; 
    printNumbers(x);
}
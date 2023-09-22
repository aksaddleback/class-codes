#include<iostream>
using namespace std; 
int main() { 
    //Write a C++ program that calculates the sum of all even numbers from 1 to 50 
    //using a `while` loop.
    int sum = 0; 
    int i = 2; 
    while (i <= 50) { 
        sum = sum + i; 
        i = i + 2; 
    }
    cout << sum << "\n";
}
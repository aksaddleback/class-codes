#include<iostream>
using namespace std; 
int main() { 
    //Write a C++ program that calculates the sum of all 
    //even numbers from 1 to 50 using a `while` loop.
    /*
    int c = 2; 
    int total = 0; 
    while (c <= 50) { 
        total += c; 
        c += 2; 
    }
    */ 
    int c = 1; 
    int total = 0; 
    while (c <= 50) { 
        if (c % 2 == 0) {
            total = total + c; // total += c; 
        }
        c++; 
    }
    cout << total << "\n";
}
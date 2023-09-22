//Write a C++ program that uses a `while` loop to find the sum of all numbers 
//from 1 to 100 that are divisible by both 3 and 5.
#include<iostream>
using namespace std; 
int main() { 
    int sum = 0; 
    int i = 1; 
    while (i <= 100) { 
        if (i % 3 == 0 and i % 5 == 0) {
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << sum << "\n";
}
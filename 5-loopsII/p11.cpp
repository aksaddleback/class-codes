// Write a program that calculates and prints the sum of odd numbers from 1 to 1000 using a `for` loop.
#include<iostream>
using namespace std; 
int main() { 
    int sum = 0; 
    for (int i = 1; i < 1000; i+=2) {
        sum += i; 
    }
    cout << sum << endl; 
}
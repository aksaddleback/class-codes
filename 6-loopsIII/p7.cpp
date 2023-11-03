// Write a program that calculates and prints the sum of all prime numbers between 
// 1 and 100 using a nested `for` loop.'
#include<iostream>
#include<cmath>
using namespace std; 
int main() { 
    bool prime = true; 
    int sum = 2; 
    for (int numToCheck = 3; numToCheck<=100; numToCheck++) {
        prime = true; 
        for (int j = 2; j <=numToCheck-1; j++) { 
            if (numToCheck%j == 0) { 
                prime = false; 
                break; 
            }
        }
        if (prime) {
            sum += numToCheck; 
        }
    }
    cout << sum << endl; 
}

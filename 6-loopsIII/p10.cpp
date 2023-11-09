/// abcddcba
//     ij


// Write a C++ program that receives an integer from the user and calculates 
// the sum of its digits.

#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    cin >> x; 
    int d, sum = 0; 
    while (x != 0) { 
        d = x % 10; // assigns the right most digit of x to d
        x = x / 10; // removes the right most digit from x
        sum += d; 
    }
    cout << sum << endl; 
}

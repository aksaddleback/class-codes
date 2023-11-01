// Develop a program that calculates and prints the factorial of a number 
// using a `for` loop.

#include<iostream> 
using namespace std; 
int main() { 
    long int x; 
    cin >> x; 
    int fact = 1; 
    for (int i = 1; i <= x; i++) { 
        fact *= i; 
    }
    cout << fact << endl; 
    // if you test this program for input 20, you probably will get a negative result
    // it is becuase the result number cannot fit in number of bits that an integer 
    // variable has. so it overflows. As we know with two bits we can have numbers from 0 to 3
    // if we try to save 5 in 2 bits, it will overflow!

}

// Create a program that checks if a number is a prime number. 
// Use `for` loop to solve the problem. 
#include<iostream>
using namespace std; 

int main() { 
    int x; 
    cin >> x;
    bool prime = true;  
    for(int i = 2; i < x; i++) {  
        // if you want to improve the performance of this program, the loop can go
        // up to sqrt of x instead of x-1
        if (x % i == 0) { 
            prime = false; 
            break; 
        }
    }
    if (prime) {  // means if prime == true
        cout << "The number is prime!\n";
    } else { 
        cout << "The number is not prime!\n";
    }
}

// Develop a C++ program that asks the user for an integer (and saves it 
// in an integer variable) and then uses a `for` loop to check if it's a 
// palindrome (reads the same forwards and backwards).

#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    cin >> x; 
    int orig = x; 
    int z = 0, y; 
    while (x != 0) {
        y = x % 10; 
        x = x / 10; 
        z = z * 10 + y; 
    }
    cout << z << endl; 
    if (z == orig) { 
        cout << "palindrome" << endl; 
    } else { 
        cout << "not palindrome" << endl; 
    }
}
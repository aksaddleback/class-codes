// Stars Square: Create a program that asks the user for a positive integer 'n' and 
// then uses nested `for` loops to print an 'n' by 'n' square pattern of asterisks.
// n = 3
// ***
// ***
// ***
#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    int c; 
    cin >> x; 
    int rows = 0; 
    while (rows < x) {
        c = 0; 
        while (c < x) { 
            cout << '*';
            c++; 
        }
        cout << endl; 
        rows++;
    }

}

// Create a C++ program that asks the user for an integer and then uses a 
// `for` loop to print the Fibonacci sequence up to the entered number. 
// The Fibonacci sequence starts with 0 and 1, and each subsequent number 
// is the sum of the two preceding ones.
#include<iostream> 
using namespace std; 
int main() { 
    int x1 = 0; 
    int x2 = 1; 
    int limit; 
    cout << "enter the limit:"; 
    cin >> limit; 
    int nextFib = 1; 
    cout << "1, "; 
    for (int i = 0; nextFib < limit ; i++) { 
        cout << nextFib << ", ";
        x1 = x2; 
        x2 = nextFib; 
        nextFib = x1 + x2; 
    }
    cout << endl; 
}

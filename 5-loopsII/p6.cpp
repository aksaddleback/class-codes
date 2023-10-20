/*Pattern with Numbers: Write a C++ program that receives an integer 'n' from the user and prints a pattern as shown below for 'n = 5':
1
22
333
4444
55555*/
#include<iostream> 
using namespace std; 
int main() { 
    int lineNumber = 1; 
    int j = 1; 
    while (lineNumber <= 20) { 
        j = 1; 
        while (j <= lineNumber) {
            cout << lineNumber;
            j++; 
        }
        cout << endl; 
        lineNumber++;
    }
}
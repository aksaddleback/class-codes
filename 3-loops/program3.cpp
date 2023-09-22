// Write a program that calculates the factorial of a number using a while loop.
// 5! = 1 * 2 * 3 * 4 * 5 = 120
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter a number:"; 
    int num; 
    cin >> num; 
    int res = 1;
    int i = 1; 
    while(i <= num) { 
        res = res * i; 
        i++;
    }
    cout << res << "\n";
}

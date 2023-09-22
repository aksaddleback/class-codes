/*
Develop a program that takes a character 
as input and prints its ASCII value.
*/
#include<iostream> 
using namespace std; 
int main() { 
    char c; 
    cout << "Enter a character:";
    cin >> c;
    int x;
    x = c; 
    cout << "Int value for char " 
         << c << " is:" << x << "\n";
}
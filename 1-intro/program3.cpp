//Write a program that reads a double and prints its square.
#include<iostream> 
using namespace std; 

int main() { 
    double x; 
    cout << "Enter a double number:";
    cin >> x; 
    double y = x * x; 
    cout << "Square of number is: " << y << "\n";
}
/* 
Write a program that converts temperature 
from Fahrenheit to Celsius.
*/

#include<iostream> 
using namespace std; 
int main() { 
    cout << "Enter the temp in fahrenheit: "; 
    int f; 
    cin >> f; 
    double c = (f - 32) * 5.0/9; 
    cout << c << "\n";
}
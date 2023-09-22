// Create a program that takes two numbers and swaps their values 
#include<iostream> 
using namespace std; 
int main() { 
    cout << "Enter val for x: ";
    int x; 
    cin >> x; 
    cout << "Enter val for y: "; 
    int y; 
    cin >> y; 
    int z; 
    z = y; 
    y = x;
    x = z;  
    cout << "x is: " << x << " and y is: " << y <<"\n";
}
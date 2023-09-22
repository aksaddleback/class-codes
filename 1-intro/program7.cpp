/* 
Create a program that computes the 
volume of a sphere using its radius. V = 4/3 π r³
*/
#include<iostream>
using namespace std; 
int main() { 
    cout << "Radius? "; 
    int r; 
    cin >> r; 
    cout << "Vol is: " << (4.0/3) * 3.14 * r * r * r << "\n";
}
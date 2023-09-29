//Develop a C++ program that uses a `while` loop 
//to calculate and print the sum of the squares 
//of the first 15 positive integers (1^2 + 2^2 + 
//3^2 + ... + 15^2).
#include<iostream>
using namespace std; 
int main() { 
    int counter = 1; 
    int total = 0; 
    while (counter <= 15) { 
        //int square = counter * counter; 
        total = total + counter * counter; 
        counter++;
    }
    cout << total << "\n";

}

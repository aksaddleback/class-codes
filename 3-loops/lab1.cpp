#include<iostream>
using namespace std; 
int main() { 
    //Write a program that uses a while to print numbers from 10 to 1. 
    int c = 10;
    while (c >= 1) { 
        cout << c << "\n";
        c = c - 1;  //c -= 1; c--;
    }
}
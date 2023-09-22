//Write a program that uses a while loop to print numbers from 1 to 10000.

#include<iostream>
using namespace std; 

int main() { 
    int i = 1; 
    while (i <= 10) { 
        cout << i << "\n";
        i = i + 1;
    }
    // infinit loop if we forget to increment then counter variable
    // off by 1
    // order of commands matters
}
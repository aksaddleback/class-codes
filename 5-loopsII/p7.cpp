/*Half Pyramid of Numbers: Write a C++ program that prints a half pyramid pattern using numbers as shown below for a number received from the user:
1
12
123
1234
12345*/
#include<iostream>
using namespace std; 
int main() { 
    int n = 5;
    int i, j; 

    j = 1; 
    while (j <= 5) {
        i = 1; 
        while (i <= j) { 
            cout << i << " "; 
            i++;
        }
        cout << endl; 
        j++;
    }
}

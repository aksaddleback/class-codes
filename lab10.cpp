// Write a C++ program that receives 5 or 5000 positive numbers from 
// the user and prints "Ascending" if numbers that are entered 
//are in the ascending order. Use a while loop to solve this 
// problem. Example of an ascending list: 1, 9, 25, 45, 129
#include<iostream>
using namespace std; 
int main() { 
    int x1 = -1;
    int x2 = 0; 
    bool ascending = true;
    int counter = 1; 
    while (counter <= 5) {  // counter <=5000
        x1 = x2; 
        cout << "enter next number: "; 
        cin >> x2; 
        if (x1 > x2) { 
            ascending = false;
        }
        counter++; 
    }
    cout << "ascending is " << ascending << "\n";
}

// Write a C++ program that receives 5 positive numbers from the user
// and prints the highest value of them on the screen. 
// Use a while loop to solve this problem. 
#include<iostream>
using namespace std; 
int main() { 
    int counter = 1; 
    int curNum; 
    int max = -1; 
    while (counter <= 5) { 
        cout << "Enter a number: "; 
        cin >> curNum; 
        if (curNum > max) { 
            max = curNum;
        }
        counter++;
    }
    cout << "Max is: " << max << "\n";
}
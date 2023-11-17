// Write a program to read height of 5 students and store them
// in a vector and then print all the hights.
#include<iostream> 
#include<vector> 
using namespace std; 
int main() { 
    vector<int> heights(5); 
    for (int i = 0; i < 5; i++) { 
        cin >> heights[i]; 
    }

    for (int i = 0; i < 5; i++) { 
        cout << heights[i] << ", ";
    }
    cout << endl; 
}
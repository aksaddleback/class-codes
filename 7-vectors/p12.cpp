/* Write a program that reads 8 integers into a vector and counts the occurrences 
of a particular number specified by the user. Output the count.*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v;
    int x; 
    for(int i = 0; i < 8; i++) { 
        cin >> x;
        v.push_back(x);
    }
    int numToFind, counter = 0; 
    cout << "enter a number:" << endl; 
    cin >> numToFind; 
    for (int y : v) { 
        if (y == numToFind) { 
            counter++; 
        }
    }
    cout << counter << endl; 
}
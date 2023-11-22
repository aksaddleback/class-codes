/* Write a program to input 10 integers into a vector and then prompt the user 
to enter a number to search for in the vector. Output whether the number was found or not.
*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v;
    int x; 
    for(int i = 0; i < 10; i++) { 
        cin >> x;
        v.push_back(x);
    }
    int numToFind; 
    cout << "enter a number to find: ";
    cin >> numToFind; 
    bool found = false; 
    for(int x : v) { 
        if (x == numToFind) { 
            found = true; 
            break; 
        }
    }
    cout << (found ? "found!" : "not found!") << endl; 
}

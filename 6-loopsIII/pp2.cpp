// Write a C++ program that receives 10 numbers from the user and 
// prints the sum of the two smallest numbers in the list.
#include<iostream>
using namespace std; 

int main() { 
    int s1, s2; 
    int nextNum; 
    cin >> s1; 
    cin >> s2; 
    if (s2 < s1) { 
        int temp = s1; 
        s1 = s2; 
        s2 = temp;
    }
    int i = 0; 
    while (i < 3) { 
        cin >> nextNum; 
        if (nextNum < s1) {
            s2 = s1; 
            s1 = nextNum; 
        } else if (nextNum < s2) { 
            s2 = nextNum; 
        }
        i++;
    }

    cout << s1 + s2 << endl; 
}
//Replace Character: Create a program that receives a text string 
//from the user and replaces all occurrences of a specified 
//character with another character of the user's choice. 
//Print the modified string.
#include<iostream>
using namespace std; 

int main() { 
    string s; 
    char toBeReplaced, substitue; 
    getline(cin, s);
    cin >> toBeReplaced >> substitue; 
    int i = 0; 
    while (i < s.length()) { 
        if (s[i] == toBeReplaced) { 
            s[i] = substitue; 
        }
        i++; 
    }
    cout << s << endl; 
}


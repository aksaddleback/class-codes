// Write a program that takes a string as input and uses a `for` 
// loop to remove all spaces from the string. Display the modified string.
#include<iostream> 
using namespace std; 
int main() { 
    cout << "enter a string: ";
    string s; 
    getline(cin, s);
    string output = "";
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] != ' ') { 
            output += s[i];
        }
    }
    cout << output << endl; 
}

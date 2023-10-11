// Reverse String: Write a program that reverses a given text string. 
// For example, if the input is "hello," the program should output "olleh."

#include<iostream>
using namespace std; 

int main() { 
    cout << "enter a text:";
    string s; 
    getline(cin, s);
    //cin >> s; 
    string r = "";
    int i = 0;
    while (i < s.length()) { 
        r = s[i] + r; 
        i++; 
    }
    cout << r << endl; 
}
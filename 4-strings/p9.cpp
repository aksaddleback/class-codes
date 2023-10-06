// Count Occurrences: Write a program that takes a text string 
// and counts number of occurrences of character 'a' 
// within the string.

#include<iostream>
using namespace std; 

int main() { 
    string s; 
    cout << "Enter a string: "; 
    getline(cin, s);
    char c = 'l';
    int i = 0; 
    int occurrences = 0; 
    while (i < s.length()) { 
        if (s[i] == c) { 
            occurrences++;
        }
        i++;
    }
    cout << occurrences << endl;

}
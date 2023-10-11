// Palindrome Check: Develop a program that checks if a given 
// text string is a palindrome. A palindrome is a word, phrase, 
// or sequence that reads the same backward as forward. 
#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s);
    int i = 0; 
    int j = s.length() - 1; 
    bool isPal = true; 
    while (i < j) { 
        if (s[i] != s[j]) { 
            isPal = false;
        }
        i++; 
        j--; 
    }
    if (isPal) {  // you also can write isPal == true
        cout << "palindrom" << endl; 
    } else  { 
        cout << "not palindrom" << endl; 
    }
}
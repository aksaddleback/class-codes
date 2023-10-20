// Longest Word: Write a program that receive a sentence and 
// prints out length of the longest word in the string. The 
// text has no punctuation and only words each separated by 
// one space.
// Can you change the program to print out the longest word 
// itself too? 
#include<iostream>
using namespace std; 

int main() { 
    string s, w; 
    int maxLen = 0; 
    string maxLenWord = "";
    int i = 0;
    getline(cin, s); // Can you change the program to print
    while (i < s.length()) { 
        if (s[i] == ' ') { 
            if (w.length() > maxLen) { 
                maxLen = w.length();
                maxLenWord = w; 
            } 
            w = "";
        } else { 
            w += s[i];
        }
        i++;
    }
    if (w.length() > maxLen) { 
        maxLen = w.length();
        maxLenWord = w; 
    }
    cout << maxLenWord << ": " << maxLen << endl; 
}
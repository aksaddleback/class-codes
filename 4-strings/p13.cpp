// Word Count: Create a program that receives a sentence from 
// the user and counts the number of words in the sentence. A 
// word is defined as a sequence of characters separated by spaces.
// Assume no two spaces are next to each other and there is not 
// space at the beginning or end of the text. 
#include<iostream>
using namespace std; 

int main() { 
    string s; 
    getline(cin, s); 
    int i = 0; 
    int wordCount = 0; 
    while (i < s.length()) { 
        if (s[i] == ' ') { 
            wordCount++; 
        }
        i++; 
    }
    cout << wordCount + 1 << endl; 
}


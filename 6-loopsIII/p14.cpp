// Write a program that receives a string from the user and removes 
// any duplicate characters, leaving only the first occurrence of each 
// character. The input string doesn't have any space or special character 
// and only includes lower case alphabet characters.
#include<iostream> 
using namespace std; 
int main() { 
    string s1; 
    cin >> s1; 
    string s2 = "";
    for(int i = 0; i < s1.length(); i++) { 
        bool qualifiedLetter = true; 
        for(int j = 0; j < s2.length(); j++) { 
            if (s1[i] == s2[j]) { 
                qualifiedLetter = false; 
                break; 
            }
        }
        if (qualifiedLetter) { // if (qualifiedLetter == true)
            s2 += s1[i]; 
        }
    }
    cout << s2 << endl; 
}
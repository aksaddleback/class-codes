// Create a C++ program that receives a sentence from the user and encrypts 
// it using a simple substitution cipher. In this cipher, each character's 
// position is swapped with the position of the next character in the string. 
// If the string has an odd number of characters, the last character remains 
// in its original position.
#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    string s2 = "";
    for(int i = 0; i < s.length(); i+=2) { 
        if (i == s.length() - 1) { 
            s2 += s[i];
        } else { 
            s2 += s[i+1];
            s2 += s[i];
        }
    }
    cout << s2 << endl; 
    
    // alternative solution 
    // for(int i = 0; i < s.length(); i+=2) { 
    //     if (i == s.length() - 1) { 
    //         break;
    //     }
    //     char temp = s[i];
    //     s[i] = s[i+1];
    //     s[i+1] = temp;
    // }
    // cout << s << endl; 
}


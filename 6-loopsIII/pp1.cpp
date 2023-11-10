// Write a C++ program that receives a text containing two 
// words separated by a single space character from the user and
// prints them in the order of their length.
#include<iostream>
using namespace std; 
int main() { 
    string s; 
    getline(cin, s); 
    string w1 = "", w2 = "";
    int i = 0; 
    bool spaceSeen = false; 
    while(i < s.length()) { 
        if (s[i] == ' ') { 
            spaceSeen = true; 
            i++; 
        }
        if (spaceSeen) { 
            w2 += s[i];
        } else { 
            w1 += s[i];
        }
        i++; 
    }

    if (w1.length() > w2.length()) { 
        cout << w2 << ", " << w1 << endl; 
    } else { 
        cout << w1 << ", " << w2 << endl; 
    }
}

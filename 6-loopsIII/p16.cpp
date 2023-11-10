// Write a C++ program that receives a string of digits as input. The program should 
// keep each digit only if it is smaller than all the subsequent digits in the string. 
// All other digits should be removed. The order of the remaining digits should be 
// preserved. Example: Input: "547839216" Output: "16", Input: "152439", Output: "1239"


#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    cin >> s; 
    string s2 = "";
    for (int i = 0; i < s.length(); i++) { 
        bool qualifiedDigit = true; 
        for(int j = i + 1; j < s.length(); j++) { 
            if (s[j] < s[i]) { 
                qualifiedDigit = false; 
            }
        }
        if (qualifiedDigit) {  // if (qualifiedDigit == true)
            s2 += s[i];
        }
    }
    cout << s2 << endl; 
}
// Create a program that takes a string and checks if it is a valid phone number. 
// Use `for` loop and check if the phone number follows +1(123)456-7890 format.
//                                                      012345678901234

#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    bool wrongFormat = false; 
    Loop:
    for(int i = 0; i < s.length(); i++) { 
        switch (i) { 
            case 0: if (s[i] != '+') { 
                wrongFormat = true; 
            }; break; 
            case 1: if (s[i] != '1') { 
                wrongFormat = true; 
            } break;
            case 2: if (s[i] != '(') { 
                wrongFormat = true; 
            } break;
            case 6: if (s[i] != ')') { 
                wrongFormat = true; 
            } break;
            case 10: if (s[i] != '-') { 
                wrongFormat = true; 
            } break;
            default: if (s[i] > 57 or s[i] < 48) { 
                wrongFormat = true; 
            }
        }
    }
    if (wrongFormat || s.length() <> 15) { 
        cout << "wrong format!" << endl; 
    } else { 
        cout << "right format!" << endl; 
    }
}
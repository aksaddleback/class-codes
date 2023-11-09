#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    int i = 0, j = s.length() - 1; 
    bool isPal = true; 
    while (i < j) { 
        if (s[i] != s[j]) { 
            isPal = false; 
            break; 
        }
        i++; j--; 
    }
    if (isPal) { 
        cout << "is palindrome!" << endl; 
    } else { 
        cout << "is not palindrome!" << endl; 
    }
}
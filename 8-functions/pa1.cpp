/*
Write a C++ program that defines a function called isPalindrome which takes a string parameter 
and returns true if the string is a palindrome (reads the same forwards and backwards), and false
 otherwise. In the main() function, ask the user for a string and display whether it is a palindrome 
 or not using the isPalindrome function.
*/
#include<iostream> 
using namespace std; 

bool isPalindrome(string s) { 
    for(int i = 0; i < s.length() / 2; i++) { 
        if (s[i] != s[s.length() - 1 - i]) { 
            return false; 
        }
    }
    return true; 
}

int main() { 
    string s; 
    cin >> s; 
    if (isPalindrome(s)) { 
        cout << s << " is palindrome!" << endl; 
    } else { 
        cout << s << " is not palindrome!" << endl; 
    }
} 
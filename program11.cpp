//Develop a program that checks if a user-entered 
//lower case character is a vowel or consonant.
#include<iostream> 
using namespace std; 

int main() { 
    char c; 
    cout << "Enter a character: "; 
    cin >> c; 
    if (c == 'a' || c == 'e' || 
        c == 'i' || c == 'o' || c == 'u') { 
        cout << c << " is vowel!\n";
    } else { 
        cout << c << " is not vowel!\n";
    }
    /*
    The following is not a correct logic for this problem:
    if (c == 'a') {
        cout << c << " is vowel!\n";
    }
    if (c == 'e') {
        cout << c << " is vowel!\n";
    }
    if (c == 'i') {
        cout << c << " is vowel!\n";
    }
    if (c == 'o') {
        cout << c << " is vowel!\n";
    }
    if (c == 'u') {
        cout << c << " is vowel!\n";
    } else { 
        cout << c << " is not vowel!\n";
    }

    How about this logic?
    if (c == 'a') {
        cout << c << " is vowel!\n";
    } else if (c == 'e') {
        cout << c << " is vowel!\n";
    } else if (c == 'i') {
        cout << c << " is vowel!\n";
    } else if (c == 'o') {
        cout << c << " is vowel!\n";
    } else if (c == 'u') {
        cout << c << " is vowel!\n";
    } else { 
        cout << c << " is not vowel!\n";
    }
    */
}

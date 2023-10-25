// Write a program that asks the user to enter a sentence and then uses a for loop 
// to capitalize the first letter of each word in the sentence. Assume there is no
// punctuation and only space char is used to separate words. Display the modified sentence.
#include<iostream>
using namespace std; 
int main() { 
    // cout << (int) 'a' << " " << (int) 'A' << " " << (int) 'z' << " " << (int) 'Z' << endl; 
    // 97 65 122 90
    // cout << (char) ('a' - 32) << endl; 
    // cout << (char) 90 << endl; 
    string inputStr; 
    getline(cin, inputStr); 
    for (int i = 0; i < inputStr.length(); i++) { 
        if (inputStr[i] >= 97 and inputStr[i] <= 122        // if char is lower case
                and (i == 0 or inputStr[i-1] == ' ')) {     // if it is first char of a word
            inputStr[i] -= 32; 
        }
    }
    cout << inputStr << endl; 
}
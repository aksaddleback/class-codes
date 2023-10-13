// Swap Words: Write a program that reverses the order of the two 
// words in given text string that has two words separated by a 
// space character. For example, if the input is "hello world" the 
// program should output "world hello".

#include<iostream> 
using namespace std; 

int main() { 
    string inputString; 
    string firstWord = "";
    string secondWord = "";
    getline(cin, inputString);
    int i = 0; 
    int currentWord = 1; 
    while (i < inputString.length()) { 
        if (inputString[i] == ' ') { 
            currentWord = 2; 
        } else {
            if (currentWord == 1) {
                firstWord = firstWord + inputString[i];   // firstWord += inputString[i];
            } else if (currentWord == 2) {
                secondWord = secondWord + inputString[i]; // secondWord += inputString[i]
            }
        }
        i++; 
    }
    string res = secondWord + " " + firstWord;
    cout << res << endl; 
}


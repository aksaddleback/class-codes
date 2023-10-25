// Create a program that asks the user to enter a string and a character. 
// Then, use a `for` loop to count and display the number of occurrences 
// of that character in the string. Your program should count both lower 
// and uppercase formats of the entered char by user.

#include<iostream> 
using namespace std; 
int main() { 
    string inputStr; 
    getline(cin, inputStr); 
    char ch; 
    cin >> ch;
    int ocCounter = 0; 
    /* this statement is equivalent to the if/else block:
    ch = (ch <= 122 and ch >= 97) ? ch - 32 : ch;
    
    if (ch <= 122 and ch >= 97) { 
        ch = ch - 32; 
    } else { 
        ch = ch; 
    }
    example: 
    int i = 22; 
    i = (i > 19) ? i + 10 : i - 10; 
    what is the value of i now? 32
    */
    ch = (ch <= 122 and ch >= 97) ? ch - 32 : ch;
    for(int i = 0; i < inputStr.length(); i++) { 
        char ch1 = inputStr[i];
        ch1 = (ch1 <= 122 and ch1 >= 97) ? ch1 - 32 : ch1;

        if (ch1 == ch) {
            ocCounter++;
        }
    }

    cout << ocCounter << endl; 
}

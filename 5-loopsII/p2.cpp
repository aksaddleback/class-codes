// Reverse Words: Write a C++ program that receives multiple single words from the 
// user and prints their reverse. The program will stop if the entered word by the 
// user is "stop."
#include<iostream> 
using namespace std; 
int main() {
    string word, rev;
    int c; 

    do { 
        cout << "enter a word:"; 
        cin >> word; 
        if (word == "stop") { 
            break; 
        }
        c = 0;
        rev = "";
        while (c < word.length()) {
            rev = word[c] + rev; 
            c++; 
        }
        cout << rev << endl; 
    } while (word != "stop");
}

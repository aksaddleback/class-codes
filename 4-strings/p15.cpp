// Reverse String: Write a program that reverses the 
// order of the words in given text string that has 
// words separated by space characters. For example, 
// if the input is "hello world of c++" the program 
// should output "c++ of world hello".

#include<iostream> 
using namespace std; 
int main() { 
    string input; 
    getline(cin, input);
    string nextWord = ""; 
    int i = 0; 
    string res = "";
    while(i < input.length()) { 
        if (input[i] == ' ') { 
            res = nextWord + " " + res; 
            nextWord = "";
        } else { 
            nextWord += input[i];
        }
        i++;
    }
    res = nextWord + " " + res; 
    cout << res << endl; 
}
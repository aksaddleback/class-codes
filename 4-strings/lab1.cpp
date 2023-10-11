// Singular Reverse: Write a program that reverses each word in a given
// text string that has two words separated by a space character.
// For example, if the input is "hello world" the program should output
// "olleh dlrow".
#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    string r = "";
    while (i < s.length()) {
        if (s[i] == ' ') {
            cout << r + " ";
            r = "";
        } else {
            r = s[i] + r; 
        }
        i++;
    }
    cout << r << endl; 


    // Alternative Solution: 
    // string w1r = "";
    // string w2r = "";
    // bool firstWord = true;
    // while (i < s.length()) {
    //     if (s[i] == ' ') {
    //         firstWord = false;
    //     } else {
    //         if (firstWord) {
    //             w1r = s[i] + w1r;
    //         } else {
    //             w2r = s[i] + w2r;
    //         }
    //     }
    //     i++;
    // }
    // cout << w1r + " " + w2r << endl; 
}
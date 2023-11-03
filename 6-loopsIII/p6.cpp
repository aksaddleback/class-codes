// Develop a C++ program that takes a sentence and counts the number of vowels, consonants, 
// and digits in it. The letters in the sentence can be in lowercase or uppercase. Use `for` loop to solve the problem. 
#include<iostream>
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    int vowels = 0, digits = 0, cosonants = 0; 
    for(int i=0; i < s.length(); i++) { 
        char ch = s[i];
        ch = (ch < 91 and ch > 64) ? ch + 32 : ch; 
        // differnt way of writing the same code in prev line
        // if (ch < 91 and ch > 64) { 
        //     ch = ch + 32; 
        // } else { 
        //     ch = ch; 
        // }

        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'u' or ch == 'o') { 
            vowels++;
        } else if (ch >= 'a' and ch <= 'z') { 
            cosonants++;
        } else if (ch >= '0' and ch <= '9') { 
            digits++; 
        }
        
        // alternative that works, but counts all other chars in cosonants
        /*
        switch (ch) { 
            case 'a': 
            case 'i':
            case 'e':
            case 'o':
            case 'u': vowels++; break; 
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0': digits++; break;
            case ' ': break; 
            default: cosonants++;
        }
        */

    }
    cout << digits << " " << cosonants << " " << vowels << endl; 
}
// Write a program that converts a string to uppercase. Use `for` loop to solve 
// the problem.  For example if the input is “I Like to Wear Hats." the output 
// should be "I LIKE TO WEAR HATS."
#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    //cout << (int) 'a' << " " << (int) 'A' << endl;
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] >= 97 and s[i] != ' ') { 
            s[i] -= 32;
        }
    }
    cout << s << endl; 
}

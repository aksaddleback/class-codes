// Write a program that takes a all lower-case string and encrypts it using a simple 
// Caesar cipher (shift each letter by a fixed number of positions). For example, a 
// key of 3 and the sentence, “i like to wear z hats” When this sentence is encrypted 
// using a key of 3, it becomes: "l olnh wr zhdu c kdwv"

#include<iostream> 
using namespace std; 
int main() { 
    //string codes = "abcdefghijklmnopqrstuvwxyz";
    // char ch = 'z' 
    // code for 'a' is 97 and 'z' is 122
    string s; 
    int code; 
    getline(cin, s);
    cin >> code; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] != ' ' and s[i] != '.') {            
            s[i] += code;
        }
        if (s[i] > 122) { 
            s[i] = (s[i] % 122) + 96;
        }
    }
    cout << s << endl; 
}

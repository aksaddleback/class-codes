// Write a C++ program that receives a word and a text. The program should 
// check if the word appears in the given text. If the word is found in 
// the text, print "Word found." If not, print "Word not found."
#include<iostream> 
using namespace std; 
int main() { 
    string s, w; 
    getline(cin, s);
    cin >> w; 
    // hey how to howl at the moon
    //     howl 
    // this program has some issues. we will fix it next week.
    bool found = true; 
    for(int i = 0; i < s.length() - w.length(); i++) { // move in the sentence 
        found = true; 
        for(int j = 0; j < w.length(); j++) {  // move in the word if it is possible
            if (s[i + j] != w[j]) { 
                found = false;
                break; 
            }
        }
        if (found) { 
            cout << "found at position " << i << " of the sentence!" << endl; 
        }
    }
}

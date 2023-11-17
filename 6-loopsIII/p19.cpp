// Write a C++ program that receives two words from the user and checks if 
// they are anagrams of each other. Anagrams are words or phrases formed by 
// rearranging the letters of another. For example race and care are anagrams.
// You can assume there are not repeated characters in each word. 
#include<iostream>
using namespace std; 
int main() { 
    string w1 = "drace", w2 = "bcare";
    bool anagrams = true; 
    for (int i = 0; i < w1.length(); i++) {  // for every char in w1 do this...
        // check if w2 has it
        bool found = false; 
        for(int j =0; j < w2.length(); j++) { 
            if (w2[j] == w1[i]) { 
                found = true; 
                break; 
            }
        }
        if (!found) { // if (found == flase)
            anagrams = false; 
            break; 
        }
    }
    cout << "anagrams: " << anagrams << endl; 
}


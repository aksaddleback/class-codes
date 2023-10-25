// Write a C++ program that receives two words and prints out the word that 
// comes first in alphabetical order. Use `for` loop to solve this problem. 
// assume all chars are in lowercase and both names have same length; 

#include<iostream>
using namespace std; 

int main() { 
    string n1, n2; 
    cin >> n1 >> n2; 
    /* this version only works when the two words are different in the first char
    if (n1[0] < n2[0]) { 
        cout << n1 << endl; 
    } else { 
        cout << n2 << endl; 
    }
    */
    string firstRank = ""; 
    for (int i = 0; i < n1.length(); i++) { 
        if (n1[i] < n2[i]) { 
            firstRank = "n1"; 
            break;
        } else if (n1[i] > n2[i]) { 
            firstRank = "n2";
            break; 
        } // else == loop is going to run for next char
    }
    if (firstRank == "n1") { 
        cout << n1 << endl; 
    } else if (firstRank == "n2") { 
        cout << n2 << endl; 
    }
}
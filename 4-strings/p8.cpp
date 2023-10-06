//Methods and their syntax
/*
    s1 = "this morning";
    s1.length();  this means I want to run an action on s1. the action is 
    length. what will be the result? 12
    s1.find(...); here we say, I would like to run an action on s1, and the 
    action is find... do we need to provide more information? 
    yes, what do we want to find is the additional info.
    s1.find(s2)
    running the actions will return us the result. 
    in case of length action, we will receive the length of the string. 
    in case of find action, we will receive -1, if not found, and location
    of s2, if it is found. 
*/

// Find Substring: Create a C++ program that asks the user to enter a 
// text string and a search term. Use the find function to check if 
// the search term is present in the input string. Print a message 
// indicating whether the search term was found or not. 
// You can use str.find(str2) to get the location of str2 in the str. 


// Hints: s1.find(s2), string::npos

#include<iostream> 
using namespace std; 

int main() { 
    string s1, s2; 
    //cin >> s1 >> s2; 
    getline(cin, s1); 
    getline(cin, s2); 

    // the value of found will be position that s2 is found at or it is going to be -1 if s2 is not found in s1
    int found = s1.find(s2); 
    if (found == -1) { 
        cout << "not found\n";
        cout << found << endl;
    } else { 
        cout << "found\n";
        cout << found << endl; 
    }
}
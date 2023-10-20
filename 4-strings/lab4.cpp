/* First Rank: Create a program that receives a sentence from the user including a set of first names separated by space and prints out the name that would show up first in alphabetical order. You cannot assume no two names in the list share the same first character. Example: if the input is "John Lauren Ashton Nicholas Ava", the output should be "Ashton". */
#include<iostream>
using namespace std; 
int main() { 
    string names; 
    getline(cin, names); 
    string nextName = ""; 
    string firstRankName = ""; 
    int i = 0; 
    while(i < names.length()) { 
        if (names[i] == ' ') { 
            //compare the nextName and firstRankName
            int j = 0; 
            while (j < nextName.length() && j < firstRankName.length()) { 
                if (nextName[j] == firstRankName[j]) { 
                    j++;
                } else if (nextName[j] < firstRankName[j]) { 
                    firstRankName = nextName; 
                    break; 
                } 
            }            
        } else { 
            nextName += names[i]; 
        }
        i++;
    }
    cout << firstRankName << endl; 
}
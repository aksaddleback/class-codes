// First Rank: Create a program that receives a sentence 
// from the user including a set of first names separated 
// by space and prints out the name that would show up first 
// in alphabetical order. You can assume no two names in 
// the list share the same first character. Example: if the 
// input is "John Lauren Samuel Nicholas Eva", the output 
// should be "Eva". 

#include<iostream> 
using namespace std; 
int main() { 
    string names; 
    getline(cin, names);
    string nextName = "";
    string firstRankName = "";
    int i = 0; 
    while (i < names.length()) { 
        if (names[i] == ' ') { 
            if (nextName[0] < firstRankName[0] or firstRankName == "") { 
                firstRankName = nextName; 
            } 
            nextName = "";
        } else { 
            nextName += names[i];
        }
        i++;
    }
    if (nextName[0] < firstRankName[0] or firstRankName == "") { 
        firstRankName = nextName; 
    } 
    cout << firstRankName << endl;
}
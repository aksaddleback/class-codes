// Write a C++ program that receives a string of 0s and 1s 
// (a binary representation) and calculates its base-10 equivalent, 
// then prints it out. Example: Input: "1101" Output: 13
#include<iostream> 
using namespace std; 

int main() { 
    int posValue = 1; 
    int baseTenValue = 0; 
    string s;
    cin >> s; 
    for(int i = s.length()-1; i >= 0; i--) { 
        if (s[i] == '1') { 
            baseTenValue += posValue; 
        }
        posValue *= 2; 
    }
    cout << baseTenValue << endl; 
}


// Create a program that takes a string input from the user and uses a 
// `for` loop to count and display the number of vowels (a, e, i, o, u) 
// in the string. Let's count number of both lowercase and uppercase formats; 

#include<iostream> 
using namespace std; 
int main() { 
    string inputStr; 
    getline(cin, inputStr);
    int countA = 0, countE = 0, countO = 0, countI = 0, countU=0; 
    for(int i = 0; i < inputStr.length(); i++) {
        switch (inputStr[i]) { 
            case 'a': 
            case 'A':countA++; break; 
            case 'e':
            case 'E': countE++; break; 
            case 'O':
            case 'o': countO++; break; 
            case 'i':
            case 'I': countI++; break; 
            case 'u':
            case 'U': countU++; break; 
        }
    }
    cout << i; 
    cout << "count of a: " << countA << endl; 
    cout << "count of e: " << countE << endl; 
    cout << "count of o: " << countO << endl; 
    cout << "count of i: " << countI << endl; 
    cout << "count of u: " << countU << endl; 
}
/*File Word Count Develop a C++ program that reads a text file named "words.txt" 
and counts the total number of words in it. We assume every word is separated by a space character. 
*/
#include<iostream> 
#include<fstream> 
using namespace std; 

int wordCount(string s) {   // this method is not accurate as it is assuming all words are separated by one space char. 
    int numofwords = 0;
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            numofwords++; 
        }
    }
    return numofwords + 1; 
}

int main() { 
    ifstream f("words.txt");
    int numberOfWords = 0; 
    while(!f.eof()) { 
        string s; 
        getline(f, s); 
        numberOfWords += wordCount(s);         
    }
    cout << numberOfWords << endl; 
}
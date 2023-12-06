/*File Character Count Write a C++ program that reads a text file named "characters.txt"
 and counts the total number of characters (including spaces and special characters) in the file.*/
#include<iostream> 
#include<fstream> 
using namespace std; 
int main() { 
    ifstream f("words.txt");
    int numberOfChars = 0; 
    while(!f.eof()) { 
        string s; 
        getline(f, s); 
        numberOfChars += s.length();
    }
    cout << numberOfChars << endl; 
}
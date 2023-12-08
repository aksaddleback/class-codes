/* File Reading and Display - Write a C++ program that reads content from a text file 
named "input.txt" and displays it on the console.
*/
#include<iostream>
#include<fstream> // to work with the files. 
using namespace std; 
int main() { 
    ifstream f("input.txt");
    string s;
    while (!f.eof()) {
        getline(f, s);
        cout << s << endl; 
    }
    f.close(); 
}

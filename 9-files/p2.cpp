/*
File Writing - Create a C++ program that prompts the user to enter text and saves it to a file named "output.txt".
*/
#include<iostream>
#include<fstream>
using namespace std; 
int main() { 
    ofstream f("output.txt");
    string s; 
    getline(cin, s); 
    f << s; // cout << s; 
    f.close(); 
}
/*
File Copying - Develop a C++ program that copies the contents of one text 
file ("source.txt") to another file ("destination.txt").
*/
#include<iostream> 
#include<fstream> 
using namespace std; 
int main() { 
    ifstream input("source.txt");
    ofstream f("destination.txt");
    while(!input.eof()) { // while not reached to the end of file "input" -- our input file here
        string s; 
        getline(input, s); 
        f << s << endl; 
    }
    input.close(); 
    f.close(); 
}
/*File Line Count - Create a C++ program that counts and displays the number of 
lines in a text file named "lines.txt".
*/
#include<iostream> 
#include<fstream> 
using namespace std; 
int main() { 
    ifstream f("lines.txt");
    int numberOfLines = 0; 
    while(!f.eof()) { 
        string s; 
        getline(f, s); 
        numberOfLines++;         
    }
    cout << numberOfLines << endl; 
}
//Text Length: Write a program that receives a text input from the 
//user and prints out the length (number of characters) of the provided text.

#include<iostream>
using namespace std; 
int main() { 
    string str1; 
    /*  if we type "saddleback college" in input, str1 only will 
        contain the word saddleback since "cin >>" 
        command reads up to the space character separator. 
    */
    //cin >> str1; 
    getline(cin, str1); //get a line from cin and put it into str1
    cout << str1.length() << endl; 
}


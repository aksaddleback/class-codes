//Develop a program that uses a do-while loop to keep asking 
//the user for a password until they enter the correct one.
#include<iostream>
using namespace std; 
int main() { 
    string correctPass = "c++";
    string enteredPass; 
    do { 
        cout << "Please enter the password:"; 
        cin >> enteredPass;
    } while(enteredPass != correctPass);
    cout << "you enered the coorect password. good job!" << "\n";
}

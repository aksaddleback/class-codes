/*
Create a C++ program that defines a function named sayHi which takes a string 
parameter (the name) and greets the user with "Hello, [Name]!" In the main() 
function, repeatedly ask the user for a name until the user enters "end". 
Use the sayHi function to greet each entered name. The function doesn't need 
to return anything as it only prints a message. The return type of this function 
should be void. 
*/
#include<iostream>
using namespace std; 

void sayHi(string name) { 
    cout << "Hello " << name << endl; 
}

int main() { 
    string n; 
    do { 
        cout << "Enter a name (or end to stop): "; 
        cin >> n;
        if (n == "end") { 
            break; 
        }
        sayHi(n);
    } while ( n != "end");
}


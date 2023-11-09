// Write a C++ program that receives a 16-character string from 
// the user and prints it as a 4x4 matrix. Example: itisagreatday!!!
// i t i s
// a g r e
// a t d a
// y ! ! !
#include<iostream> 
using namespace std; 
int main() { 
    string s = "itisagreatday!!!";
    // first approach:
    /*
    int k = 0; 
    for(int i = 0; i < 4; i++) {    
        for(int j=0; j < 4; j++) {  // pringint columns of one row
            cout << s[k++] << " "; // cout << s[k]; k++; 
        }
        cout << endl; // new line after each row
    }
    */
   // second approach
   /*
    for(int i = 0; i < 4; i++) {    
        for(int j=0; j < 4; j++) {  // pringint columns of one row
            cout << s[i*4+j] << " ";
        }
        cout << endl; // new line after each row
    }
    */
   // third approach
   int k = 0; 
   while(k < 16) { 
        cout << s[k++] << " "; 
        if (k%4 == 0) { 
            cout << endl; 
        }
   }
}
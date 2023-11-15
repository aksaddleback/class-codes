// Write a C++ program that receives a decimal number and prints its binary
// representation as a string. Example: Input: 10 Output: "1010"
#include<iostream>
using namespace std; 
int main() { 
    int posValue = 1; 
    int base10 = 123; 
    string base2 = "";
    while (posValue <= base10) { 
        posValue *= 2; 
    }
    posValue /= 2;

    while (base10 > 0) { 
        if (posValue > base10) { 
            base2 += "0";
        } else { 
            base2 += "1";
            base10 -= posValue; 
        }
        posValue /= 2; 
    }

    cout << base2 << endl; 
}

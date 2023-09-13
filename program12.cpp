//Write a program that finds the 
//largest among three numbers.
#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter the 1st number: "; 
    int x;
    cin >> x; 
    cout << "Enter the 2nd number: "; 
    int y;
    cin >> y; 
    cout << "Enter the 3rd number: "; 
    int z;
    cin >> z;
    if (x > y and x > z) { 
        cout << "max of the 3 numbers is: " << x << "\n";
    } else if (y > x and y > z) { 
        cout << "max of the 3 numbers is: " << y << "\n";
    } else { 
        cout << "max of the 3 numbers is: " << z << "\n";
    }

    /*
    Alternative logic? No. this code is not correct.
    int max = x; 
    if (y > max) { 
        max = y; 
    } else if (z > max) { 
        max = z; 
    }
    cout << "max of the 3 numbers is: " << max << "\n";

    Alternative logic:
    int max = x; 
    if (y > max) { 
        max = y; 
    }
    if (z > max) { 
        max = z; 
    }
    cout << "max of the 3 numbers is: " << max << "\n";
    */
}
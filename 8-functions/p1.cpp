// Write a C++ program that defines a function called calculateSum which takes two 
// double parameters and returns their sum. In the main() function, call this calculateSum 
// function three times with different sets of arguments and display the result each time.
#include<iostream> 
using namespace std; 

double calSum(double x, double y) { // x and y are called parameters
    return x + y; 
}

int main() { 
    // first call
    cout << calSum(9.3, 9.8) << endl; 
    // second call
    double z = calSum(5.3, 193.3);  // 5.3 and 193.3 are called arguments 
    cout << z << endl; 
    // third call
    double a = 9.3, b = 1000.1; 
    double c = calSum(a, b);        // here a and b are called arguments
    cout << c << endl; 
}
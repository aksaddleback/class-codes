/*
Create a C++ program that defines a function called calculateInterest which calculates 
simple interest. This function should take three parameters: principal (double), rate 
(double), and time (int). However, set default values for rate and time (e.g., rate = 5% 
and time = 1 year). In the main() function, ask the user for the principal amount and 
optionally the rate and time. Use the calculateInterest function to compute and display 
the simple interest.
*/
#include<iostream> 
using namespace std; 

double calculateInterest(double p, double r = 0.05, int timeInyear = 1) { 
    return (timeInyear * p * r) / 100
}

int main() { 
    cout << "Enter principal, interest rate (between 0 and 100) , and time in year:"; 
    double p, r;
    int t; 
    cin >> p >> r >> t; 
    double interest = calculateInterest(p, r, t); 
    cout << interest << endl; 

    // in the following case, default value for r and timeInyear will be used since we are not passing them
    interest = calculateInterest(p); 
    cout << interest << endl; 
}



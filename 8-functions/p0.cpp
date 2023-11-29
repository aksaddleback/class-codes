#include<iostream> 
using namespace std; 

/* 
frist we declare the function, meaning we say what is the name, inputs, and outputs
output type      name         parameters            */
double           calculateSum (double x, double y) { // this line is function declaration
    // from here we have the function definition -- body of the function
    // this function is supposed calculate sum of two numbers and return it as the result
    double z = x + y; 
    return z; 
    // alternative
    //return x + y; 
}
// now we have the main function from which the program execution starts
int main() { 
    double a, b; 
    cin >> a; 
    cin >> b; 
    double p = calculateSum(a, b);
    cout << p << endl; 
}

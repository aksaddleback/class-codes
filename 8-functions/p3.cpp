/*
Write a C++ program that defines a function called calculateArea which takes two parameters: 
length and width (both doubles) and returns the area of a rectangle. In the main() function, 
ask the user for the length and width of rectangles and display their respective areas using 
the calculateArea function.
*/
#include<iostream> 
using namespace std; 

double calculateArea(double length, double width) { 
    double area = length * width; 
    return area; 
}

int main() {
    cout << "enter length of the rectangle:"; 
    double l; 
    cin >> l; 
    cout << "enter width of the rectangle:"; 
    double w; 
    cin >> w; 
    double area = calculateArea(l, w); 
    cout << "area is: " << area << endl; 
}
/*
Write a C++ program that defines two functions: celsiusToFahrenheit and fahrenheitToCelsius. 
celsiusToFahrenheit should convert Celsius to Fahrenheit and fahrenheitToCelsius should convert 
Fahrenheit to Celsius. In the main() function, ask the user for a temperature value and its 
unit (Celsius or Fahrenheit) and convert it using the respective function.
*/
#include<iostream> 
using namespace std; 

double celsiusToFahrenheit(double cTemp) { 
    double f = 32 + 1.8 * cTemp; 
    return f; 
}

double fahrenheitToCelsius(double fTemp) { 
    double c = (fTemp - 32) / 1.8; 
    return c; 
}

int main() { 
    cout << "Enter (c) to convert celcius to fahrenheit or (f) for reverse:";
    char c; 
    cin >> c; 
    double t; 
    cout << "Enter the temperatur in " << (c == 'c' ? "celcius:" : "fahrenheit:"); 
    cin >> t; 
    if (c == 'c') { 
        cout << celsiusToFahrenheit(t) << endl; 
    } else if (c == 'f') { 
        cout << fahrenheitToCelsius(t) << endl; 
    } else { 
        cout << "wront input!" << endl; 
    }
}
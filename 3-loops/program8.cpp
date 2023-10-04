//Create a C++ program that uses a `do-while` loop to simulate a 
//basic calculator. The program should repeatedly ask the user 
//for two numbers and an operation (addition, subtraction, multiplication, 
//or division) and display the result. 
//Ask if the user wants to perform another calculation and continue 
//until they choose to exit.
#include<iostream>
using namespace std; 
int main() { 
    int x; 
    int y; 
    char op; 
    bool contFlag;
    int res;

    do { 
        cout << "Enter the first number: ";
        cin >> x; 
        cout << "Enter the second number: ";
        cin >> y; 
        cout << "Enter the operation (+, -, *, /):";
        cin >> op; 
        switch (op) {
            case '+': res = x + y; break;
            case '-': res = x - y; break; 
            case '*': res = x * y; break;
            case '/': res = x / y; break; 
            default: cout << "The operator is invalid!" << "\n"; 
        }
        cout << "The result of requested operation is: " << res << "\n";
        cout << "Do you want to continue? (enter 0 or 1)";
        cin >> contFlag;

    } while(contFlag == true);
    cout << "Thank you for using my advanced calculator!" << "\n";
}

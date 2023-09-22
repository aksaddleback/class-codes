/*Develop a program that prints the cost of a menu item 
based on user selection (Menu has 5 choices -- 
items 1 to 5 -- with prices 10, 20, 30, 25, 39).*/

#include<iostream>
using namespace std; 
int main() { 
    cout << "Item1: Hamburger1, $10\n";
    cout << "Item2: Hamburger2, $20\n";
    cout << "Item3: Hamburger3, $30\n";
    cout << "Item4: Hamburger4, $25\n";
    cout << "Item5: Hamburger5, $39\n";
    cout << "Enter one item from 1 to 5:";
    int choice; 
    cin >> choice;
    switch (choice)
    {
    case 1: cout << "Price is $10\n";
        break;
    case 2: cout << "Price is $20\n";
        break;
    case 3: cout << "Price is $30\n";
        break;
    case 4: cout << "Price is $25\n";
        break;
    case 5: cout << "Price is $39\n";
        break;
    default: cout << "We are out of that today. Sorry!\n";
        break;
    } 
}
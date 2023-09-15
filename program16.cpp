//Create a program that displays the name of a shape based on the number 
//of sides entered (Quadrilaterals, Triangles, Pentagons, Hexagons)

#include<iostream>
using namespace std; 
int main() { 
    cout << "Enter number of sides:";
    int numberOfSides; 
    cin >> numberOfSides;
    switch (numberOfSides)
    {
    case 4: cout << "Quadrilaterals\n";
        break;
    case 3: cout << "Triangles\n";
        break;
    case 5: cout << "Pentagons\n";
        break;
    case 6: cout << "Hexagons\n";
        break;
    default: cout << "Out of range!\n";
        break;
    } 
}
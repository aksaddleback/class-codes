
/* Write a program that displays the name of a day given 
its number (1 for Sunday, 2 for Monday, etc.).*/
#include<iostream>
using namespace std; 
int main() { 
    int x; 
    cout << "Enter a day number: "; 
    cin >> x; 
    if (x == 1) { 
        cout << "Sunday\n";
    } else if (x == 2) { 
        cout << "Monday\n";
    } else if (x == 3) { 
        cout << "Tuesday\n";
    } else if (x == 4) { 
        cout << "Wednesday\n";
    } else if (x == 5) { 
        cout << "Thursday\n";
    } else if (x == 6) { 
        cout << "Friday\n";
    } else if (x == 7) { 
        cout << "Saturday\n";
    } else { 
        cout << "Your number is not valid!\n";
    }
}


/*
question: does having or not having else in the following piece code make a difference? 
if (1st door is open) {
    turn on the lights in the first room; 
} [else]
if (2nd door is open) {
    turn on the lights in the 2nd room; 
}
*/


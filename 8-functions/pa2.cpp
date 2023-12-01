#include<iostream> 
using namespace std; 

void f(int &x, int y) { 
    x += 30; 
    y += 50;
    cout << x << " " << y << endl; 
}

void swap1(int x, int y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}

void swap(int &x, int &y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}

int main() { 
    int a = 10; 
    int b = 20; 
    // f(a, b); 
    // cout << a << " " << b << endl; 
    swap1(a, b);
    cout << a << " " << b << endl; 
    swap(a, b);
    cout << a << " " << b << endl; 
}
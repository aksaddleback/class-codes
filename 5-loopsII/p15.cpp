// Develop a C++ program that uses a `for ` loop to generate and print the first 20 
// terms of the geometric progression with a common ratio of 'x', starting with the term 1.
#include<iostream> 
using namespace std; 
int main() { 
    int x; 
    cin >> x; 
    int res = 1;
    for (int i = 0; i < 5; i++) { 
        cout << res << endl; 
        res *= x; 
    }
}

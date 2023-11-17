// Write a program to receive double numbers from user and add them to a 
// vector until 0 is entered by the user. Then print out all the numbers in 
// a single line. 

#include<iostream> 
#include<vector> 
using namespace std; 
int main() { 
    vector<double> v; 
    double x;
    do { 
        cin >> x; 
        v.push_back(x);
    } while(x != 0);
    v.pop_back(); // removes tha last from the vector

    for(int i = 0; i < v.size(); i++) { 
        cout << v.at(i) << " ";             // or v[i]
    }
    cout << endl; 
}
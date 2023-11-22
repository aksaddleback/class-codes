/* Create a program that inputs 5 integers into a vector. Then, remove the last 
element from the vector and print the updated vector. */
#include<iostream> 
#include<vector>
using namespace std; 
int main() { 
    vector<int> v; 
    int x;
    for(int i = 0; i < 5; i++) { 
        cin >> x; 
        v.push_back(x);
    }
    v.pop_back(); 
    for(int i = 0; i < v.size(); i++) { 
        cout << v.at(i) << " ";
    }
    cout << endl; 
}
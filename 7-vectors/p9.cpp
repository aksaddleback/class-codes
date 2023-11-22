/* Write a program that reads integers into a vector until 0 is entered, 
then reverses the order of elements in the vector and prints the reversed vector.*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v;
    int x; 
    do { 
        cin >> x;
        if (x == 0) { break; }
        v.push_back(x);
    } while (x != 0);

    for(int i = 0; i < v.size() / 2; i++) {
        int temp = v[i]; 
        v[i] = v[v.size() -1 - i]; 
        v[v.size() - 1 - i] = temp; 
    }

    for(int x: v) { // for each element in v, every time that loop repeats, put next element from v in x;
        cout << x << " "; 
    }

    cout << endl; 
}
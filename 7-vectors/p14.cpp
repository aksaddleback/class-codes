/*Write a program that reads 10 integers into a vector and extracts a subrange 
of elements (from index 2 to index 6) into a new vector, then print the new vector.
*/

#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v1, v2;
    int x; 
    for(int i = 0; i < 10; i++) { 
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 2; i <= 6; i++) { 
        v2.push_back(v1[i]);
    }
    for (int y : v2) { 
        cout << y << " ";
    }
    cout << endl; 
}

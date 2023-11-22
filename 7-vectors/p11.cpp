/*Input 6 integers into a vector. Modify the vector by doubling the value of each element, 
and then print the modified vector.
*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v;
    int x; 
    for(int i = 0; i < 6; i++) { 
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++) { 
        v[i] = v[i] * 2; 
    }

    for(int x: v) { 
        cout << x << " ";
    }
    cout << endl; 
}
    
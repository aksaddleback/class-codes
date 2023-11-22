/* Create two vectors with 4 integers each. Merge these two vectors into a third vector and print the merged vector.*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v1, v2, v3; 
    int x; 
    for(int i = 0; i < 4; i++) { 
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < 4; i++) { 
        cin >> x;
        v2.push_back(x);
    }
    for(int y : v1) { 
        v3.push_back(y);
    }
    for(int y : v2) { 
        v3.push_back(y);
    }

    for(int y : v3) { 
        cout << y << " "; 
    }
    
    cout << endl; 
}


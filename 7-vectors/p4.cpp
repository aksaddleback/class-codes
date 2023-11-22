/* Write a program to receive an even number of integers (stop when 0 is entered) 
from the input, put them in a vector and then modify the vector in a way to make 
sure every pair of numbers is sorted in ascending order. 
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 2, 12, 5, 9, 3, 13, 9, 23
*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v; 
    int x;
    do { 
        cin >> x; 
        if (x == 0) { 
            break; 
        }
        v.push_back(x); // automatically resizes the vector by adding 1 to length of it.
    } while (x != 0);

    if (v.size() % 2 == 1) { 
        cout << "I got odd number of numbers!" << endl;
    } else { 
        for (int i = 0; i < v.size(); i+=2) { 
            if (v[i] > v.at(i+1)) { 
                int temp = v[i]; 
                v[i] = v[i+1];
                v[i+1] = temp; 
            }
        }
    }

    for(int i = 0; i < v.size(); i++) { 
        cout << v[i] << " ";
    }
    cout << endl; 
}
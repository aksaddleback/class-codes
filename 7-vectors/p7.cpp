/* Write a program that receives two sequence of numbers and put them in two vectors 
from the input (each sequence ends when 0 is entered) and the use the vectors to check 
if they have the same elements (in any order). Assume no number is repeated 
in the vectors.  Example input: 12, 2, 5, 9,0, 2, 9, 5, 12, 0, Output: Yes */
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v1, v2;
    int x; 
    do { 
        cin >> x;
        if (x == 0) { break; }
        v1.push_back(x);
    } while (x != 0);

    do { 
        cin >> x;
        if (x == 0) { break; }
        v2.push_back(x);
    } while (x != 0);
    
    if (v1.size() != v2.size()) {
        cout << "vectors should have same number of elements." << endl; 
    } else { 
        bool equalVectors = true; 
        for(int i = 0; i < v1.size(); i++) { // for every element in v1
            // check if v1[i] is in v2
            bool found = false; 
            for(int j = 0; j < v2.size(); j++) { 
                if (v1[i] == v2[j]) { 
                    found = true; 
                    break; // from the inner loop 
                }
            }
            if (!found) { // if (found == false)
                equalVectors = false; 
                break; // from the outer loop
            }
        }
        if (equalVectors) { 
            cout << "vectors have same numbers maybe in different order!" << endl;
        } else { 
            cout << "vectors don't have same numbers!" << endl;
        }
    }
}

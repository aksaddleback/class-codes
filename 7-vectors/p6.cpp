/* Write a program to receive integers (stop when 0 entered), put them in a vector 
and then use the vector to find and print out sum of all numbers except maximum 
value in the list. Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0 Output: 53 */
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
    
    if (v.size() < 1) {
        cout << "Not enough numbers in the vector!";
    }

    int sum = 0; 
    int max = v[0];
    for(int i = 0; i < v.size(); i++) { 
        if (v.at(i) > max) { 
            max = v.at(i);
        }
        sum += v.at(i);
    }

    cout << "sum of all except max is: " << sum - max << endl; 
}
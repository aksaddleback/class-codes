/* Write a program to receive integers (stop when 0 is entered) from the input, 
put them in a vector and then finds and prints out the second largest number of the vector. 
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 13
*/
#include<iostream> 
#include<vector>
using namespace std; 

int main() { 
    vector<int> v; 
    // if we have v(1), then initial size of vector is 1 and the only value in vector is 0
    int largest, secondlargest, x; 
    do { 
        cin >> x; 
        if (x == 0) { break; }
        v.push_back(x); 
        // if we had v(1) in line 12, the first number would be added after 0
    } while (x != 0);
    
    if (v.size() < 2) {
        cout << "Not enough numbers in the vector!";
    } 

    largest = v[0] > v[1] ? v[0] : v[1]; // if (v[0] > v[1]) { largest = v[0]; } else {largest = v[1];}
    secondlargest = v[0] > v[1] ? v[1] : v[0]; 
    for(int i = 2; i < v.size(); i++) { 
        if (v.at(i) > largest) { 
            secondlargest = largest; 
            largest = v[i];
        } else if (v[i] > secondlargest) { 
            secondlargest = v[i];
        }
    }
    cout << "first method: " << secondlargest << endl; 

    // alternative logic -- less efficient. if list has 1000 numbers ~1000000 comparisons will be made
    int countOfLargerNumbers = 0; 
    for(int i = 0; i < v.size(); i++) { // for each number in the list count numbers larger than that number
        countOfLargerNumbers = 0; 
        for (int j = 0; j < v.size(); j++) { // compare the current number with all numbers in the list
            if (v[j] > v[i]) { 
                countOfLargerNumbers++; 
                if (countOfLargerNumbers > 1) { 
                    break; // out of inner loop
                }
            }
        }
        if (countOfLargerNumbers == 1) { 
            cout << "second method: " << v[i] << endl; 
            break; // out of outer loop 
        }
    }


}
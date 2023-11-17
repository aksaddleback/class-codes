// Write a program to recieve integers (stop when 0 is entered) and put them in a 
// vector and then prints out two summation equations for numbers in odd and even 
// postions of the vector. Example input: 1, 2, 5, 9, 12, 3, 23, 0
// Example output: 1 + 5 + 12 + 23 = 41
//                 2 + 9 + 3 = 14                
#include<iostream>
#include<vector>
using namespace std; 
int main() { 
    vector<int> v { 1, 2, 5, 9, 12, 3, 23};
    // int x; 
    // do { 
    //     cin >> x; 
    //     v.push_back(x);
    // } while(x != 0);
    string e1 = "", e2 = "";
    int s1 = 0, s2 = 0; 
    for(int i = 0; i < v.size(); i++) { 
        if (i%2 == 0) {
            s1 += v.at(i);
            e1 += to_string(v.at(i));
            if (i < v.size() - 2) { 
                e1 += " + ";
            } else { 
                e1 += " = ";
            }
        } else {
            s2 += v.at(i);
            e2 += to_string(v.at(i));
            if (i < v.size() - 2) { 
                e2 += " + ";
            } else { 
                e2 += " = ";
            }
        }
    }
    cout << e1 << ' ' << to_string(s1) << endl; 
    cout << e2 + ' ' + to_string(s2) << endl; 

    //alternative solution: 
    int sum1 = 0; 
    for(int i = 0; i < v.size(); i+=2) { 
        cout << v[i];
        sum1 += v[i];
        if (i < v.size() - 2) { 
            cout << " + ";
        } else { 
            cout << " = ";
            cout << sum1 << endl; 
        }
    }
    int sum2 = 0; 
    for(int i = 1; i < v.size(); i+=2) { 
        cout << v[i];
        sum2 += v[i];
        if (i < v.size() - 2) { 
            cout << " + ";
        } else { 
            cout << " = ";
            cout << sum2 << endl; 
        }
    }

}
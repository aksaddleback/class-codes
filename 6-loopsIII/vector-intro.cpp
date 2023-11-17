#include<iostream> 
// we need to include vector, in order to be able to use it. 
#include<vector>
using namespace std; 

int main() { 
    // When we define the vectory, we ask for multiple memory cells of a type (like int, double, etc.) instead of one cell. 
    // 
    vector<int> grades(3);// = { 5, 9, 22};
    for (int i = 0; i < 3; i++) { 
         cin >> grades[i]; 
    }
    grades.erase(grades.begin()+2);
    for (int i = 0; i < grades.size(); i++) { 
        cout << grades[i] << endl; 
    }
}
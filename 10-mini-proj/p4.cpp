#include<iostream>
#include<fstream> 
using namespace std; 

void readArray(int a[20]) { 
    ifstream f("input_search.txt"); 
    for(int i = 0; i < 20; i++) { 
        f >> a[i]; 
    }
    f.close(); 
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl; 
}

void checkIfArrayContains(int a[], int x) { 
    bool found = false; 
    int pos = -1; 
    for(int i = 0; i < 20; i++) { 
        if (a[i] == x) { 
            found = true; 
            pos = i; 
            break; 
        }
    }
    if (found == true) { 
        cout << "found at pos " << pos << endl; 
    } else { 
        cout << "not found" << endl; 
    }
    
}

int main() { 
    int a[20];
    readArray(a);
    printArray(a, 20);
    while(true) { 
        int x; 
        cin >> x; 
        if (x == -1) { 
            break;
        } else { 
            checkIfArrayContains(a, x);
        }
    }
}
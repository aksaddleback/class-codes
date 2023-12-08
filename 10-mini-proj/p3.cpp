#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a1[10]) { 
    ifstream f("input_reverse.txt"); 
    for(int i = 0; i < 10; i ++) { 
        f >> a1[i]; 
    }
    f.close(); 
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl; 
}

void reverseArray(int a[]) { 
    for(int i = 0; i < 5; i++) { 
        int temp = a[i]; 
        a[i] = a[9-i];
        a[9-i] = temp; 
    }
}

int main() { 
    int a[10];
    readArray(a); 
    printArray(a, 10);

    reverseArray(a);
    printArray(a, 10);
}
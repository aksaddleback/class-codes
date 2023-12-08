#include<iostream> 
#include<fstream> 
using namespace std; 

void readArrays(int a1[10], int a2[10]) { 
    ifstream f("input_merge.txt"); 
    for(int i = 0; i < 10; i ++) { 
        f >> a1[i]; 
    }
    for(int i = 0; i < 10; i ++) { 
        f >> a2[i]; 
    }
    f.close(); 
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl; 
}

void merge(int a[10], int b[10], int c[20]) { 
    int i = 0, j = 0, k = 0; 
    while (i < 10 or j < 10) { 
        if (a[i] < b[j] or j == 10) { 
            c[k++] = a[i++];
            //i++; 
            //k++;
        } else if (b[j] < a[i] or i == 10) { 
            c[k++] = b[j++]; 
            //j++; 
            //k++;
        }
    }    
}

int main() { 
    int a[10];
    int b[10];
    int c[20];
    readArrays(a, b); 
    printArray(a, 10);
    printArray(b, 10);

    merge(a, b, c);
    printArray(c, 20);
}
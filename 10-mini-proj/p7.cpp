#include<iostream> 
#include<fstream> 
using namespace std; 

void createSortedFileOfNumbers(string fileName, int size) { 
    ofstream f(fileName); 
    srand (time(NULL));
    int lastNumber = 0;
    for(int i = 0; i < size; i++) { 
        int x = rand() % 10;
        x += lastNumber;  
        f << x << endl; 
        lastNumber = x; 
    }
    f.close(); 
}

void readNumbers(string fileName, int size, int a[]) { 
    ifstream f(fileName);
    for(int i = 0; i < size; i++) { 
        f >> a[i];
    }
    f.close(); 
}

void printArray(int size, int a[]) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void biranySearch(int x, int a[], int size) { 
    int left = 0, right = size - 1; 
    bool found = false; 
    int counter = 0; 
    while (left <= right) { 
        counter++; 
        int middle = (right + left) / 2; 
        //cout << a[middle] << endl; 
        if (x < a[middle]) { 
            right = middle - 1;
        } else if ( x > a[middle]) { 
            left = middle + 1; 
        } else { // x == a[middle]
            found = true; 
            cout << "Found it! Position of the number is: " << middle << endl;
            cout << "number of comparisons: " << counter << endl; 
            break; 
        }
    }
    if (!found) { 
        cout << "Not found!" << endl; 
    }
}

int main() { 
    string fileName = "sorte_input.txt"; 
    int size = 1000; 
    int a[size];
    //createSortedFileOfNumbers(fileName, size);
    readNumbers(fileName, size, a); 
    //printArray(size, a);
    int x;
    while(true) { 
        cin >> x; 
        if (x == -1) { break; }
        biranySearch(x, a, size);
    }
}
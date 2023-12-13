#include<iostream> 
#include<fstream> 
using namespace std; 

void createFileOfNumbers(string fileName, int size) { 
    ofstream f(fileName); 
    srand (time(NULL));

    for(int i = 0; i < size; i++) { 
        int x = rand() % 50 + 1; 
        f << x << endl; 
    }
    f.close(); 
}

void readNumbers(string fileName, int size, int a[100]) { 
    ifstream f(fileName);
    for(int i = 0; i < size; i++) { 
        f >> a[i];
    }
    f.close(); 
}

void printArray(int size, int a[100]) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void findUniqueElements(int a[], int size) { 
    // this approach will make approx size * size comparisons
    // if array size is 10,000 we will make ~100 million comparisons 
    for(int i = 0; i < size; i++) { 
        bool unique = true; 
        for(int j = 0; j < size; j++) { 
            if (i == j) { 
                continue;
            }
            if (a[i] == a[j]) { 
                unique = false; 
                break; 
            }
        }
        if (unique) { 
            cout << a[i] << " ";
        }
    }
    cout << endl; 
}

void findUniqueElements2(int a[], int size) { 
    // in this approach we assume the numbers in the array a are between 0 and 999
    // we will need size + range (here it is 1000) number of comparisons 
    // if array size is 10000 and range is 1000, we will need 11000 comparisons 
    int countArray[1000] = { 0 }; 
    for(int i = 0; i < size; i++) { 
        countArray[a[i]]++; 
    }
    for(int i = 0; i < 1000; i++) { 
        if (countArray[i] == 1) { 
            cout << i << " "; 
        }
    }
    cout << endl; 
}

int main() { 
    string fileName = "input_unique.txt"; 
    int size = 100; 
    int a[size];
    //createFileOfNumbers(fileName, size);
    readNumbers(fileName, size, a); 
    //printArray(100, a);
    findUniqueElements(a, 100); 
    findUniqueElements2(a, 100);
}
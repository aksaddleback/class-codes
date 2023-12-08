#include<iostream> 
#include<fstream>
using namespace std; 

void readArray(int arr[]) { // we are assuming the array has 20 numbers
    ifstream f("input_max_min.txt");
    int i = 0; 
    while(!f.eof()) { 
        f >> arr[i++]; // equal to these two statements: f >> arr[i]; i++;
    }
    cout << "count read: " << i << endl; 
}

void printArray(int arr[], int size) { 
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int findMax(int arr[], int size) { 
    int max = arr[0];
    for (int i = 1; i < size; i++) { 
        if (arr[i] > max) { 
            max = arr[i];
        }
    }
    return max; 
}


int findMin(int arr[], int size) { 
    int min = arr[0];
    for (int i = 1; i < size; i++) { 
        if (arr[i] < min) { 
            min = arr[i];
        }
    }
    return min; 
}

int main() {
    int arrSize = 20; 
    int arr[20];
    readArray(arr);
    printArray(arr, arrSize);
    cout << "Max: " << findMax(arr, arrSize) << endl; 
    cout << "Min: " << findMin(arr, arrSize) << endl; 
}
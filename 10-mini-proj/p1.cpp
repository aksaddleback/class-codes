#include<iostream>
using namespace std;

void Swap(int arr[], int i, int min, int minLocation)
{
    // swap the smallest with the next unsorted item:
    int temp = arr[i];
    arr[i] = min;
    arr[minLocation] = temp;
}

void SelectAndSwap(int i, int arr[20], int size)
{
    int min = arr[i];
    int minLocation = i; 
    for (int j = i + 1; j < size; j++)
    {
        // swap the smallest found with the first unsorted item.
        if (arr[j] < min)
        {
            min = arr[j];
            minLocation = j;
        }
    }
    Swap(arr, i, min, minLocation);
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() { 
    int arrsize = 20; 
    int arr[20] = {9, 7, 2, 8, 6, 4, 5, 1, 3, 19, 17, 12, 18, 16, 14, 15, 11, 13, 10}; 
    for(int i = 0; i < arrsize; i++) { // select and swap for 9 times
        SelectAndSwap(i, arr, arrsize);
    }
    PrintArray(arr, arrsize);
}


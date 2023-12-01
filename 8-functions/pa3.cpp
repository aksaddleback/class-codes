/*
Write a C++ program that defines a function calculateSum to find the sum and another function calculateAverage
 to find the average of elements in an array of integers. In the main() function, ask the user to input the size 
 of the array and its elements, then display the sum and average using these functions.
*/
#include<iostream> 
using namespace std; 

int calculateSum(int a[], int size) { 
    int sum = 0; 
    for(int i = 0; i < size; i++) { 
        sum += a[i]; 
    }
    return sum; 
}

double calculateAverage(int a[], int size) { 
    int s = calculateSum(a, size); 
    return (double) s / size; 
    //return calculateSum(a, size) / size; 
}

int main() { 
    int arr[] = {10, 21, 93, 26, 154};
    int sum = calculateSum(arr, 5); 
    double avg = calculateAverage(arr, 5); 
    cout << sum << ", " << avg << endl; 
}
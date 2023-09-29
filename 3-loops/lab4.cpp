//Write a C++ program that receives number of items
// in an invoice from the user (let's say there are
// n items) and then receives price of those n items 
// from the user and prints total of prices of all items. 
// Use a while loop to solve this problem. 
#include<iostream> 
using namespace std; 
int main() { 
    int itemCount; 
    int price; 
    int totalSum = 0;
    int counter = 1; 
    cout << "How many items in the invice? "; 
    cin >> itemCount; 
    while (counter <= itemCount) { 
        cout << "What is the price of item #" << counter << " ?"; 
        cin >> price; 
        totalSum += price;
        counter++;
    }
    cout << "total sum is: " << totalSum << "\n";
}
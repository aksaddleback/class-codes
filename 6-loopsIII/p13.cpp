// Write a C++ program that receives the number of students  and, for each student, 
// receives the number of courses and their respective grades (ranging from 0 to 20). 
// The program should calculate and print the average grade for each student.

#include<iostream> 
using namespace std; 
int main() { 
    int numOfStudents; 
    cin >> numOfStudents; 
    while (numOfStudents > 0) { 
        int courseCount; 
        cin >> courseCount; 
        int i = 0; 
        int sum = 0;
        while (i < courseCount) { 
            int grade; 
            cin >> grade; 
            sum += grade; 
            i++;
        }
        cout << "avg for this student is: " << sum / courseCount << endl; 
        numOfStudents--; 
    }   
}
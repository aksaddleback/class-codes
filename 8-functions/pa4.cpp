#include<iostream> 
using namespace std; 

void multiplyAndPrint(int X[2][3], int Y[3][2]) { 
    int res[2][2] = { 
        {0, 0}, 
        {0, 0}
    };

    for(int i = 0; i < 2; i++) {            // for each row in first matrix
        for(int j = 0; j < 2; j++) {        // for each col in second matrix 
            for(int k = 0; k < 3; k++) {
                res[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    for(int i = 0; i < 2; i++) {            
        for(int j = 0; j < 2; j++) {        
            cout << res[i][j] << " ";
        }
        cout << endl; 
    }
}

int main() { 
    int A[2][3] = {
        {3, 2, 5}, 
        {3, 5, 4}
    }; 
    int B[3][2] = { 
        {5, 1}, 
        {2, 2}, 
        {9, 3}
    };

    multiplyAndPrint(A, B);
}
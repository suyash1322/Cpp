#include <iostream>
#include <algorithm> // for swap
using namespace std;

void rotateMatrix(int matrix[10][10], int n) {
    // Step 1: Transpose the matrix
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            // Swap matrix[i][j] with matrix[j][i]
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            // Swap first with last in each row
            swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
    }
}

void printMatrix(int matrix[10][10], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    
    int matrix[10][10];
    
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nOriginal Matrix:" << endl;
    printMatrix(matrix, n);
    
    rotateMatrix(matrix, n);
    
    cout << "\nRotated Matrix (90° clockwise):" << endl;
    printMatrix(matrix, n);
    
    return 0;
}
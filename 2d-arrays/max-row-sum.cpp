#include<iostream>
using namespace std;

int GetMaxRowSum(int matrix[3][3] ,int rows ,int cols){
    int MaxRowSum = -10000;

    for( int i = 0 ; i < rows; i++){
        int rowSum = 0;
        for (int j = 0 ; j < cols ; j++){
            rowSum += matrix[i][j];
        }
        MaxRowSum = max(rowSum , MaxRowSum);
    }
    return MaxRowSum;
}



int main(){
    int matrix[3][3] = { {1 , 2 , 3} , { 4, 5 ,6} , { 7 ,8 ,9}};
    int rows = 3;
    int cols = 3;

    cout << GetMaxRowSum(matrix , rows ,cols) << endl;
    return 0;
}
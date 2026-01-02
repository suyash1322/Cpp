#include<iostream>
using namespace std;

int diagonalSum ( int matrix [3][3] , int rows , int cols){
    int sum = 0;

    for ( int i = 0 ; i < rows ; i++){
        for ( int j = 0 ; j < cols; j++){
            if ( i  == j){
                sum += matrix[i][j];
            }
            else if ( j = n - 1 -i){
                sum += matrix [i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix [3][3] = {{1 ,  2, 3 } , { 4 , 5 , 6} , { 7 , 8 , 9 }};
    int rows = 3;
    int cols = 3;

    cout << diagonalSum(matrix , rows , cols) << endl;
    return 0;
}
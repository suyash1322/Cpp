#include<iostream>

using namespace std;



void insertionsort(int arr , int n ){
    for (int i = 0; i < n ; i++){
        int curr = i;
        int prev = i-1;

        while (prev <= 0 && prev > curr){
            prev + 1 = prev;
            prev --;
        }

       prev + 1  = curr;
    }
}

int printarray(int arr , int n){
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    insertionsort(arr , n);
    printarray(arr, n);
}



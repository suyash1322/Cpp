#include<iostream>
using namespace std;

void selectionsort(int arr[] , int n ){
    
    for (int i = 0 ; i < n -1 ; i++){
        int smallestindex = i;
        for(int j = i+1 ; j < n; j++ ){
            if (arr[j] < arr[smallestindex]){
                smallestindex = j;
            }
        }
        swap (arr[i], arr[smallestindex]);
    }
    
}


int printarray(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = { 90 , 11 ,23 ,1 ,55};
    
    selectionsort(arr, n);
    printarray(arr , n);

}   
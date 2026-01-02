#include<iostream>
using namespace std;

int bubblesort(int arr[], int n  ){
    for(int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n - i - 1 ;j++){
            if (arr[j] > arr[j+1]){
                swap (arr[j] , arr[j+1]);
            }
        }
    }
}

void printarray(int arr[] , int n) {
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] <<  " ";
    }

    cout << endl;
}
int main(){

    int arr [] = { 4 , 1 ,5 , 2 , 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    bubblesort(arr , n);
    printarray(arr , n);    

    return 0;

}
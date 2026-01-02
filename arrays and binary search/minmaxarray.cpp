#include<iostream>
using namespace std;

// we define a structure named as pair jiske andar wee have a integer min and max part
struct pair  {
    int min; 
    int max;
}

// pair is the custom datatype we just created above and findminmax is the function 

pair findminmax(int arr[] , int n){
    
    Pair result ; // result is a variable of type pair jiske andar min and max krke do integers honge
    int i ; 


    if (n % 2 == 0){
        if (arr [0] > arr[1]){
            result.min = arr[1];
            result.max = arr[0];
        }else {
            result.min = arr[0];
            result.max = arr[1];

        }
            i = 2;
    }

    else {
        result.min = arr[0];
        result.max = arr[1];
    }
}



int main() {

    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr);

    Pair result = findMinMax(arr, n);

    cout << "Minimum: " << result.min << endl;
    cout << "Maximum: " << result.max << endl;

    return 0;

}
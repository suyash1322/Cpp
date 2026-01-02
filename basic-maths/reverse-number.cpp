#include<iostream>
using namespace std;

int reverse(int n){
    int reversedNumber = 0;
    while ( n != 0){
        int digits = n % 10;
        

        reversedNumber = (reversedNumber * 10) + digits;
        n = n / 10;
    }
    return reversedNumber;
}


int main(){
    int n = 7532;

    cout << reverse(n) << endl;

}
#include<iostream>
using namespace std;

bool isArmstrong(int n ){
    int copy = n;
    int sumofcubes = 0;

    while ( n != 0){
        int dig = n % 10;
        sumofcubes += ( dig * dig * dig);

        n = n / 10;
    }
    return sumofcubes == copy;
}

int main(){
    int n = 153;

    if(isArmstrong(n)){
        cout << "is armstrong \n";
    }
    else {
        cout << "Not armstrong \n";
    }

    return 0;
}
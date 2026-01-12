#include<iostream>
using namespace std;

int main(){
    int k , n , w;
    cin >> k >> n >> w;

    int totalCost = k*w*(w+1)/2;

    int borrow = totalCost - n;

    if (borrow > 0){
        cout << borrow << endl;
    }else {
        cout << 0 << endl;
    }

    return 0;
}
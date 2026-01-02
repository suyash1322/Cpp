#include<iostream>
using namespace std;

int digits(int n ){
    
    while ( n != 0){
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
        
    }
 
}




int main() {
    int n = 123123;
    
    digits(n);
    return 0;
}
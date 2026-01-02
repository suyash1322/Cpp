#include<iostream>
using namespace std;





int gcd(int a , int b){ 
    while ( a > 0 && b > 0){
        if ( a > b){
            a = a % b;
        }else
        {
            b = b % a;
        }
    }
    if ( a == 0 ){
        return b;
    }
    else{
        return a;
    }
}


int lcm ( int a , int b ){
    int lcm = 0;
    int c = a * b;
    int g = gcd(a , b);

    lcm = c / g;
    return lcm;
}


int main(){
    int a = 24 , b = 6;
    
    cout << lcm ( a , b ) << endl;
    return 0;

}
#include<iostream>
using namespace std;


int main(){
    int n; 
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for ( char c : s){
        if ( c == 'A'){
            count++;
        }
         else {
            count--;
        }
    }
    if(count>0) cout << "Anton";
    else if ( count < 0) cout << "Danik";
    else cout << "Friendship";



    return 0;

}
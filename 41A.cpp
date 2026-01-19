#include<iostream>
using namespace std;


int main()
{
    string s,t;

    cin >> s >> t;
    int n = s.length();
    string x;
    for ( int i = n-1; i >= 0 ;i-- ){
        x.push_back(s[i]);
    }

    if ( t == x){
        cout <<"YES" <<endl;

    }else {
        cout << "NO" << endl;
    }

    return 0;
}
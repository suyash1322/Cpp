#include<iostream>
#include <string>

using namespace std;

int main() {
    string str = "suyash rao";
    
    int st = 0 , end = str.size() - 1;
    while ( st < end ) {
        swap ( str[st] , str[end]);
        st++ , end--;
    }

    cout << str << endl;
    return 0;
}
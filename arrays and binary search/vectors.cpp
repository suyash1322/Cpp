#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    
    vec.push_back(25);
    
    cout << "After push back size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec.back() << endl;

    return 0;
}
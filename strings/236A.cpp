#include<iostream>
#include<string>
#include<set>

using namespace std;

int distinctChar(string s){

}   

int main(){
    string s;
    cin >> s;

    int count = 0;
   

   set <char> distinctChar(s.begin() , s.end());
    if ( distinctChar.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else {
        cout << "IGNORE HIM!";
    }

  return 0;
}
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
    string s ;

    cout <<"Enter the string :" << endl;
    getline(cin ,s );
    

    string ans = "";

    int n = s.length();

      reverse(s.begin(), s.end());

    for ( int i = 0 ; i < n ; i++){
        string word = "";
        while ( i < n && s[i] != ' '){
            word += s[i];
            i++;
        }

        reverse( word.begin() , word.end());
            if(word.length() > 0){
                if (!ans.empty()){
                    ans += ' ';
                }
                ans += word;
            }
        
        
    }
   
    cout << "the reversed string is :" << ans << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of digits: ";
    cin >> n;
    
    vector<int> digits(n);
    
    cout << "Enter " << n << " digits (space separated): ";
    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    
    cout << "\nOriginal number: ";
    for(int digit : digits) {
        cout << digit;
    }
    cout << endl;
    
    for(int i = n-1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;
            
            cout << "After adding one: ";
            for(int digit : digits) {
                cout << digit;
            }
            cout << endl;
            
            return 0;
        }
        digits[i] = 0;
    }
    
    digits.insert(digits.begin(), 1);
    
 
    cout << "After adding one: ";
    for(int digit : digits) {
        cout << digit;
    }
    cout << endl;
    
    return 0;
}
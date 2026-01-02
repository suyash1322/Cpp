#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindromeAlphanumeric(string s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        
        // Compare (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = "12321";
    string test4 = "No 'x' in Nixon";
    string test5 = "hello";
    
    cout << "\"" << test1 << "\" is palindrome: " 
         << (isPalindromeAlphanumeric(test1) ? "true" : "false") << endl;
    
    cout << "\"" << test2 << "\" is palindrome: " 
         << (isPalindromeAlphanumeric(test2) ? "true" : "false") << endl;
    
    cout << "\"" << test3 << "\" is palindrome: " 
         << (isPalindromeAlphanumeric(test3) ? "true" : "false") << endl;
    
    cout << "\"" << test4 << "\" is palindrome: " 
         << (isPalindromeAlphanumeric(test4) ? "true" : "false") << endl;
    
    cout << "\"" << test5 << "\" is palindrome: " 
         << (isPalindromeAlphanumeric(test5) ? "true" : "false") << endl;
    
    return 0;
}


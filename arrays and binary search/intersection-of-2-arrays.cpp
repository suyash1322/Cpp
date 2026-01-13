#include <iostream>
#include <vector>
using namespace std;

int intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    
    for (int i = 0; i < nums1.size(); i++) {
        // For each element in nums1, check if it exists in nums2
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                // Check if it's already in result (avoid duplicates)
                bool alreadyExists = false;
                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == nums1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    result.push_back(nums1[i]);
                }
                break; // Found in nums2, move to next nums1 element
            }
        }
    }
    
    return result;
}


int main(){
    vector <int> nums1 = { 1 , 2, 3 ,4 };
    vector <int> nums2 = { 2, 3 ,4 , 5 };

    cout << intersection(nums1, nums2) << endl;
    return 0;
}
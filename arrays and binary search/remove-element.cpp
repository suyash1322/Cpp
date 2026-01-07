// LEETCODE - 26.

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector <int> nums, int val){
    int k = 0 ; 
    for ( int i = 0; i < nums.size(); i++){
        if (nums[i] != val){
            
            k++;
        }
    }
    return k;
}


int main(){
    vector <int> nums = { 1 , 1 , 2 ,3 ,5 };
    int val = 1;


    cout << removeDuplicate(nums,val) <<endl;

    return 0;
}
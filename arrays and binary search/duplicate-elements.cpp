// The array must be a sorted array


#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int> nums){
    if(nums.empty()){
        return 0;
    }

    int k = 1 ;
    for ( int i = 1; i < nums.size(); i++){
        if (nums[i] != nums[i-1]){
            nums[k]= nums[i];
            k++;
        }
    }
    return k;
}


int main(){


    vector <int> nums = {1 , 1, 2 , 3};
    cout << duplicate(nums) << endl;
    return 0;
}
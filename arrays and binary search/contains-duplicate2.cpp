#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int> nums, int k)
{
    for (int st = 0; st < nums.size(); st++)
    {
        int end = st + 1;

        while (end < nums.size() && abs(end - st) <= k)
        {
            if (nums[st] == nums[end])
            {
                return true;
            }
            end++;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 0, 1, 1};
    int k = 2;

    cout << duplicate(nums, k) << endl;
    return 0;
}
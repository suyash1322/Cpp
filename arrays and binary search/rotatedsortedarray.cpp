#include <iostream>
#include <vector>
using namespace std;

int rotatedsortedarray(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar)
        {
            return mid;
        }

        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= tar && tar <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
            else
            {
                if (arr[mid] <= tar && tar <= arr[end]) // right sorted array
                {
                    st = mid + 1; // right side
                }
                else
                {
                    end = mid - 1; // left side
                }
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int tar = 0;

    cout << rotatedsortedarray(arr, tar) << endl;
}
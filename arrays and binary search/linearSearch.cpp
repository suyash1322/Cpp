#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int tar)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == tar)
        {
            return i;
        }
    }
}

int main()
{
    vector<int> arr = {1, 22, 41, 112, 11, 110};
    int tar = 112;
    cout << linearSearch(arr, tar) << endl;
}
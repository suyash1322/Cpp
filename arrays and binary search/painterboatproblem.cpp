#include <iostream>
#include <vector>
using namespace std;

int mintimetopaint(vector<int> &arr, int n, int m)
{
    sum = 0, maxval = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }
    st = 0, end = n - 1;
}

int main()
{
    vector<int> arr = {40, 30, 20, 10};
    int n = 4, m = 2;

    cout << mintimetopaint(arr, n, m) << endl;
    return 0;
}
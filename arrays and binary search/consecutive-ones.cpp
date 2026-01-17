#include <iostream>
#include <vector>
using namespace std;

int consecutiveOnes(vector<int> digits)
{
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] == 1)
        {
            currentCount += 1;
            maxCount = max(currentCount, maxCount);
        }
        else
        {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> digits = {1, 0, 1, 1, 1};
    cout << consecutiveOnes(digits) << endl;
    return 0;
}
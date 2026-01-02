#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;

    cout << "enter a positive integer : ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative integers";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << "The  factorial of the number is " << fact;
    }

    return 0;
}
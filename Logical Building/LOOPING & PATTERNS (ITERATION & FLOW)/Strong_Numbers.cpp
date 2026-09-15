#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

string checkStrongNumber(int num)
{
    int original = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;

        sum += factorial(digit);

        num /= 10;
    }

    if (sum == original)
    {
        return "Strong Number";
    }
    else
    {
        return "Not a Strong Number";
    }
}

int main()
{
    int num;
    cin >> num;

    cout << checkStrongNumber(num) << endl;

    return 0;
}
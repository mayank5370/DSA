#include <bits/stdc++.h>
using namespace std;

int lcm(int num1, int num2)
{
    int originalNum1 = num1;
    int originalNum2 = num2;

    while (num2 != 0)
    {
        int remainder = num1 % num2;

        num1 = num2;
        num2 = remainder;
    }

    int gcd = num1;

    int lcm1 = (originalNum1 / gcd) * originalNum2;

    return lcm1;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << lcm(num1, num2) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int hcf(int num1, int num2)
{
    while (num2 != 0)
    {
        int remainder = num1 % num2;

        num1 = num2;
        num2 = remainder;
    }

    return num1;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << hcf(num1, num2) << endl;
    return 0;
}
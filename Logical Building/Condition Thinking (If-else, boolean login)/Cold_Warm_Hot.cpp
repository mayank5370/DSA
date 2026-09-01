#include <bits/stdc++.h>
using namespace std;

string tempChecker(int temp)
{
    if (temp >= 0 && temp <= 10)
    {
        return "Cold";
    }
    else if (temp >= 11 && temp <= 50)
    {
        return "Warm";
    }
    else if (temp >= 51 && temp <= 100)
    {
        return "Hot";
    }
    else
    {
        return "Invalid Temperature";
    }
}

int main()
{
    int temperature;

    cin >> temperature;

    cout << tempChecker(temperature) << endl;

    return 0;
}
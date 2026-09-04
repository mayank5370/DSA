#include <bits/stdc++.h>
using namespace std;

//Check three digits are distinct or not.

string distinctDigit(int num){
    int ones = num % 10;
    num = num/10;

    int tenth = num % 10;
    num = num / 10;

    int hundred = num;

    if(ones == tenth && tenth == hundred && hundred == ones){
        return "The digits are same";
    }
    else{
        return "The digits are distinct";
    }
}

int main(){
    int num;
    cin >> num;

    cout << distinctDigit(num) << endl;
}
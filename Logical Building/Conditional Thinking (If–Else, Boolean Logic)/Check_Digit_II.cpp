#include <bits/stdc++.h>
using namespace std;

string checkDigit(int num){
    int ones = num % 10;
    num = num/10;

    int tenth = num % 10;
    num = num/10;

    int hundred = num % 10;

    if(tenth > ones && tenth > hundred){
        return "Middle one is the largest digit";
    }
    else if(tenth < ones && tenth < hundred){
        return "Middle one is the lowest digit";
    }
    else{
        return "Middle one is neither largest nor lowest";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkDigit(num) << endl;
}
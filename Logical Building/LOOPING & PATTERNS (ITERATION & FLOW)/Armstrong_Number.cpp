#include <bits/stdc++.h>
using namespace std;

string checkArmstrong(int num){
    int digits = 0;
    int sum = 0;

    int temp1 = num;
    while(temp1 > 0){
        int last = temp1 % 10;
        digits++;
        temp1 /= 10;
    }

    int temp2 = num;
    while(temp2 > 0){
        int digit = temp2 % 10;
        sum += pow(digit, digits);

        temp2 /= 10;
    }

    if(num == sum){
        return "Armstrong Number";
    }
    else{
        return "Not a Armstrong Nummber";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkArmstrong(num) << endl;
    return 0;
}
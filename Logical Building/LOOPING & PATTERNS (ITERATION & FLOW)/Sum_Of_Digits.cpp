#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
     int sum = 0;
    while(num > 0){
       
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main(){
    int num;
    cin >> num;

    cout << sumOfDigits(num) << endl;

    return 0;
}
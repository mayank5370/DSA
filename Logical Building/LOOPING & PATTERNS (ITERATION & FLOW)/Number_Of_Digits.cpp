#include <bits/stdc++.h>
using namespace std;

int numberOfDigits(int num){
    int digits = 0;
    while(num >= 0){
        int digit = num % 10;
        digits++;

        num /= 10;

        num --;
    }

    return digits;
}

int main(){
    int num;
    cin >> num;

    cout << numberOfDigits(num) << endl;

    return 0;
}
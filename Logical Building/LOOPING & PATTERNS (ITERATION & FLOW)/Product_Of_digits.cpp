#include <bits/stdc++.h>
using namespace std;

int prodcutOfDigits(int num){
    int product = 1;

    while(num > 0){
        int digit = num % 10;
        product *= digit;

        num /= 10;
    }

    return product;
}

int main(){
    int num;
    cin >> num;

    cout << prodcutOfDigits(num) << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string checkSumProduct(int num){
    int sum = 0;
    int product = 1;

    while(num > 0){
        int digit = num % 10;

        sum += digit;
        product *= digit;

        num /= 10;
    }

    if(sum > product){
        return "Sum is greater";
    }
    else {
        return "Product is greater";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkSumProduct(num) << endl;

    return 0;
}
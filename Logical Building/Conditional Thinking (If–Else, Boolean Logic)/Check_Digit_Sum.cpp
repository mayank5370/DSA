#include <bits/stdc++.h>
using namespace std;

string checkSum(int num){
    int last_digit = num % 10;
    num = num/10;

    int middle_digit = num % 10;
    num = num/10;

    int first_digit = num % 10;

    if((last_digit + first_digit) == middle_digit){
        return "The sum of first and last digit of the number is equal to the middle digit";
    }
    else {
        return "The sum of first and last digit is not equal to the middle digit";
    }
}


int main(){
    int num;
    cin >> num;

    cout << checkSum(num) << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


string checkNumber(int num1, int num2){
    if(num1 % 2 == 0 && num2 % 2 == 0){
        return "Both are even numbers";
    }
    else if(num1 % 2 != 0 && num2 % 2 != 0){
        return "Both are odd numbers";
    }
    else {
        return "One is Even and one is Odd";
    }
}


int main(){
    int num1, num2;
    cin >> num1;
    cin >> num2;

    cout << checkNumber(num1, num2) << endl;
}
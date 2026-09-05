#include <bits/stdc++.h>
using namespace std;

string checkMultiple(int num){
    if(num % 7 == 0){
        return "Number is Divisible by 7";
    }
    else if(num % 10 == 7){
        return "Number ends with digit 7";
    }
    else{
        return "Not divisible by 7 nor ending with 7";
    }    
}

int main(){
    int num;
    cin >> num;

    cout << checkMultiple(num) << endl;
}
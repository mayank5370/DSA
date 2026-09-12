#include <bits/stdc++.h>
using namespace std;

string perfectNumber(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    cout << sum << endl;
    if(sum == num){
        return "The number is Perfect Number";
    }
    else{
        return "The number is not a Perfect Number";
    }
}

int main(){
    int num;
    cin >> num;

    cout << perfectNumber(num) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string checkPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return "The number is not prime";
        }
        else{
            return "The number is prime";
        }
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkPrime(num) << endl;

    return 0;
}
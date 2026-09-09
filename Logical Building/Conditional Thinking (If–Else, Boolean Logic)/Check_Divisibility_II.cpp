#include <bits/stdc++.h>
using namespace std;

string checkDivisible(int num){
    if(num % 3 == 0 && num % 5 == 0){
        return "FizzBuzz";
    }
    else if(num % 3 == 0){
        return "Fizz";
    }
    else if(num % 5 == 0){
        return "Buzz";
    }
    else {
        return "Not divisible from both";
    }
}


int main(){
    int num;
    cin >> num;

    cout << checkDivisible(num) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string sumNumber(int num1, int num2){
    int sum = num1 + num2;
    if(num1 > 0 && num2 > 0 && sum < 100){
        return "Both the number are positive and their sum is less than 100";
    }
    else {
        return "The pair is not valid";
    }
}

int main(){
    int num1, num2;
    
    cin >> num1;
    cin >> num2; 

    cout << sumNumber(num1, num2) << endl;
}
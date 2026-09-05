#include <bits/stdc++.h>
using namespace std;

string checkDigit(int num){
    if(num >= 0 && num <= 9){
        return "Single Digit number";
    }
    else if(num >= 10 && num <=99){
        return "Double Digit number";
    }
    else{
        return "Multivalued Digit";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkDigit(num) <<endl; 
}
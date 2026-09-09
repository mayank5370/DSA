#include <bits/stdc++.h>
using namespace std;

string checkPyth(int num1, int num2, int num3){
    int num1Square = num1*num1;
    int num2Square = num2*num2;
    int num3Square = num3*num3;  
    

    if(num1Square == num2Square + num3Square || num2Square == num1Square + num3Square || num3Square == num1Square + num2Square){
        return "The three number can for Pythgorus triplet";
    }
    else {
        return "They can't for the triplet";
    }
}

int main(){
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    cout << checkPyth(num1, num2, num3) << endl;
}
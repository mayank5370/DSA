#include <bits/stdc++.h>
using namespace std;

string checkDigit(int num){
    int ones = num % 10;
    num = num/10;

    int tenth = num % 10;
    num = num/10;

    int hundred = num % 10;
    num = num/10;

    int thousand = num % 10;

    if(ones == thousand){
        return "First and last digits are equal";
    }
    else{
        return "First and last digits are distinct";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkDigit(num) << endl;

}
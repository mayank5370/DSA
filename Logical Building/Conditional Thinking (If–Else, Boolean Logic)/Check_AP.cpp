#include <bits/stdc++.h>
using namespace std;

string checkAP(int num1, int num2, int num3){
    if((num2 - num1) == (num3 - num2)) {
        return "The numbers are in AP";
    }
    else{
        return "The numbers are not in AP";
    }
}


int main(){
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << checkAP(num1, num2, num3) << endl;

    return 0;
}
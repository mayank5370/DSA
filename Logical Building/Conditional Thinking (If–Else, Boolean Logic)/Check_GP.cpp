#include <bits/stdc++.h>
using namespace std;

string checkGP(int num1, int num2, int num3){
    if((num2/num1) == (num3/num1)){
        return "The numbers are in GP";
    }
    else{
        return "The numbers are not in GP";
    }
}

int main(){
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout << checkGP(num1, num2, num3) << endl;
    
    return 0;
}
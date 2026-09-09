#include <bits/stdc++.h>
using namespace std;

int medianOf3(int num1, int num2, int num3){
    if(num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3){
        return num1;
    }
    else if(num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main(){
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    cout << medianOf3(num1, num2, num3) << endl;

    return 0;
}
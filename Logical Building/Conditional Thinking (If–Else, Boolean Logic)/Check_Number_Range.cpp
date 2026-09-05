#include <bits/stdc++.h>
using namespace std;


string checkRange(int num){
    if(num >= 100 && num <= 999){
        return "The number is in the range [100, 999]";
    }
    else {
        return "The number is not in the range";
    }
}

int main(){
    int num;
    cin >> num;

    cout << checkRange(num) << endl;
}
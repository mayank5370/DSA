#include <bits/stdc++.h>
using namespace std;

string moneyDistribution(int money){
    if(money % 2000 == 0 && money % 500 == 0 && money % 100 == 0){
        return "The money is evenly divided between 2000, 500 & 100 rupee notes";
    }
    else{
        return "The money can't divided evenly";
    }
}

int main(){
    int money;
    cin >> money;

    cout << moneyDistribution(money) << endl;
}
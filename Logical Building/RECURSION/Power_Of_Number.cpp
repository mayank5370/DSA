#include <bits/stdc++.h>
using namespace std;

int powerNumber(int num, int pow){
    if(pow == 0){
        return 1;
    }

    int ans = num * powerNumber(num, pow - 1);
    return ans;
}

int main(){
    int num, pow;
    cin >> num;
    cin >> pow;

    cout << powerNumber(num, pow) << endl;

    return 0;
}
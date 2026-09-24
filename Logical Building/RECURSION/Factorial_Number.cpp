#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num == 1){
        return 1;
    }

    int ans = num * fact(num - 1);

    return ans;
}

int main(){
    int num;
    cin >> num;

    cout << fact(num) << endl;

    return 0;
}
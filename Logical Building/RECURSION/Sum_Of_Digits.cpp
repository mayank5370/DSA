#include <bits/stdc++.h>
using namespace std;

int digitSum(int num){
    if(num == 0){
        return 0;
    }

    int digit = num % 10;
    int ans = digit + digitSum(num / 10);

    return ans;
}

int main(){
    int num;
    cin >> num;

    cout << digitSum(num) << endl;

    return 0;
}
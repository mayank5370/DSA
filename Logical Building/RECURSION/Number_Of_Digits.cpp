#include <bits/stdc++.h>
using namespace std;

int digits(int num){
    if(num == 0){
        return 0;
    }

    int digit = num % 10;
    return 1 + digits(num / 10);
}

int main(){
    int num;
    cin >> num;

    cout << digits(num) << endl;

    return 0;
}
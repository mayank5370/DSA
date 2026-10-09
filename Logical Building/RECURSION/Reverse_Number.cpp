#include <bits/stdc++.h>
using namespace std;

int reverse(int num, int rev){
    if(num == 0){
        return rev;
    }
    
    int digit = num % 10;
    rev = rev * 10 + digit;

    return reverse(num / 10 , rev);
}

int main(){
    int num;
    cin >> num;

    cout << reverse(abs(num) , 0) << endl;

    return 0;
}
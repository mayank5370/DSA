#include <bits/stdc++.h>
using namespace std;

bool palNum(int x){
    int temp = x;
    int rev = 0;

    while(temp != 0){
        int last_digit = temp%10;
        rev = rev*10 + last_digit;
        temp = temp/10;
    }

    return (rev == x);
}

int main(){
    int n;
    cin>>n;
    cout<<palNum(n)<<endl;
} 
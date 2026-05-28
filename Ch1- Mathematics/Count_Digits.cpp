#include <bits/stdc++.h>
using namespace std;

int countDigits(int x){
    int c = 0;
    while(x>0){
        x = x/10;
        c++;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n)<<endl;
}
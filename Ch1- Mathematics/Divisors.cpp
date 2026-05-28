#include <bits/stdc++.h>
using namespace std;

void divisor(int n){
    for(int i = 1; i*i<n; i++){
        if(n%i == 0){
            cout<<i<<endl;
            if(i!=n/i){
            cout<<(n/i)<<endl;
        }
    }


    }
}

int main(){
    int a;
    cin>>a;
    divisor(a);
}
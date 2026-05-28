#include <bits/stdc++.h>
using namespace std;

void pFactor(int n){
    if(n<=1){
        return;
    }
    for(int i = 2; i*i<=n; i++){
        while(n%i==0){
            cout<<i<<endl;
            n = n/i;
        }
    }
    if(n>1){
        cout<<n<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pFactor(n);
}


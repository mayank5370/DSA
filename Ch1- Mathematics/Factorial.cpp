#include <bits/stdc++.h>
using namespace std;

long long Fact(long x){
    if (x==0){
        return 1;
    }

    return x * Fact(x-1);
}

int main(){
    long long n;
    cin>>n;
    cout<<Fact(n)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

int joseuph(int n, int k){
    if(n==1){
        return 0;
    }
    return (joseuph(n-1,k) + k) % n;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<joseuph(n,k)<<endl;
}
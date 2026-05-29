#include <bits/stdc++.h>
using namespace std;

int getRope(int n, int a, int b, int c){
    if(n==0) return 0;
    if(n<0) return -1;

    int res = max(getRope(n-a,a,b,c), getRope(n-b,a,b,c), getRope(n-c,a,b,c));

    if(res == -1){
        return -1;
    }
    return res+1;
}

int main(){
    int len,s1,s2,s3;
    cin>>len>>s1>>s2>>s3;
    cout<<getRope(len,s1,s2,s3)<<endl;
}


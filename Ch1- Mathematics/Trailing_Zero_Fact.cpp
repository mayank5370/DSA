#include <bits/stdc++.h>
using namespace std;

int TrailingZero(int x){
    int count = 0;
    for(int i = 5; i<=x; i=i*5){
        count = count + (x/i);  //-> count the number of 5's occur in the sequence
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<TrailingZero(n)<<endl;
}


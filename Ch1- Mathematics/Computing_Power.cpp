#include <bits/stdc++.h>
using namespace std;

int comPower(int a, int b){
    if(b==0){
        return 1;
    }

    int temp = comPower(a,b/2);
    temp = temp*temp;

    if(b%2 ==0){
        return temp;
    }
    else{
        return temp*a;
    }
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<comPower(n1,n2)<<endl;
}

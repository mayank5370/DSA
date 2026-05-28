#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
    if(n==0){
        return;
    }
    printNum(n-1);
    cout<<n<<endl;
}

int main(){
    int num;
    cin>>num;
    printNum(num);
}
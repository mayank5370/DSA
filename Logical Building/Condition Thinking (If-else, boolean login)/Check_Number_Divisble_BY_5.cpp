#include <bits/stdc++.h>
using namespace std;

string divisibleBy5(int num){
    if(num%5 == 0){
        return "Divisible By 5";
    }
    else {
        return "Not Divisible By 5";
    }
}

int main(){
    int num;
    cin>>num;
    cout<<divisibleBy5(num)<<endl;
}
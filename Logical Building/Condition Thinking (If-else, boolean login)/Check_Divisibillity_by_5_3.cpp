#include <bits/stdc++.h>
using namespace std;

string divisibility(int num){
    if(num%5 == 0 && num%3==0){
        return "Divisible by both 5 and 3";
    }
    else{
        return "Not divisible by both Numbers";
    }
}

int main(){
    int num;
    cin>>num;
    cout<<divisibility(num)<<endl;
} 
#include <bits/stdc++.h>
using namespace std;

string EvenOdd(int num){
    if(num%2 == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
}

int main(){
    int number;
    cin>>number;
    cout<<EvenOdd(number)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

//Check a number is +ve, -ve or zero.

string checkInt(int number){
    if(number > 0){
      return "Positive";  
    }
    else if(number < 0){
        return "Negative";
    }
    else{
        return "Zero";
    }
}

int main(){
    int num; 
    cin>>num;
    cout<<checkInt(num)<<endl;
}
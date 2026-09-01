#include <bits/stdc++.h>
using namespace std;

string Largest(int num1, int num2){
    if(num1 > num2){
        return "First number is larger than second";
    }
    else{
        return "Second number is larger than first";
    }
}


int main(){
    int First_Number;
    int Second_Number;
    cin >> First_Number;
    cin >> Second_Number;
    cout<<Largest(First_Number, Second_Number)<<endl;
}
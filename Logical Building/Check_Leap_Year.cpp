#include <bits/stdc++.h>
using namespace std;


string LeapYear(int year){
    if(year % 4 == 0){
        return "Leap Year";

        if(year % 400 ==0){
            return "Not Leap Year";
        }
        else {
            return "Not a Leap Year";
        }
    }
    else{
        return "Not a leap year";
    }
}

int main(){
    int year;
    cin >> year;
    cout<<LeapYear(year)<<endl;
}
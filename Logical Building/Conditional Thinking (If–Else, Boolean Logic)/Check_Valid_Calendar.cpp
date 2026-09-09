#include <bits/stdc++.h>
using namespace std;

string checkCalendar(int days, int month){
    if(days == 31){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            return "Valid Month";
        }
        else{
            return "Invalid Month";
        }
    }
    else if(days == 30){
        if(month == 4 || month == 6 || month == 9 || month == 10){
            return "Valid Month";
        }
        else{
            return "Invalid Month";
        }
    }
    else if( days == 28 || days == 29){
        if(month == 2){
            return "Valid Month";
        }
        else{
            return "Invalid Month";
        }
    }
    else {
        return "Invalid days and months";
    }   
}

int main(){
    int days;
    int month;

    cin >> days;
    cin >> month;

    cout << checkCalendar(days, month) << endl;

    return 0;
}

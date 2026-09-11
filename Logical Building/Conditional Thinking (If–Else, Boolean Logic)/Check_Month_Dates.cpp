#include <bits/stdc++.h>
using namespace std;

string checkDate(int month1, int day1 ,int month2, int day2){
    if(month1 < month2 || (month1 == month2 && day1 < day2)){
        return "First date comes first";
    }
    else if(month1 == month2 && day1 == day2){
        return "Date is same";
    }
    else{
        return "Second date comes first";
    }
}

int maine(){
    int month1, day1, month2, day2;
    cin >> day1 >> month1;
    cin >> day2 >> month2;

    cout << checkDate(month1, day1, month2, day2) << endl;
}
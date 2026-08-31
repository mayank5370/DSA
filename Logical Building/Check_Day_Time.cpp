#include <bits/stdc++.h>
using namespace std;


string checkDayTime(int time){
    if(0 <= time && time <= 11){
        return "Good Morning";
    }
    else if(12 <= time && time <= 16){
        return "Good Afternoon";
    }
    else if(17 <= time && time <= 20){
        return "Good Evening";
    }
    else if(21 <= time && time <= 23){
        return "Good Night";
    }
}

int main(){
    int time;
    cin >> time;

    cout << checkDayTime(time) << endl;
}
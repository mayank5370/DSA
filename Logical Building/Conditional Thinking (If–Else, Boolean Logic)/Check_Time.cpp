#include <bits/stdc++.h>
using namespace std;

string dayTime(int hours, int mint){
    if(hours > 0 && hours < 12){
        return "AM";
    }
    else if(hours > 12 && hours <= 24){
        return "PM";
    }
    else{
        return "Invlid Time Period";
    }
}


int main(){
    int hour, min;
    cin >> hour >> min;

    cout << dayTime(hour, min) << endl;

    return 0;
}
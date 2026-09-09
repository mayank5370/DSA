#include <bits/stdc++.h>
using namespace std;

string weekOrWeekend(int num){
    if(num == 6 || num == 7){
        return "Weekend Days";
    }else{
        return "Week Days";
    }
}

int main(){
    int days;
    cin >> days;

    cout << weekOrWeekend(days) << endl;

    return 0;
}
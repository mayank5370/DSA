#include <bits/stdc++.h>
using namespace std;

string checkGrade(int num){
    if(0 <= num && num <= 20){
        return "Grade E";
    }
    else if(21 <= num && num <= 40){
        return "Grade D";
    }
    else if(41 <= num && num <= 60){
        return "Grade C";
    }
    else if(61 <= num && num <= 80){
        return "Grade B";
    }
    else if(81 <= num && num <= 100){
        return "Grade A";
    }
    else{
        return "Invalid Marks";
    }
}


int main(){
    int number;
    cin >> number;

    cout << checkGrade(number) << endl;
}
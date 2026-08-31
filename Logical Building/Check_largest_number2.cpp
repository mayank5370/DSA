#include <bits/stdc++.h>>
using namespace std;

string Largest(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return "First number is the Largest.";
    }
    else if(num2 > num1 && num2 > num3){
        return "Second number is the Largest.";
    }
    else{
        return "Third number is the Largest.";
    }
}

int main(){
    int First_number;
    int Second_number;
    int Third_number;

    cin >> First_number;
    cin >> Second_number;
    cin >> Third_number;

    cout << Largest(First_number, Second_number, Third_number) << endl;
}
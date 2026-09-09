#include <bits/stdc++.h>
using namespace std;

string taxEligible(int age, int income){
    if(age > 18 && income > 500000){
        return "The persona is eligible for taxation";
    }
    else{
        return "The person is not eligible for taxation";
    }
}


int main(){
    int age, income;
    cin >> age;
    cin >> income;

    cout << taxEligible(age, income) << endl;

    return 0;
}


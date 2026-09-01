#include <bits/stdc++.h>
using namespace std;


string voterEligible(int age){
    if(age > 18){
        return "This person is eligible for vote";
    }
    else {
        return "This person is not eligible for vote";
    }
}


int main(){
    int age;
    cin >> age;

    cout << voterEligible(age) << endl;
}
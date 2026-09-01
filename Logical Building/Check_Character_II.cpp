#include <bits/stdc++.h>
using namespace std;


string charCheck(char c){
    if(c >= 'a' && c <= 'm'){
        return "Character lies between a and m";
    }
    else if(c >= 'n' && c <= 'z'){
        return "Character lies between n and z";
    }
    else {
        return "Invalid Character";
    }
}

int main(){
    char c;
    cin >> c;

    cout << charCheck(c) << endl;
}
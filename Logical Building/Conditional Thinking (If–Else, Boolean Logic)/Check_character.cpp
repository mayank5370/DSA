#include <bits/stdc++.h>
using namespace std;


string checkChar(char c){
    if(c >= '0' && c <= '9'){
        return "Character is a Digit";
    }
    else if(c >= 'a' && c <= 'z'){
        return "Character is a Letter";
    }
    else{
        return "Character is neither Digit nor Letter";
    }
}

int main(){
    char c;
    cin >> c;

    cout << checkChar(c) << endl;
}
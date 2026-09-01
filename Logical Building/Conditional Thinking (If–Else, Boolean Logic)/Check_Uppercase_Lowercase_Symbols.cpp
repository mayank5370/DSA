#include <bits/stdc++.h>
using namespace std;

string charChecker(char c){
    if(c >= 'A' && c <= 'Z'){
        return "Uppercase character";
    }
    else if(c >= 'a' && c <= 'z'){
        return "Lowercase character";
    }
    else if(c >= '0' && c <= '9'){
        return "Digit character";
    }
    else {
        return "Symbol";
    }
}

int main(){
    char character;
    cin >> character;
    cout << charChecker(character) << endl;
}
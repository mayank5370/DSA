#include <bits/stdc++.h>
using namespace std;

string passwordCheck(string password) {
    int len = password.length();
    
    if (len <= 8) {
        return "Invalid Password";
    }

    for (char c : password) {
        if (c >= '0' && c <= '9') {
            return "Valid Password";
        }
    }

    return "Invalid Password";
}

int main() {
    string Password;
    cin >> Password;

    cout << passwordCheck(Password) << endl;
}
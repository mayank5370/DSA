#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int factorial = 1;

    while(num >= 1){
        factorial *= num;
        num --;
    }

    return factorial;
}

int main(){
    int num;
    cin >> num;

    cout << fact(num) << endl;
    
    return 0;
}
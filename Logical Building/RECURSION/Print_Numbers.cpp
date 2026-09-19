#include <bits/stdc++.h>
using namespace std;

int printNumbers(int num){
    if(num == 0){
        return;
    }

    printNumbers(num - 1);

    cout << num << " ";
}

void main(){
    int num;
    cin >> num;

    printNumbers(num);
}
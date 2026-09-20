#include <bits/stdc++.h>
using namespace std;

int printNumbers(int num){
    if(num == 0){
        return;
    }
    cout << num << " ";
    
    printNumbers(num - 1);    
}

int main(){
    int num;
    cin >> num;

    printNumbers(num);

    return 0;
}
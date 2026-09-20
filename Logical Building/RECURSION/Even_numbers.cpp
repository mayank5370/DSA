#include <bits/stdc++.h>
using namespace std;

void evenNumbers(int num){
    if(num == 0){
        return;
    }
    
    evenNumbers(num - 1);

    if(num % 2 == 0){
        cout << num << " ";
    }
}

int main(){
    int num;
    cin >> num;

    evenNumbers(num);
    
    return 0;
}
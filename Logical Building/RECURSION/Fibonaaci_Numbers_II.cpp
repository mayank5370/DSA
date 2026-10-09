#include <bits/stdc++.h>
using namespace std;

void fibnum(int start, int second, int num){
    if(num == 0){
        return;
    }
    
    cout << start << " ";

    fibnum(second, start + second, num-1);
}

int main(){
    int num;
    cin >> num;

    fibnum(0,1,num);
}
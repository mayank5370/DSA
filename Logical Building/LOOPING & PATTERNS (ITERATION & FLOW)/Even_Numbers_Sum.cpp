#include <bits/stdc++.h>
using namespace std;

int nSum(int num){
    int sum = 0;
    while(num >= 0){
        if(num % 2 == 0){
            sum += num;
        }
        
        num --;
    }

    return sum;
}

int main(){
    int num;
    cin >> num;

    cout << nSum(num) << endl;
    
    return 0;
}
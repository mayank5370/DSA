#include <bits/stdc++.h>
using namespace std;

int DigitSum(int num){
    for(int i = 1; i <= num; i++){
        int temp = i;
        int sum = 0;
        while(temp > 0){
            int digit = temp % 10;
            sum += digit;
            
            temp = temp/10;
        }
        if(sum % 3 == 0){
            cout << i << " ";
        } 
    }

    return 0;
}

int main(){
    int num;
    cin >> num;

    DigitSum(num);

    return 0;
}
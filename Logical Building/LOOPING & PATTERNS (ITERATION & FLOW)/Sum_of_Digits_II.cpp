#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 100; i++){
        int temp = i;
        int sum = 0;

        while(temp > 0){
            int digit = temp % 10;
            temp = temp/10;

            sum += digit; 
        }

        if(sum % 2 == 0){
            cout << i << " ";
        }
    }

    return 0;
}  
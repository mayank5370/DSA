#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 500; i++){
        int temp = i;
        int rev = 0;
        while(temp > 0){
            int d = d % 10;
            rev = d + rev*10;
            int temp = temp / 10;
        }

        if(i == rev){
            cout << i << " ";
        }
    }

    return 0;
}
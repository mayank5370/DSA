#include <bits/stdc++.h>
using namespace std;

int binaryCout(int num){
    for(int i = 1; i <= num; i++){
        int temp = i;

        int count = 0;
        while(temp > 0){
            if(temp % 2 == 1){
                count++;
            }

            temp = temp/2;
        }

        if(count % 2 == 0){
            cout << i << " ";
        }

    }

    return 0;
}

int main(){
    int num;
    cin >> num;

    binaryCout(num);

    return 0;
}
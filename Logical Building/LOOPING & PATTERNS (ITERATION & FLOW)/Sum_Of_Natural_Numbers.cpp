#include <bits/stdc++.h>
using namespace std;

int natuaralSum(int num){
    int sum = 0;

    //By using for loop

    // for(int i = 1; i <= num; i++){
    //     sum += i;
    // }
    
    //By using while loop

    while(num >= 1){
        sum = sum + num;

        num --;
    }

    return sum;
}

int main(){
    int num;
    cin >> num;

    cout << natuaralSum(num) << endl;

    return 0;
}
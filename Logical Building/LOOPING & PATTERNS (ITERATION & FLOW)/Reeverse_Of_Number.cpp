#include <bits/stdc++.h>
using namespace std;

int reverseOfNummber(int num){
    int reverse_number = 0;
    while(num > 0){
        int digit = num % 10;
        reverse_number = digit + reverse_number*10;
        num /= 10;

    }

    return reverse_number;
}

int main(){
    int num;
    cin >> num;

    cout << reverseOfNummber(num) << endl;

    return 0;
}
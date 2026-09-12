#include <bits/stdc++.h>
using namespace std;

string palindromeOfNummber(int num){
    int reverse_number = 0;
    int temp = num;
    while(temp > 0){
        int digit = temp % 10;
        reverse_number = digit + reverse_number*10;
        temp /= 10;
    }

    if(reverse_number == num){
        return "The number is Palindrome";
    }
    else{
        return "The number is not Palindrome";
    }
}

int main(){
    int num;
    cin >> num;

    cout << palindromeOfNummber(num) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int smallest = 9;
    int largest = 0;

    while(num > 0){
        int digit = num % 10;

        if(digit < smallest){
            smallest = digit;
        }

        if(digit > largest){
            largest = digit;
        }

        num = num / 10;
    }

    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;

    return 0;
}
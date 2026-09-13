#include <bits/stdc++.h>
using namespace std;

int divisibleBy7(int start, int end){
    for(int i = start; i <= end; i++){
        if(i % 7 == 0){
            cout << i << " ";
        }
    }

}

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    divisibleBy7(num1 , num2);

    return 0;
}
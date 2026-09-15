#include <bits/stdc++.h>
using namespace std;

int factorialsSum(int num){
    int sum = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    return sum;
}

int main(){
    int num;
    cin >> num;

    cout << factorialsSum(num) << endl;;

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int factorials(int num){
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }

    return 0;
}

int main(){
    int num;
    cin >> num;

    factorials(num);

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int sumOfNumbers(int num){
    int sum = 0;
    if(num == 1){
        return 1;
    }
    
  int ans = sumOfNumbers(num - 1);    
    sum = ans + num;
    return sum;
}

int main(){
    int num;
    cin >> num;

   cout << sumOfNumbers(num) << endl;

    return 0;
}

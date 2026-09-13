#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int num;
    cin >> num;
    
    int sum = 0;

    int first = 0;
    int second = 1;
    for(int i = 0; i < num; i++){
        sum += first;

        int next = first + second;
        first = second;
        second = next;
    }

    cout << sum << endl;
}
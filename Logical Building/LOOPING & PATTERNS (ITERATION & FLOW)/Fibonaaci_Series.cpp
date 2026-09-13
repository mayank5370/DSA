#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int num;
    cin >> num;
    
    int first = 0;
    int second = 1;
    for(int i = 0; i <= num; i++){
        cout << first << " " ;

        int next = first + second;
        first = second;
        second = next;
    }
}
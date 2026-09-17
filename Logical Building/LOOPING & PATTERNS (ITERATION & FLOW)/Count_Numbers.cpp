#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i <= 500; i++){
        if(i % 7 == 0 && i % 5 != 0){
            cout << i << " ";
        }
    }

    return 0;

}
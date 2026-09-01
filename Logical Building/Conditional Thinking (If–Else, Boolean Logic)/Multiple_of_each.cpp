#include <bits/stdc++.h>
using namespace std;

string multipleOfEachOther(int num1, int num2){
    if(num1%num2 == 0 && num2%num1 == 0){
        return "Multiple of each other";
    }
    else{
        return "Not multiple of each other";
    }
}

int main(){
    int num1, num2;
    cin >> num1;
    cin >> num2;
    
    cout << multipleOfEachOther(num1, num2) << endl;
}
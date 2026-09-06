#include <bits/stdc++.h>
using namespace std;

string squareRoot(int num){
    bool isSquare = false;
    for(int i = 1; i*i <= num ; i++){
        if(i * i == num){
            isSquare = true;
            break;
        }
    }

    if(isSquare){
        return "Perfect Square";
    }
    else {
        return "Not a perfect sqaure";
    }

}

int main(){
    int num;
    cin >> num;

    cout << squareRoot(num) << endl;
}
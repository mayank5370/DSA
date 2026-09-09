#include <bits/stdc++.h>
using namespace std;

string checkPoints(int x, int y){
    if(x == 0 && y == 0){
        return "The point lies on the origin";
    }
    else if(x == 0){
        return "The ponit lies on the Y-axis";
    }
    else if(y == 0){
        return "The point lies on X axis";
    }
    else {
        return "The point doesn't lies on any axis";
    }
}

int main(){
    int x, y;
    cin >> x >> y;

    cout << checkPoints(x , y) << endl;

    return 0;
}
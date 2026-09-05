#include <bits/stdc++.h>
using namespace std;

string checkCord(int x, int y){
    if(x == 0 && y == 0){
        return "Origin";
    }
    if(x > 0 && y > 0){
        return "First Cordrant";
    }
    else if(x < 0 && y > 0){
        return "Second Cordrant";
    }
    else if(x < 0 && y < 0){
        return "Third Cordrant";
    }
    else if(x > 0 && y < 0){
        return "Fourth Cordrant";
    }
}

int main(){
    int x, y;    
    cin >> x;
    cin >> y;

    cout << checkCord(x, y) << endl;
}
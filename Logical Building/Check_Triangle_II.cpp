#include <bits/stdc++.h>
using namespace std;

string trianlePossible(int side1, int side2, int side3){
    if(side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1){
        if(side1 == side2 && side2 == side3 && side3 == side1){
            return "Equilateral Traingle";
        }
        else if(side1 == side2 && side2 != side3 && side1 != side3){
            return "Isosceles Triangle";
        }
        else{
            return "Scanlene Triangle";
        }
    }
    else {
        return "Triagle can't possible";
    }
}

int main(){
    int side1 , side2, side3;
    cin >> side1;
    cin >> side2;
    cin>> side3;

    cout << trianlePossible(side1, side2, side3) << endl;
}
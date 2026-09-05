#include <bits/stdc++.h>
using namespace std;

int calculateAngle(int angle1, int angle2){
    int angle3 = 180 - (angle1 + angle2);
    return angle3;
}

int main(){
    int angle1, angle2;
    cin >> angle1;
    cin >> angle2;

    cout << calculateAngle(angle1, angle2) << endl;
}
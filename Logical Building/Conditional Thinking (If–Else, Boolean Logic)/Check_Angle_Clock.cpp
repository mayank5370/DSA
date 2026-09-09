#include <bits/stdc++.h>
using namespace std;

float angleClock(int Hours, int Minutes){
    float angle = abs((30 * Hours) - (5.5 * Minutes));

    if(angle > 180) {
        angle = 360 - angle;
    }
    
    return angle;
}

int main(){
    int hours;
    int minutes;

    cin >> hours >> minutes;

    cout << angleClock(hours, minutes) << endl;

    return 0;

}
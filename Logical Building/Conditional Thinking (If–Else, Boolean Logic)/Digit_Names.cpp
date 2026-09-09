#include <bits/stdc++.h>
using namespace std;


string digitToName(int num){
    
    switch(num){
        case 1: 
            return "Monday";
            break;
        
        case 2:
            return "Tuesday";
            break;
        
        case 3: 
            return "Wednesday";
            break;

        case 4:
            return "Thursady";
            break;
        
        case 5: 
            return "Friday";
            break;

        case 6:
            return "Saturday";
            break;
        
        case 7:
            return "Sunday";
            break;
    }

    return "Invalid Input";
}

int main(){
    int days;
    cin >> days;

    cout << digitToName(days) << endl;

}
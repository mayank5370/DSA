#include <bits/stdc++.h>
using namespace std;

string checkChar(char alphabet){

    char alphabet1 = tolower(alphabet);

    if(alphabet1 == 'a' || alphabet1 == 'e' || alphabet1 == 'i' || alphabet1 == 'o' || alphabet1 == 'u'){
        return "Vowel";
    }
    else {
        return "Consonant";
    }
}

int main(){
    char c;
    cin >> c;
    cout << checkChar(c) << endl;

}

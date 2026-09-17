#include <bits/stdc++.h>
using namespace std;

int GpTerms(int first_term, int ratio, int terms){
    for(int i = first_term; i <= terms; i++){
        cout << first_term << " ";

        first_term *= ratio;  
    }

    return 0;
}

int main(){
    int first_term, ratio, terms;
    cin >> first_term >> ratio >> terms;

    cout << GpTerms(first_term, ratio, terms) << endl;
}
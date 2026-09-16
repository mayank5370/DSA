#include <bits/stdc++.h>
using namespace std;

int ApTerms(int first_terms, int diff, int terms){
    for(int i = 0; i < terms; i++){
        cout << first_terms << " ";

        first_terms += diff;
    }

    return 0;
}

int main(){
    int num;
    int differnece;
    int terms;

    cin >> num;
    cin >> differnece;
    cin >> terms;

    ApTerms(num, differnece, terms);

    return 0;
}
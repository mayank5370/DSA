#include <bits/stdc++.h>
using namespace std;

bool pal(string s, int start, int end){
    if(start>=end){
        return true;
    }
    return (s[start] == s[end]);
    pal(s, start++, end--);
}

int main(){
    string s;
    cin>>s;
    int start = 0;
    int end = s.length()-1;
    cout<<pal(s,start,end)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

//bruute force
//int lcm(int a, int b){
//         int res = max(a,b);
//         while(true){
//             if(res%a == 0 && res%b == 0){
//                 return res;
//             }
//             res++;
//         }

//         return res;
// }


//-> a*b = gcd(a,b) * lcm(a,b)
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<lcm(n1,n2)<<endl;
}
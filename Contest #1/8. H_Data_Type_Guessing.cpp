/*
             _|_
            | U |
            |   |  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
            |___|  |==============================|===~
                   ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
         "Everyone is against me, Madhav...
            ...then everyone will lose."
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, a; cin >> n >> k >> a;
    if((n*k)%a!=0){
        cout << "double\n";
    }else if(((n*k)/a)>=-2147483647 && ((n*k)/a)<=2147483647){
        cout << "int\n";
    }else {
        cout << "long long\n";
    }
    return 0;
}
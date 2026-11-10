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
    ll a,b,c,d; cin >>a>>b>>c>>d;
    ll ans = (1LL*(a%100)*(b%100)*(c%100)*(d%100))%100;
    if(ans<10){
        cout << "0" << ans << "\n";
    }else {
        cout << ans << "\n";
    }
    return 0;
}
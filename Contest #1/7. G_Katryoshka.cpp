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
    ll n, m, k; cin >> n >> m >> k;
    ll m1 = min({n,m,k});
    n -= m1;
    m -= m1;
    k -= m1;
    ll m2 =min(n/2,k);
    cout << m1+m2 << "\n";
    return 0;
}
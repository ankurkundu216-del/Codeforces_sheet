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
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    ll st = max(l1,l2);
    ll en = min(r1,r2);
    if(st<=en){
        cout << st << " " << en << "\n";
    }else {
        cout << "-1\n";
    }
    return 0;
}
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
    double a, b; cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a/b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << "\n";
    cout << "round " << a << " / " << b << " = " << round(a/b) << "\n";
}
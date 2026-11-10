/*
             _|_
            | U |
            |   |  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
            |___|  |==============================|===~
                   ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
         "Everyone is against me, Madhav...
            ...then everyone will lose."
*/

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    if (cin >> a >> b >> c >> d) {
        __int128_t la = a, lb = b, lc = c, ld = d;
        __int128_t r[] = {
            la + lb - lc,
            la - lb + lc,
            la + lb * lc,
            la * lb + lc,
            la - lb * lc,
            la * lb - lc
        };
        
        for (__int128_t x : r) {
            if (x == ld) {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    }
    return 0;
}
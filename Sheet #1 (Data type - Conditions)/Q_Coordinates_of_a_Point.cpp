/*
             _|_
            | U |
            |   |  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
            |___|  |==============================|===~
                   ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
         "Everyone is against me, Madhav...
            ...then everyone will lose."
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double x, y;
    if (cin >> x >> y) {
        if (x == 0.0 && y == 0.0) {
            cout << "Origem\n";
        } else if (x == 0.0) {
            cout << "Eixo Y\n";
        } else if (y == 0.0) {
            cout << "Eixo X\n";
        } else if (x > 0.0 && y > 0.0) {
            cout << "Q1\n";
        } else if (x < 0.0 && y > 0.0) {
            cout << "Q2\n";
        } else if (x < 0.0 && y < 0.0) {
            cout << "Q3\n";
        } else {
            cout << "Q4\n";
        }
    }

    return 0;
}
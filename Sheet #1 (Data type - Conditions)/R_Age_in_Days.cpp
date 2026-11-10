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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n; cin >>n;
    int yr = n/365;
    n%=365;
    int mo = n/30;
    int dys = n%30;
    cout << yr << " years\n";
    cout << mo << " months\n";
    cout << dys << " days\n";
    return 0;
}
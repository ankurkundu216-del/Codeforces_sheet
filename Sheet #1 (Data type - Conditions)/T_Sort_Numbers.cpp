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
    int a,b,c; cin >> a >> b >> c;
    vector<int>v={a,b,c};
    sort(v.begin(),v.end());
    for(int x : v){
        cout << x << "\n";
    }
    cout << "\n";
    cout << a << "\n" << b << "\n" << c <<"\n";
    return 0;
}
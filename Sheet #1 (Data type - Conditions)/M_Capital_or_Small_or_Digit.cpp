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
    char x; cin >> x;
    if(isdigit(x)){
        cout << "IS DIGIT\n";
    }else{
        cout << "ALPHA\n";
        if(isupper(x)){
            cout << "IS CAPITAL\n";
        }else{
            cout << "IS SMALL\n";
        }
    }
    return 0;
}
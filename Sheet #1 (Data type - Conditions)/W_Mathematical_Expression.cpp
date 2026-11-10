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
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int ans=0;
    if(s=='+'){
        ans=a+b;
    }else if(s=='-'){
        ans=a-b;
    }else if(s=='*'){
        ans=a*b;
    }
    if(ans==c){
        cout << "Yes\n";
    }else {
        cout << ans << "\n";
    }
    return 0;
}
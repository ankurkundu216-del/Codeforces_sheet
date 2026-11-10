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
    int a,b;
    char s;
    cin >> a >> s >> b;
    if(s=='+'){
        cout << a+b << "\n";
    }
    else if(s=='-'){
        cout << a-b << "\n";
    }
    else if(s=='*'){
        cout << a*b << "\n";
    }
    else if(s=='/'){
        cout << a/b << "\n";
    }
    return 0;
}
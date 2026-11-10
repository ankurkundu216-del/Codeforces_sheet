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
    long long a, b;
    char s;
    cin >> a >> s >> b;
    bool correct = 0;
    if(s=='<'){
        correct = (a<b);
    }else if(s=='>'){
        correct = (a>b);
    }else if(s=='='){
        correct = (a==b);
    }
    if(correct){
        cout << "Right\n";
    }else {
        cout << "Wrong\n";
    }
    return 0;
}
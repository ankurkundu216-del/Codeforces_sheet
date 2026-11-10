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
    double n; cin >> n;
    int int_part=n;
    double dec_part = n-int_part;
    if(dec_part==0){
        cout << "int " << int_part << "\n";
    }else{
        cout << "float " << int_part << " " << dec_part << "\n";
    }
    return 0;
}
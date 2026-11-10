#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2) << (p * 100.0) / (100 - x) << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--){

        ll x, y; cin >> y >> x;

        if (x > y){
            if (x%2)cout << x*x - y + 1LL << "\n";
            else cout << (x - 1LL)*(x - 1LL) + 1LL + y - 1LL << "\n";
        }
        else {
            if (y%2) cout << (y - 1LL)*(y - 1LL) + 1LL + x - 1LL << "\n";
            else cout << y*y - x + 1LL << "\n";
        }
    }
}



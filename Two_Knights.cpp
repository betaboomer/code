#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll k = 0;
    for (ll i = 1LL; i <= n; i++){
        if (0LL < (i - 1LL)*2LL - 1LL) k = (i - 1LL)*2LL - 1LL;
        k *= k;
        if (k) k -= 1LL;
        cout << (((i * i - 1LL)*(i*i))/2LL) - k << "\n"; 
    }
}



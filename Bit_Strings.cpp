#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int const k = 1000000007;

    int n; cin >> n;

    ll ans = 1;

    for (int i = 1; i <= n; i++){
        ans *= 2;
        ans %= k;
    }
    cout << ans << "\n";
}

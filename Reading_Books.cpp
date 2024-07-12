#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) ans += a[i];

    ans = max(a[n-1]*2, ans);

    cout << ans << "\n";
}

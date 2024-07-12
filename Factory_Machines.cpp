#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 1e18+1;
    while(l < r){
        ll mid = (l+r)/2;

        ll x = k;
        for (int i = 0; i < n; i++){
            x -= mid/a[i];
            if (x <= 0) break;
        }

        if (x <= 0LL) r = mid;
        else l = mid + 1;
    }
       
    cout << l << "\n"; 
}
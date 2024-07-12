#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n; cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (n%2LL){
        ll s = a[n/2LL], ans = 0;
        
        for(int i = 0; i < n; i++){
            ans += abs(a[i] - s);
        }

        cout << ans << "\n";
    }
    else{
        ll s1 = a[n/2 - 1], s2 = a[n/2], ans1 = 0, ans2 = 0;

        for(int i = 0; i < n; i++){
            ans1 += abs(a[i] - s1);
        }

        for(int i = 0; i < n; i++){
            ans2 += abs(a[i] - s2);
        }

        ans1 = min(ans1, ans2);

        cout << ans1 << "\n";
    }
} 
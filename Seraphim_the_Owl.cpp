#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<ll>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<ll>b(n);
        for(int i = 0; i < n; i++) cin >> b[i];

        ll ans = 0;
        for(int i = n-1; i > m-1; i--){
            if (a[i] < b[i]){
                ans += a[i];
            }
            else{
                ans += b[i];
            }
        }

        ll temp = 0, ans1 = INF; 
        for (int i = m-1; i >= 0; i--){
            ans1 = min(ans1, temp+a[i]);
            temp += b[i];
        }

        cout << ans + ans1 << "\n";
    }
} 

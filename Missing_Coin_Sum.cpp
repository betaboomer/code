#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 0; i < n; i++){
        if (a[i] <= ans + 1) ans += a[i];
        else break;
        
    }

    cout << ans + 1 << "\n";
} 
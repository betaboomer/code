#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    multiset<int>s;
    int ans = 0;
    for (int i = 0; i < n; i++){
        auto iter = s.upper_bound(a[i]);
        if (iter != s.end()){
            s.erase(iter);
        }
        else{
            ans++;
        }
        s.insert(a[i]);
    }

    cout << ans << "\n";
} 
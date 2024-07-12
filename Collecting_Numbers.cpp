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

    map <int, int> mp;
    for(int i = 0; i < n; i++) mp[a[i]] = i+1;
    
    int m = n + 1, ans = 0;
    for(int i = 0; i < n; i++){
        if (mp[i+1] < m){
            ans++;
        }
        m = mp[i+1];
    }

    cout << ans << "\n";
} 

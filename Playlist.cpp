#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    unordered_set <int> s;
    int ans = 0, l = 0;
    for (int i = 0; i < n; i++){
        if (s.find(a[i]) != s.end()){
            while(s.find(a[i]) != s.end()){
                s.erase(a[l]);
                l++;
            }
            s.insert(a[i]);
        }
        else{
            s.insert(a[i]);
        }
 
        if (s.size() > ans) ans = s.size();
    }
 
    cout << ans << "\n";
} 
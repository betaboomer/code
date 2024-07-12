#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;
 
 
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; cin >> n >> m;

    vector<int>h(n);
    vector<bool>a(n);
    for (int i = 0; i < n; i++){
        cin >> h[i];
        a[i] = false;
    }

    vector<int>t(m);
    for (int i = 0; i < m; i++) cin >> t[i];


    set<pair<int,int>>b;
    for(int i = 0; i < n; i++) b.insert({h[i],i});

    for (int i = 0; i < m; i++){
        auto k = b.lower_bound({t[i]+1,0});

        if (k == b.begin()) cout << -1 << "\n";
        else{
            k--;
            cout << (*k).first << "\n";
            b.erase(k);
        }
    }
} 
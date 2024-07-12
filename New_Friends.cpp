#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;


int n;
vector<bool> bol;
vector<vector<int>> a;

int dfs(int node) {
    if (bol[node]) return 0;
    bol[node] = 1;
    int s = 1;
    for (auto& i : a[node]) s += dfs(i);
    return s;
}

void solve() {
    int m;
    cin >> n >> m;
    a.assign(n, {}), bol.assign(n, false);
    ll cnt = 0;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        a[u - 1].push_back(v - 1);
        a[v - 1].push_back(u - 1);
    }
    for (int i = 0; i < n; ++i) {
        ll sz = dfs(i);
        cnt += sz * (sz - 1) / 2;
    }
    cout << cnt - m << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;

    while (t--) {
        solve();
    }
    return 0;
}
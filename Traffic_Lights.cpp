#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int x, n; cin >> x >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int>s;
    s.insert(0);
    s.insert(x);
    multiset<int>s1;
    s1.insert(x);

    for (int i = 0; i < n; i++){
        auto itter = s.upper_bound(a[i]);
        auto lo = prev(itter);
        
        s.insert(a[i]);

        int k = *itter-*lo;
        auto k1 = s1.find(k);
        s1.erase(k1);
        s1.insert(*itter-a[i]);
        s1.insert(a[i]-*lo);

        cout << *s1.rbegin() << " ";   
    }

    cout << "\n";
} 
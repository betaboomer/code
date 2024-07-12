#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector <ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ts = 0;
    for (int i = 0; i < n; i++) ts += a[i];

    ll m = ts;

    for (int i = 0; i < (1<<n); i++){

        ll s = 0;

        for (int j = 0; j < n; j++){
            if ((i & (1<<j)) != 0){
                s += a[j];
            }
        }

        if (abs(ts - 2LL*s) < m) m = abs(ts - 2LL*s);
    }

    cout << m << "\n";
} 
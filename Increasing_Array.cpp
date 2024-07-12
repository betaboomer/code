#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;

    vector <ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll m = 0, c = 0;
    for (int i = 0; i < n; i++){
        if (m < a[i]){
            m = a[i];
        }
        else c += m - a[i]; 
    }
    cout << c << "\n";
}



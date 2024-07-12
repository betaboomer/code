#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;

    ll s = 0;

    while(n/5LL > 0LL){
        s += n/5LL;
        n/= 5LL;
    }
    cout << s << "\n";
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;

    vector <ll> a;

    a.push_back(n);

    while (n > 1){
        if (!(n % 2)) n = n/2LL;
        else n = 3LL*n + 1LL;
        a.push_back(n);
    }

    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}



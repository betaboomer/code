#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1; i++) cout << a[i]*a[i + 1] << " ";
    cout << "\n";
}
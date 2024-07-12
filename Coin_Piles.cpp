#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;

        int k = 2*a - b, k1 = 2*b - a;
        if (k % 3 == 0 && k >= 0 && k1 >= 0){
            if ((k/3)*3 == k && k >= 0) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        else cout << "NO" << "\n";
    }
}

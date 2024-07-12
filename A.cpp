#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--){
        long long a, b, l; cin >> a >> b >> l;

        set <long long> z;

        if (a == 1 and b == 1) cout << 1 << '\n';
        else {
            if (a > b) swap(a, b);
            for (long long pw_a = 1; pw_a <= l; pw_a *= a) {
                for (long long pw_b = 1; pw_b <= l; pw_b *= b) {
                    if (l % (pw_a * pw_b) == 0) {
                        z.insert(l / pw_a / pw_b);
                    }
                }
                if (a == 1) break;
            }
            cout << z.size() << '\n';
        }
    }
}



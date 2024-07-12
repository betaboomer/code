#include <bits/stdc++.h> 

using namespace std; 
 
const int N = 3e5 + 10, K = 12;
long long DP[N][K], A[N];
int n, k;

long long f(int i, int x) {
    if (i == n) return 0;

    long long &ret = DP[i][x];
    if (~ret) return ret;

    ret = A[i] + f(i + 1, x);
    long long mn = A[i];
    for (int hv = 1; hv <= k - x and hv + i < n; ++hv) {
        mn = min(mn, A[i + hv]);
        // cerr << i << ' ' << mn << ' ' << hv << '\n';
        ret = min(ret, (hv + 1) * mn + f(i + hv + 1, x + hv));
    }
    return ret;
}

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; ++i) cin >> A[i];
        for (int i = 0; i < n + 2; ++i) {
            for (int j = 0; j < k + 1; ++j) {
                DP[i][j] = -1;
            }
        }
        cout << f(0, 0) << '\n';
    }   
} 
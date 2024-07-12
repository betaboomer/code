#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll;

const ll INF = LLONG_MAX;

int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        int ind = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == x) ind = i;
        }

        int l = 0, r = n;
        while(r-l != 1){
            int m = (l+r)/2;
            if (a[m] <= x){
                l = m;
            }
            else{
                r = m;
            }
        }

        cout << "1\n";
        cout << ind + 1 << " " << l + 1 << "\n";
    }
} 
